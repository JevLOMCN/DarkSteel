// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 337

// Call @ 1447403a0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderType * __cdecl
UE::Core::Private::Function::TFunctionRefCaller<FGlobalShaderType_&___cdecl(void),FShaderType_&>::
Call(void *param_1)

{
  FShaderType *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001447403a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FShaderType *)(*param_1)();
  return pFVar1;
}

// Call @ 1447403b0

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderType * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FMeshMaterialShaderType_&___cdecl(void),FShaderType_&>::Call(void *param_1)

{
  FShaderType *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001447403b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FShaderType *)(*param_1)();
  return pFVar1;
}

// Call @ 1447403c0

FShaderParametersMetadata * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FShaderParametersMetadata_const_*___cdecl(void),FShaderParametersMetadata_const_*>
::Call(void *param_1)

{
  FShaderParametersMetadata *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001447403c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FShaderParametersMetadata *)(*param_1)();
  return pFVar1;
}

// Call @ 1447403d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FGraphicsPipelineStateInitializer_&),void,FGraphicsPipelineStateInitializer_&>
::Call(void *param_1,FGraphicsPipelineStateInitializer *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001447403d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 1447403e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``AddAmbientOcclusionPass'::__l25::<lambda_2>::operator()'::__l2::<lambda_2>,void,FRHICommandList_&>
::Call(void *param_1,FRHICommandList *param_2)

{
  FRHICommandList::SetDepthBounds(param_2,0.0,*(float *)param_1);
  return;
}

// Call @ 144740400

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``AddAmbientOcclusionPass'::__l25::<lambda_2>::operator()'::__l2::<lambda_3>,void,FRHICommandList_&>
::Call(void *param_1,FRHICommandList *param_2)

{
  FRHICommandList::SetDepthBounds(param_2,*(float *)param_1,__real_3f800000);
  return;
}

// Call @ 144803b20

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FShaderType * __cdecl
UE::Core::Private::Function::TFunctionRefCaller<FMaterialShaderType_&___cdecl(void),FShaderType_&>::
Call(void *param_1)

{
  FShaderType *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000144803b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FShaderType *)(*param_1)();
  return pFVar1;
}

// Call @ 144803b30

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDeferredShadingSceneRenderer::Render'::__l2::<lambda_11>,bool,int>::Call
          (void *param_1,int *param_2)

{
  bool bVar1;
  
  bVar1 = `FDeferredShadingSceneRenderer::Render'::__l2::<lambda_11>::operator()(param_1,*param_2);
  return bVar1;
}

// Call @ 14486a330

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers'::__l51::<lambda_2>,void,int>
::Call(void *param_1,int *param_2)

{
  `FDistanceFieldSceneData::UpdateDistanceFieldObjectBuffers'::__l51::<lambda_2>::operator()
            (param_1,*param_2);
  return;
}

// Call @ 144900ed0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FGPUSceneResourceParameters_&,FRDGBuilder_&),void,FGPUSceneResourceParameters_&,FRDGBuilder_&>
::Call(void *param_1,FGPUSceneResourceParameters *param_2,FRDGBuilder *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000144900edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,param_3);
  return;
}

// Call @ 144900ef0

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateByteAddressUploadBuffer_Impl<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_1>,unsigned_int>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return *(uint *)(lVar3 + 8) & 0x3fffffff;
}

// Call @ 144900f40

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateByteAddressUploadBuffer_Impl<TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_1>,unsigned_int>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return (uint)(*(int *)(lVar3 + 8) * 0x60) >> 2;
}

// Call @ 144900f90

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_1>,unsigned_int>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return *(uint *)(lVar3 + 8);
}

// Call @ 144900fe0

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_1>,unsigned_int>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return *(uint *)(lVar3 + 8);
}

// Call @ 144901030

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSceneUniformBufferMemberRegistration<FGPUSceneResourceParameters>::TSceneUniformBufferMemberRegistration<FGPUSceneResourceParameters>'::__l2::<lambda_1>,void,void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&>
::Call(void *param_1,void **param_2,FShaderParametersMetadata *param_3,FRDGBuilder *param_4)

{
  `TSceneUniformBufferMemberRegistration<FGPUSceneResourceParameters>::
  TSceneUniformBufferMemberRegistration<FGPUSceneResourceParameters>'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3,param_4);
  return;
}

// Call @ 144901040

TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
* __cdecl UE::Core::Private::Function::
          TFunctionRefCaller<`FGPUWorkGroupLoadBalancer::GetParametersAsync'::__l2::<lambda_1>,TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
          ::Call(void *param_1)

{
  return *(TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           **)param_1;
}

// Call @ 144901050

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`RequestGlobalDistanceFieldReadback_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FGlobalDistanceFieldReadback *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  FReadAccessScope FStack_28;
  
  pFVar1 = *(FGlobalDistanceFieldReadback **)param_1;
  if (GDFReadbackRequest == (FGlobalDistanceFieldReadback *)0x0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar1->ReadbackComplete,
               &FStack_28);
    if (((*(int *)&(pFVar1->ReadbackComplete).field_0x10 == 0) ||
        (plVar2 = *(longlong **)&(pFVar1->ReadbackComplete).field_0x8, plVar2 == (longlong *)0x0))
       || (cVar5 = (**(code **)(*plVar2 + 0x38))(), cVar5 == '\0')) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
      bVar4 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<673161545835872778>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GlobalDistanceField.cpp"
                         ,0x20a,"Readback->ReadbackComplete.IsBound()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&FStack_28);
    }
    if ((pFVar1->CallbackThread == UnusedAnchor) &&
       (bVar4 = Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<673161545835872779>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GlobalDistanceField.cpp"
                           ,0x20b,"Readback->CallbackThread != ENamedThreads::UnusedAnchor"), bVar4)
       ) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    bVar4 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<673161545835872776>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GlobalDistanceField.cpp"
                       ,0x208,"GDFReadbackRequest == nullptr");
    pFVar1 = GDFReadbackRequest;
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  GDFReadbackRequest = pFVar1;
  return;
}

// Call @ 144901060

TArray<unsigned_int,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::ResizeAndUploadToAsync'::__l2::<lambda_1>,TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1)

{
  return (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(*(longlong *)param_1 + 0x20);
}

// Call @ 144901070

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FViewElementPDI::RegisterDynamicResource'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FDynamicPrimitiveResource **ppFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FDynamicPrimitiveResource_*> *pFVar6;
  
  lVar2 = *(longlong *)param_1;
  ppFVar1 = (FDynamicPrimitiveResource **)((longlong)param_1 + 8);
  pFVar6 = (ForElementType<FDynamicPrimitiveResource_*> *)(lVar2 + 0x1ff0);
  if ((pFVar6->Data <= ppFVar1) && (ppFVar1 < pFVar6->Data + *(int *)(lVar2 + 0x1ffc))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(lVar2 + 0x1ff8);
  if (iVar5 == *(int *)(lVar2 + 0x1ffc)) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FDynamicPrimitiveResource_*>_>
                      (0x808,pFVar6,(int *)(lVar2 + 0x1ffc));
  }
  *(int *)(lVar2 + 0x1ff8) = iVar5 + 1;
  pFVar6->Data[iVar5] = *ppFVar1;
                    /* WARNING: Could not recover jumptable at 0x0001448f36dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**ppFVar1)(*ppFVar1,param_2);
  return;
}

// Call @ 144901080

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FViewElementPDI::DrawMesh'::__l16::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint *puVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  uVar10 = 0;
  lVar7 = *(longlong *)param_1;
  cVar2 = *(char *)(*(longlong *)(lVar7 + 0xa8) + 0x138);
  if (0 < *(int *)(lVar7 + 0xa0)) {
    lVar8 = 0;
    do {
      uVar9 = ~uVar10 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar10 < *(int *)(lVar7 + 0xa0)) {
        uVar6 = uVar9;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar7 = *(longlong *)param_1;
      if (cVar2 < '\0') {
        uVar6 = 0;
        if ((int)uVar10 < *(int *)(lVar7 + 0xa0)) {
          uVar6 = uVar9;
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
        if (*(longlong *)(lVar7 + 0x98) != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x98);
        }
        if ((*(longlong *)(lVar7 + 8 + lVar8) == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("bPrimitiveShaderDataComesFromSceneBuffer || NewMesh->Elements[ElementIndex].PrimitiveUniformBufferResource != 0"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicPrimitiveDrawing.inl"
                               ,0xf1,
                               L"FMeshBatch was not properly setup.  The primitive uniform buffer must be specified."
                              ), bVar5)) {
code_r0x0001448f38a2:
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        uVar6 = 0;
        if ((int)uVar10 < *(int *)(lVar7 + 0xa0)) {
          uVar6 = uVar9;
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
        if (*(longlong *)(lVar7 + 0x98) != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x98);
        }
        if (*(longlong *)(lVar7 + lVar8) != 0) {
          (**(code **)(**(longlong **)(*(longlong *)param_1 + 0xa8) + 0x30))();
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!NewMesh->Elements[ElementIndex].PrimitiveUniformBuffer",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DynamicPrimitiveDrawing.inl"
                             ,0xed,
                             L"FMeshBatch was assigned a PrimitiveUniformBuffer even though Vertex Factory %s fetches primitive shader data through a Scene buffer.  The assigned PrimitiveUniformBuffer cannot be respected.  Use PrimitiveUniformBufferResource instead for dynamic primitive data, or leave both null to get FPrimitiveSceneProxy->UniformBuffer."
                            );
          if (bVar5) goto code_r0x0001448f38a2;
        }
      }
      lVar7 = *(longlong *)param_1;
      uVar10 = uVar10 + 1;
      lVar8 = lVar8 + 0x98;
    } while ((int)uVar10 < *(int *)(lVar7 + 0xa0));
  }
  bVar5 = UseGPUScene((FStaticShaderPlatform)GMaxRHIShaderPlatform,
                      (FGenericStaticFeatureLevel)*(Type *)((longlong)param_1 + 0x10));
  if ((bVar5) && (-1 < cVar2)) {
    lVar7 = *(longlong *)param_1;
    uVar10 = 0;
    if (0 < *(int *)(lVar7 + 0xa0)) {
      lVar8 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar10 < *(int *)(lVar7 + 0xa0)) {
          uVar6 = ~uVar10 >> 0x1f;
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
        if (*(longlong *)(lVar7 + 0x98) != 0) {
          lVar7 = *(longlong *)(lVar7 + 0x98);
        }
        lVar3 = *(longlong *)(lVar8 + 8 + lVar7);
        if (lVar3 != 0) {
          puVar1 = (uint *)(lVar8 + 0x54 + lVar7);
          *puVar1 = *puVar1 & 0xfffffff9;
          puVar1 = (uint *)(lVar8 + 0x54 + lVar7);
          *puVar1 = *puVar1 | 1;
          (**(code **)**(undefined8 **)((longlong)param_1 + 8))
                    (*(undefined8 **)((longlong)param_1 + 8),*(undefined8 *)(lVar8 + 0x88 + lVar7),
                     *(undefined8 *)(lVar3 + 0x30),*(undefined4 *)(lVar8 + 0x60 + lVar7),
                     lVar7 + 0x90 + lVar8,lVar7 + 0x94 + lVar8);
        }
        lVar7 = *(longlong *)param_1;
        uVar10 = uVar10 + 1;
        lVar8 = lVar8 + 0x98;
      } while ((int)uVar10 < *(int *)(lVar7 + 0xa0));
    }
  }
  FMaterialRenderProxy::UpdateUniformExpressionCacheIfNeeded
            (*(FMaterialRenderProxy **)(*(longlong *)param_1 + 0xb0),
             *(Type *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 144901090

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateByteAddressUploadBuffer_Impl<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_2>,void_const_*>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  puVar3 = (undefined8 *)(*pcVar1)(uVar2);
  return (void *)*puVar3;
}

// Call @ 1449010e0

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateByteAddressUploadBuffer_Impl<TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_2>,void_const_*>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  puVar3 = (undefined8 *)(*pcVar1)(uVar2);
  return (void *)*puVar3;
}

// Call @ 144901130

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_2>,void_const_*>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  puVar3 = (undefined8 *)(*pcVar1)(uVar2);
  return (void *)*puVar3;
}

// Call @ 144901180

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_2>,void_const_*>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  puVar3 = (undefined8 *)(*pcVar1)(uVar2);
  return (void *)*puVar3;
}

// Call @ 1449011d0

TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
* __cdecl UE::Core::Private::Function::
          TFunctionRefCaller<`FGPUWorkGroupLoadBalancer::GetParametersAsync'::__l2::<lambda_2>,TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
          ::Call(void *param_1)

{
  return (TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *)(*(longlong *)param_1 + 0x10);
}

// Call @ 1449011e0

TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::ResizeAndUploadToAsync'::__l2::<lambda_2>,TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1)

{
  return (TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_> *)
         (*(longlong *)param_1 + 0x10);
}

// Call @ 1449011f0

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateByteAddressUploadBuffer_Impl<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_3>,unsigned___int64>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return (ulonglong)(uint)(*(int *)(lVar3 + 8) << 2);
}

// Call @ 144901240

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateByteAddressUploadBuffer_Impl<TArray<UE::HLSL::FLightSceneData,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_3>,unsigned___int64>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return (ulonglong)(uint)(*(int *)(lVar3 + 8) * 0x60);
}

// Call @ 144901290

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_3>,unsigned___int64>
::Call(void *param_1)

{
  uint uVar1;
  
  uVar1 = `CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FPackedItem,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'
          ::__l2::<lambda_3>::operator()(param_1);
  return (ulonglong)uVar1;
}

// Call @ 1449012b0

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_3>,unsigned___int64>
::Call(void *param_1)

{
  uint uVar1;
  
  uVar1 = `CreateStructuredBuffer_Impl<TArray<FGPUWorkGroupLoadBalancer::FWorkGroupInfo,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'
          ::__l2::<lambda_3>::operator()(param_1);
  return (ulonglong)uVar1;
}

// Call @ 1449012d0

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::RendererPrivateUtils::Implementation::TAsyncBufferScatterUploader<UE::HLSL::FLightSceneData,UE::RendererPrivateUtils::Implementation::FByteAddressBufferTraits,1>::ResizeAndUploadToAsync'::__l2::<lambda_3>,unsigned___int64>
::Call(void *param_1)

{
  return (longlong)*(int *)(*(longlong *)param_1 + 0x28);
}

// Call @ 144a6c830

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(RenderCurve::FRenderCurveSceneParameters_&,FRDGBuilder_&),void,RenderCurve::FRenderCurveSceneParameters_&,FRDGBuilder_&>
::Call(void *param_1,FRenderCurveSceneParameters *param_2,FRDGBuilder *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000144a6c83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,param_3);
  return;
}

// Call @ 144a6c850

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSceneUniformBufferMemberRegistration<RenderCurve::FRenderCurveSceneParameters>::TSceneUniformBufferMemberRegistration<RenderCurve::FRenderCurveSceneParameters>'::__l2::<lambda_1>,void,void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&>
::Call(void *param_1,void **param_2,FShaderParametersMetadata *param_3,FRDGBuilder *param_4)

{
  `TSceneUniformBufferMemberRegistration<RenderCurve::FRenderCurveSceneParameters>::
  TSceneUniformBufferMemberRegistration<RenderCurve::FRenderCurveSceneParameters>'::__l2::<lambda_1>
  ::operator()(param_1,*param_2,param_3,param_4);
  return;
}

// Call @ 144bad230

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_10>,unsigned___int64>
::Call(void *param_1)

{
  int iVar1;
  
  iVar1 = `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_10>::operator()(param_1);
  return (longlong)iVar1;
}

// Call @ 144bad250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_11>,unsigned_int>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(uint *)(*(longlong *)((longlong)param_1 + 0x10) + 0x48);
}

// Call @ 144bad260

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_12>,void_const_*>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(void **)(*(longlong *)((longlong)param_1 + 0x10) + 0x40);
}

// Call @ 144bad270

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_13>,unsigned___int64>
::Call(void *param_1)

{
  uint uVar1;
  
  uVar1 = `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_13>::operator()(param_1);
  return (ulonglong)uVar1;
}

// Call @ 144bad290

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_14>,unsigned_int>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(uint *)(*(longlong *)((longlong)param_1 + 0x10) + 0x58);
}

// Call @ 144bad2a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_15>,void_const_*>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(void **)(*(longlong *)((longlong)param_1 + 0x10) + 0x50);
}

// Call @ 144bad2b0

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_16>,unsigned___int64>
::Call(void *param_1)

{
  uint uVar1;
  
  uVar1 = `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_16>::operator()(param_1);
  return (ulonglong)uVar1;
}

// Call @ 144bad2d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_17>,unsigned_int>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(uint *)(*(longlong *)((longlong)param_1 + 0x10) + 0x28);
}

// Call @ 144bad2e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_18>,void_const_*>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(void **)(*(longlong *)((longlong)param_1 + 0x10) + 0x20);
}

// Call @ 144bad2f0

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_19>,unsigned___int64>
::Call(void *param_1)

{
  uint uVar1;
  
  uVar1 = `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_19>::operator()(param_1);
  return (ulonglong)uVar1;
}

// Call @ 144bad310

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_1>,unsigned_int>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return *(uint *)(lVar3 + 8);
}

// Call @ 144bad360

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_1>,unsigned_int>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return *(uint *)(lVar3 + 8);
}

// Call @ 144bad3b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateLoadBalancerGPUDataDeferred'::__l2::<lambda_1>,TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&>
::Call(void *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_> *pTVar4;
  
  FInstanceCullingOcclusionQueryDeferredContext::Execute
            (*(FInstanceCullingOcclusionQueryDeferredContext **)param_1);
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x20);
  if (*(int *)((longlong)plVar1 + 0xc) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentBatchNumItems == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                       ,0xdc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_> *
               )(*pcVar2)();
      return pTVar4;
    }
  }
  return (TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_> *)
         (*plVar1 + 8);
}

// Call @ 144bad410

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingOcclusionQueryDeferredContext::DeferredAlignedNumInstancesOutputCulling'::__l2::<lambda_1>,unsigned_int>
::Call(void *param_1)

{
  FInstanceCullingOcclusionQueryDeferredContext::Execute
            (*(FInstanceCullingOcclusionQueryDeferredContext **)param_1);
  return *(uint *)(*(longlong *)param_1 + 0x2c);
}

// Call @ 144bad440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingOcclusionQueryDeferredContext::DeferredInstanceIdData'::__l2::<lambda_1>,void_const_*>
::Call(void *param_1)

{
  FInstanceCullingOcclusionQueryDeferredContext::Execute
            (*(FInstanceCullingOcclusionQueryDeferredContext **)param_1);
  return *(void **)(*(longlong *)param_1 + 0x40);
}

// Call @ 144bad470

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingOcclusionQueryDeferredContext::DeferredInstanceIdDataSize'::__l2::<lambda_1>,unsigned___int64>
::Call(void *param_1)

{
  FInstanceCullingOcclusionQueryDeferredContext::Execute
            (*(FInstanceCullingOcclusionQueryDeferredContext **)param_1);
  return (ulonglong)(uint)(*(int *)(*(longlong *)param_1 + 0x48) << 2);
}

// Call @ 144bad4a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingOcclusionQueryDeferredContext::DeferredNumInstanceIdData'::__l2::<lambda_1>,unsigned_int>
::Call(void *param_1)

{
  FInstanceCullingOcclusionQueryDeferredContext::Execute
            (*(FInstanceCullingOcclusionQueryDeferredContext **)param_1);
  return *(uint *)(*(longlong *)param_1 + 0x48);
}

// Call @ 144bad4d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_20>,unsigned_int>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(uint *)(*(longlong *)((longlong)param_1 + 0x10) + 0xb8);
}

// Call @ 144bad4e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_21>,void_const_*>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(void **)(*(longlong *)((longlong)param_1 + 0x10) + 0xb0);
}

// Call @ 144bad4f0

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_22>,unsigned___int64>
::Call(void *param_1)

{
  uint uVar1;
  
  uVar1 = `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_22>::operator()(param_1);
  return (ulonglong)uVar1;
}

// Call @ 144bad510

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_23>,unsigned_int>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(int *)(*(longlong *)((longlong)param_1 + 0x10) + 0x38) * 5;
}

// Call @ 144bad520

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_24>,void_const_*>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(void **)(*(longlong *)((longlong)param_1 + 0x10) + 0x30);
}

// Call @ 144bad530

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_25>,unsigned___int64>
::Call(void *param_1)

{
  int iVar1;
  
  iVar1 = `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_25>::operator()(param_1);
  return (longlong)iVar1;
}

// Call @ 144bad550

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

int __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_26>,int>::Call
          (void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(int *)(*(longlong *)((longlong)param_1 + 0x10) + 0x38);
}

// Call @ 144bad560

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_27>,unsigned_int>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(uint *)(*(longlong *)((longlong)param_1 + 0x10) + 0x68);
}

// Call @ 144bad570

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_28>,void_const_*>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(void **)(*(longlong *)((longlong)param_1 + 0x10) + 0x60);
}

// Call @ 144bad580

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_29>,unsigned___int64>
::Call(void *param_1)

{
  uint uVar1;
  
  uVar1 = `FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_29>::operator()(param_1);
  return (ulonglong)uVar1;
}

// Call @ 144bad5a0

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_2>,void_const_*>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  puVar3 = (undefined8 *)(*pcVar1)(uVar2);
  return (void *)*puVar3;
}

// Call @ 144bad5f0

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_2>,void_const_*>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  puVar3 = (undefined8 *)(*pcVar1)(uVar2);
  return (void *)*puVar3;
}

// Call @ 144bad640

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateLoadBalancerGPUDataDeferred'::__l2::<lambda_2>,TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&>
::Call(void *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_> *pTVar4;
  
  FInstanceCullingOcclusionQueryDeferredContext::Execute
            (*(FInstanceCullingOcclusionQueryDeferredContext **)param_1);
  plVar1 = *(longlong **)(*(longlong *)param_1 + 0x20);
  if (*(int *)((longlong)plVar1 + 0xc) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentBatchNumItems == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  return (TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_> *)
         (*plVar1 + 0x18);
}

// Call @ 144bad6a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_2>,unsigned_int>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(uint *)(*(longlong *)((longlong)param_1 + 0x10) + 0x78);
}

// Call @ 144bad6b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l2::<lambda_30>,unsigned_int>
::Call(void *param_1)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this;
  void *_Src;
  uint uVar2;
  bool bVar3;
  longlong lVar4;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar4 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar4 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  uVar1 = *(uint *)(*(longlong *)((longlong)param_1 + 0x10) + 0xc4);
  bVar3 = PlatformGPUSceneUsesUniformBufferView
                    ((FStaticShaderPlatform)
                     *(EShaderPlatform *)(*(longlong *)((longlong)param_1 + 0x10) + 0xc0));
  uVar2 = uVar1 + 0x400;
  if (!bVar3) {
    uVar2 = uVar1;
  }
  return uVar2;
}

// Call @ 144bad6c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_31>,unsigned_int>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar5 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar5 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  lVar5 = *(longlong *)((longlong)param_1 + 0x10);
  uVar3 = *(uint *)((longlong)param_1 + 0x18);
  uVar4 = 0;
  if ((int)uVar3 < *(int *)(lVar5 + 0xa8)) {
    uVar4 = ~uVar3 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)(*(longlong *)(lVar5 + 0xa0) + 8 + (longlong)(int)uVar3 * 0x10);
}

// Call @ 144bad6d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_32>,void_const_*>
::Call(void *param_1)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  uint uVar5;
  longlong lVar6;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar6 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  pvVar4 = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,pvVar4,lVar6 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  lVar6 = *(longlong *)((longlong)param_1 + 0x10);
  uVar1 = *(uint *)((longlong)param_1 + 0x18);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar6 + 0xa8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  return *(void **)(*(longlong *)(lVar6 + 0xa0) + (longlong)(int)uVar1 * 0x10);
}

// Call @ 144bad6e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_33>,unsigned___int64>
::Call(void *param_1)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  uint uVar5;
  longlong lVar6;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar6 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar6 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  lVar6 = *(longlong *)((longlong)param_1 + 0x10);
  uVar1 = *(uint *)((longlong)param_1 + 0x18);
  uVar5 = 0;
  if ((int)uVar1 < *(int *)(lVar6 + 0xa8)) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (longlong)*(int *)(*(longlong *)(lVar6 + 0xa0) + 8 + (longlong)(int)uVar1 * 0x10) << 2;
}

// Call @ 144bad6f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_34>,unsigned_int>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar6 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar6 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  lVar6 = *(longlong *)((longlong)param_1 + 0x10);
  uVar3 = *(uint *)((longlong)param_1 + 0x18);
  uVar5 = 0;
  if ((int)uVar3 < *(int *)(lVar6 + 0x98)) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  plVar4 = (longlong *)((longlong)(int)uVar3 * 0x20 + *(longlong *)(lVar6 + 0x90));
  if (*(int *)((longlong)plVar4 + 0xc) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentBatchNumItems == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                       ,0xdc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)(*plVar4 + 0x10);
}

// Call @ 144bad700

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_35>,void_const_*>
::Call(void *param_1)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar7 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  pvVar4 = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,pvVar4,lVar7 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  lVar7 = *(longlong *)((longlong)param_1 + 0x10);
  uVar1 = *(uint *)((longlong)param_1 + 0x18);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar7 + 0x98)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  plVar5 = (longlong *)((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar7 + 0x90));
  if (*(int *)((longlong)plVar5 + 0xc) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentBatchNumItems == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                       ,0xdc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  return *(void **)(*plVar5 + 8);
}

// Call @ 144bad710

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_36>,unsigned___int64>
::Call(void *param_1)

{
  int iVar1;
  
  iVar1 = `FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_36>::operator()(param_1);
  return (longlong)iVar1;
}

// Call @ 144bad730

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_37>,unsigned_int>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar6 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar6 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  lVar6 = *(longlong *)((longlong)param_1 + 0x10);
  uVar3 = *(uint *)((longlong)param_1 + 0x18);
  uVar5 = 0;
  if ((int)uVar3 < *(int *)(lVar6 + 0x98)) {
    uVar5 = ~uVar3 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  plVar4 = (longlong *)((longlong)(int)uVar3 * 0x20 + *(longlong *)(lVar6 + 0x90));
  if (*(int *)((longlong)plVar4 + 0xc) != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentBatchNumItems == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                       ,0xe2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return *(uint *)(*plVar4 + 0x20);
}

// Call @ 144bad740

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_38>,void_const_*>
::Call(void *param_1)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar7 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  pvVar4 = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,pvVar4,lVar7 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  lVar7 = *(longlong *)((longlong)param_1 + 0x10);
  uVar1 = *(uint *)((longlong)param_1 + 0x18);
  uVar6 = 0;
  if ((int)uVar1 < *(int *)(lVar7 + 0x98)) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  plVar5 = (longlong *)((longlong)(int)uVar1 * 0x20 + *(longlong *)(lVar7 + 0x90));
  if (*(int *)((longlong)plVar5 + 0xc) != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentBatchNumItems == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingLoadBalancer.h"
                       ,0xe2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  return *(void **)(*plVar5 + 0x18);
}

// Call @ 144bad750

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_39>,unsigned___int64>
::Call(void *param_1)

{
  int iVar1;
  
  iVar1 = `FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_39>::operator()(param_1);
  return (longlong)iVar1;
}

// Call @ 144bad770

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_3>,unsigned___int64>
::Call(void *param_1)

{
  uint uVar1;
  
  uVar1 = `CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedBatch,TSizedDefaultAllocator<32>_>_const_&>'
          ::__l2::<lambda_3>::operator()(param_1);
  return (ulonglong)uVar1;
}

// Call @ 144bad790

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&>'::__l2::<lambda_3>,unsigned___int64>
::Call(void *param_1)

{
  uint uVar1;
  
  uVar1 = `CreateStructuredBuffer_Impl<TArray<FInstanceCullingLoadBalancerBase::FPackedItem,TSizedDefaultAllocator<32>_>_const_&>'
          ::__l2::<lambda_3>::operator()(param_1);
  return (ulonglong)uVar1;
}

// Call @ 144bad7b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_3>,void_const_*>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(void **)(*(longlong *)((longlong)param_1 + 0x10) + 0x70);
}

// Call @ 144bad7c0

TIntVector3<int> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_40>,UE::Math::TIntVector3<int>_>
::Call(TIntVector3<int> *__return_storage_ptr__,void *param_1)

{
  `FInstanceCullingContext::CreateDeferredContext'::__l22::<lambda_40>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 144bad7f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_41>,unsigned_int>
::Call(void *param_1)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this;
  void *_Src;
  uint uVar2;
  longlong lVar3;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar3 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar3 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  uVar1 = *(uint *)(*(longlong *)((longlong)param_1 + 0x10) + 300);
  uVar2 = 1;
  if (1 < uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}

// Call @ 144bad800

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_42>,void_const_*>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return (void *)0x0;
}

// Call @ 144bad810

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_43>,unsigned___int64>
::Call(void *param_1)

{
  int iVar1;
  
  iVar1 = `FInstanceCullingContext::CreateDeferredContext'::__l31::<lambda_43>::operator()(param_1);
  return (longlong)iVar1;
}

// Call @ 144bad830

TIntVector3<int> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l32::<lambda_44>,UE::Math::TIntVector3<int>_>
::Call(TIntVector3<int> *__return_storage_ptr__,void *param_1)

{
  FComputeShaderUtils::GetGroupCountWrapped
            (__return_storage_ptr__,*(int *)(*(longlong *)param_1 + 0x128));
  return __return_storage_ptr__;
}

// Call @ 144bad860

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_45>,unsigned_int>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(uint *)(*(longlong *)((longlong)param_1 + 0x10) + 0x88);
}

// Call @ 144bad870

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_46>,void_const_*>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return *(void **)(*(longlong *)((longlong)param_1 + 0x10) + 0x80);
}

// Call @ 144bad880

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_47>,unsigned___int64>
::Call(void *param_1)

{
  uint uVar1;
  
  uVar1 = `FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_47>::operator()(param_1);
  return (ulonglong)uVar1;
}

// Call @ 144bad8a0

TIntVector3<int> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l33::<lambda_48>,UE::Math::TIntVector3<int>_>
::Call(TIntVector3<int> *__return_storage_ptr__,void *param_1)

{
  FComputeShaderUtils::GetGroupCountWrapped
            (__return_storage_ptr__,*(int *)(*(longlong *)((longlong)param_1 + 8) + 300));
  return __return_storage_ptr__;
}

// Call @ 144bad8d0

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_4>,unsigned___int64>
::Call(void *param_1)

{
  uint uVar1;
  
  uVar1 = `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_4>::operator()(param_1);
  return (ulonglong)uVar1;
}

// Call @ 144bad8f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_5>,unsigned_int>
::Call(void *param_1)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this;
  void *_Src;
  uint uVar2;
  longlong lVar3;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar3 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar3 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  uVar1 = *(uint *)(*(longlong *)((longlong)param_1 + 0x10) + 0x130);
  uVar2 = 1;
  if (1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}

// Call @ 144bad900

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_6>,void_const_*>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return (void *)0x0;
}

// Call @ 144bad910

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_7>,unsigned___int64>
::Call(void *param_1)

{
  int iVar1;
  
  iVar1 = `FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_7>::operator()(param_1);
  return (longlong)iVar1;
}

// Call @ 144bad930

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_8>,unsigned_int>
::Call(void *param_1)

{
  uint uVar1;
  FInstanceCullingDeferredContext *this;
  void *_Src;
  uint uVar2;
  longlong lVar3;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar3 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar3 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  uVar1 = *(uint *)(*(longlong *)((longlong)param_1 + 0x10) + 300);
  uVar2 = 1;
  if (1 < (int)uVar1) {
    uVar2 = uVar1;
  }
  return uVar2;
}

// Call @ 144bad940

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FInstanceCullingContext::CreateDeferredContext'::__l12::<lambda_9>,void_const_*>
::Call(void *param_1)

{
  FInstanceCullingDeferredContext *this;
  void *_Src;
  longlong lVar1;
  TArray<FBuildInstanceIdBufferAndCommandsFromPrimitiveIdsCs::FParameters_*,TSizedDefaultAllocator<32>_>
  TStack_18;
  
  TStack_18.ArrayNum = *(int *)((longlong)param_1 + 8);
  lVar1 = (longlong)TStack_18.ArrayNum;
  this = *(FInstanceCullingDeferredContext **)((longlong)param_1 + 0x10);
  _Src = *(void **)param_1;
  TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (TStack_18.ArrayNum == 0) {
    TStack_18.ArrayMax = 0;
  }
  else {
    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,TStack_18.ArrayNum,0,&TStack_18.AllocatorInstance,TStack_18.ArrayNum,
               &TStack_18.ArrayMax);
    memcpy(TStack_18.AllocatorInstance.Data,_Src,lVar1 << 3);
  }
  FInstanceCullingDeferredContext::ProcessBatched(this,&TStack_18);
  return (void *)0x0;
}

// Call @ 144c2c950

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AddLocalFogVolume'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  ForAnyElementType *pFVar8;
  
  pFVar1 = (FScriptContainerElement *)((longlong)param_1 + 8);
  plVar7 = *(longlong **)(*(longlong *)param_1 + 0x4740);
  plVar2 = plVar7 + *(int *)(*(longlong *)param_1 + 0x4748);
  if (plVar7 != plVar2) {
    do {
      if (*plVar7 == *(longlong *)pFVar1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Scene->LocalFogVolumes.Contains(FogProxy)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LocalFogVolumeRendering.cpp"
                           ,0x10b,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        break;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar2);
  }
  lVar3 = *(longlong *)param_1;
  pFVar8 = (ForAnyElementType *)(lVar3 + 0x4740);
  if (((pFVar8->Data <= pFVar1) && (pFVar1 < pFVar8->Data + (longlong)*(int *)(lVar3 + 0x474c) * 8))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)(lVar3 + 0x4748);
  if (iVar6 == *(int *)(lVar3 + 0x474c)) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar8,(int *)(lVar3 + 0x474c));
  }
  *(int *)(lVar3 + 0x4748) = iVar6 + 1;
  *(longlong *)(pFVar8->Data + (longlong)iVar6 * 8) = *(longlong *)pFVar1;
  return;
}

// Call @ 144c2c960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::RemoveLocalFogVolume'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  
  lVar1 = *(longlong *)param_1;
  plVar2 = *(longlong **)(lVar1 + 0x4740);
  if (plVar2 != plVar2 + *(int *)(lVar1 + 0x4748)) {
    plVar4 = plVar2;
    while (*plVar4 != *(longlong *)((longlong)param_1 + 8)) {
      plVar4 = plVar4 + 1;
      if (plVar4 == plVar2 + *(int *)(lVar1 + 0x4748)) {
        return;
      }
    }
    iVar3 = (int)((longlong)plVar4 - (longlong)plVar2 >> 3);
    if (iVar3 != -1) {
      memmove(plVar2 + iVar3,plVar2 + iVar3 + 1,
              (longlong)((*(int *)(lVar1 + 0x4748) - iVar3) + -1) << 3);
      *(int *)(lVar1 + 0x4748) = *(int *)(lVar1 + 0x4748) + -1;
    }
  }
  return;
}

// Call @ 144c2c9e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UpdateLumenMeshCards'::__l15::<lambda_1>,void,FRDGScatterUploader_&>::Call
          (void *param_1,FRDGScatterUploader *param_2)

{
  FRenderBounds *pFVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  FRenderBounds *pFVar6;
  FRenderBounds *pFVar7;
  FRenderBounds *pFVar8;
  FRenderBounds *pFVar9;
  FRenderBounds *pFVar10;
  float fVar11;
  uint *puVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  FLumenPrimitiveGroupCullingInfo *pFVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  FLumenPrimitiveGroup *pFVar20;
  longlong lVar21;
  uint *puVar22;
  undefined1 auStack_c8 [4];
  uint uStack_c4;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  undefined4 uStack_9c;
  uint *puStack_98;
  undefined1 auStack_90 [32];
  undefined8 uStack_70;
  undefined8 uStack_68;
  FHashElementId FStack_60;
  float fStack_5c;
  byte bStack_58;
  uchar uStack_57;
  
  fVar11 = __real_3f000000;
  pFVar16 = (FLumenPrimitiveGroupCullingInfo *)0x0;
  auStack_90._8_8_ = (ForElementType<FPrimitiveSceneInfo_*>)0x0;
  auStack_90._16_16_ = ___xmm_ffffffffffffffff0000000100000000;
  lVar3 = *(longlong *)param_1;
  uStack_c4 = *(uint *)(lVar3 + 0x160);
  uVar19 = (ulonglong)(int)uStack_c4;
  puVar22 = *(uint **)(lVar3 + 0x158);
  uStack_70._0_4_ = -1;
  uStack_70._4_4_ = -1;
  puStack_98 = puVar22 + uVar19;
  uStack_68._0_4_ = -1;
  uStack_68._4_4_ = 0xffffffff;
  FStack_60.Index = -1;
  fStack_5c = 1.0;
  bStack_58 = bStack_58 & 0xd0 | 0x10;
  uStack_57 = 0xff;
  while( true ) {
    puVar12 = puStack_98;
    if (*(int *)(lVar3 + 0x160) != (int)uVar19) {
      auStack_c8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_c8);
    }
    if (puVar22 == puVar12) break;
    lVar4 = *(longlong *)param_1;
    uVar17 = *puVar22;
    if ((int)uVar17 < *(int *)(lVar4 + 400)) {
      pFVar20 = (FLumenPrimitiveGroup *)auStack_90;
      if (((int)uVar17 < 0) || (*(int *)(lVar4 + 0x1c0) <= (int)uVar17)) {
        bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L"");
        if (bVar13) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      lVar21 = lVar4 + 0x1a8;
      if (*(longlong *)(lVar4 + 0x1b8) != 0) {
        lVar21 = *(longlong *)(lVar4 + 0x1b8);
      }
      uVar14 = uVar17;
      if ((int)uVar17 < 0) {
        uVar14 = uVar17 + 0x1f;
      }
      if ((*(uint *)(lVar21 + (longlong)((int)uVar14 >> 5) * 4) >> (uVar17 & 0x1f) & 1) != 0) {
        lVar4 = *(longlong *)param_1;
        bVar13 = TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::IsAllocated
                           ((TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *)(lVar4 + 0x188),
                            uVar17);
        if (!bVar13) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsAllocated(ElementIndex)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                              ,0x18a,L"");
          if (bVar13) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        uVar15 = (int)(uVar17 + ((int)uVar17 >> 0x1f & 0x7fffU)) >> 0xf;
        uVar14 = 0;
        if ((int)uVar15 < *(int *)(lVar4 + 0x1a0)) {
          uVar14 = ~uVar15 >> 0x1f;
        }
        if (uVar14 == 0) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar13) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        pFVar20 = (FLumenPrimitiveGroup *)
                  (*(longlong *)(*(longlong *)(lVar4 + 0x198) + (longlong)(int)uVar15 * 8) +
                  (longlong)(int)(uVar17 + uVar15 * -0x8000) * 0x40);
        pFVar16 = FLumenSceneData::GetPrimitiveGroupCullingInfo
                            (*(FLumenSceneData **)param_1,pFVar20,false);
      }
      *(uint *)(param_2->_padding_ + (ulonglong)(uint)param_2->_padding_ * 4) = uVar17;
      iVar18 = (int)param_2->_padding_;
      uVar17 = iVar18 * (int)param_2->_padding_;
      uVar19 = (ulonglong)uVar17;
      lVar4 = param_2->_padding_;
      *(int *)&param_2->_padding_ = iVar18 + 1;
      if (pFVar16 == (FLumenPrimitiveGroupCullingInfo *)0x0) {
        *(undefined8 *)(uVar19 + lVar4) = 0;
        *(undefined8 *)(uVar19 + 8 + lVar4) = 0;
        *(undefined8 *)(uVar19 + 0x10 + lVar4) = 0;
        *(undefined8 *)(uVar19 + 0x18 + lVar4) = 0;
      }
      else {
        fStack_b8 = ((pFVar16->WorldSpaceBoundingBox).Min.field0_0x0._s_0.X +
                    (pFVar16->WorldSpaceBoundingBox).Max.field0_0x0._s_0.X) * fVar11;
        fStack_b4 = ((pFVar16->WorldSpaceBoundingBox).Min.field0_0x0._s_0.Y +
                    (pFVar16->WorldSpaceBoundingBox).Max.field0_0x0._s_0.Y) * fVar11;
        fStack_b0 = ((pFVar16->WorldSpaceBoundingBox).Min.field0_0x0._s_0.Z +
                    (pFVar16->WorldSpaceBoundingBox).Max.field0_0x0._s_0.Z) * fVar11;
        pfVar2 = (float *)(uVar19 + lVar4);
        *pfVar2 = fStack_b8;
        pfVar2[1] = fStack_b4;
        pfVar2[2] = fStack_b0;
        pfVar2[3] = 1.0;
        pFVar6 = &pFVar16->WorldSpaceBoundingBox;
        pFVar1 = &pFVar16->WorldSpaceBoundingBox;
        pFVar7 = &pFVar16->WorldSpaceBoundingBox;
        pFVar8 = &pFVar16->WorldSpaceBoundingBox;
        pFVar9 = &pFVar16->WorldSpaceBoundingBox;
        pFVar10 = &pFVar16->WorldSpaceBoundingBox;
        uStack_ac = 0x3f800000;
        pFVar16 = (FLumenPrimitiveGroupCullingInfo *)0x0;
        fStack_a8 = ((pFVar6->Max).field0_0x0._s_0.X - (pFVar1->Min).field0_0x0._s_0.X) * fVar11;
        fStack_a4 = ((pFVar7->Max).field0_0x0._s_0.Y - (pFVar8->Min).field0_0x0._s_0.Y) * fVar11;
        fStack_a0 = ((pFVar9->Max).field0_0x0._s_0.Z - (pFVar10->Min).field0_0x0._s_0.Z) * fVar11;
        uStack_9c = 0x3f800000;
        pfVar2 = (float *)(uVar19 + 0x10 + lVar4);
        *pfVar2 = fStack_a8;
        pfVar2[1] = fStack_a4;
        pfVar2[2] = fStack_a0;
        pfVar2[3] = 1.0;
      }
      iVar18 = -1;
      if (-1 < pFVar20->MeshCardsIndex) {
        iVar18 = pFVar20->MeshCardsIndex;
      }
      *(int *)((ulonglong)uVar17 + 0xc + lVar4) = iVar18;
      *(uint *)((ulonglong)uVar17 + 0x1c + lVar4) = (byte)pFVar20->field_0x38 & 0xf;
    }
    uVar19 = (ulonglong)uStack_c4;
    puVar22 = puVar22 + 1;
  }
  if ((ForElementType<FPrimitiveSceneInfo_*>)auStack_90._8_8_ !=
      (ForElementType<FPrimitiveSceneInfo_*>)0x0) {
    FMemory::Free((void *)auStack_90._8_8_);
  }
  return;
}

// Call @ 144c2c9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Lumen::UpdateCardSceneBuffer'::__l17::<lambda_2>,void,FRDGScatterUploader_&>::
Call(void *param_1,FRDGScatterUploader *param_2)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  uint *puVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  FLumenPrimitiveGroup *pFVar9;
  ulonglong uVar10;
  ushort *puVar11;
  FLumenCard *pFVar12;
  uint uVar13;
  FLumenPrimitiveGroup *pFVar14;
  uint *puVar15;
  undefined1 auStackY_228 [32];
  undefined1 auStack_1f8 [4];
  uint uStack_1f4;
  FRDGScatterUploader *pFStack_1f0;
  longlong lStack_1e8;
  uint *puStack_1e0;
  FLumenCard FStack_1d8;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  pFStack_1f0 = param_2;
  FLumenCard::FLumenCard(&FStack_1d8);
  lStack_1e8 = *(longlong *)param_1;
  pFVar14 = (FLumenPrimitiveGroup *)0x0;
  uStack_1f4 = *(uint *)(lStack_1e8 + 0x118);
  uVar10 = (ulonglong)(int)uStack_1f4;
  puVar15 = *(uint **)(lStack_1e8 + 0x110);
  puStack_1e0 = puVar15 + uVar10;
  while( true ) {
    puVar4 = puStack_1e0;
    if (*(int *)(lStack_1e8 + 0x118) != (int)uVar10) {
      auStack_1f8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_1f8);
    }
    if (puVar15 == puVar4) break;
    lVar2 = *(longlong *)param_1;
    lVar8 = 0x40;
    uVar13 = *puVar15;
    if (*(char *)(lVar2 + 0x108) == '\0') {
      lVar8 = 0x3c;
    }
    if ((int)uVar13 < *(int *)(lVar8 + lVar2)) {
      if (((int)uVar13 < 0) || (*(int *)(lVar2 + 0x30) <= (int)uVar13)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      lVar8 = *(longlong *)(lVar2 + 0x28);
      if (*(longlong *)(lVar2 + 0x28) == 0) {
        lVar8 = lVar2 + 0x18;
      }
      uVar6 = uVar13;
      if ((int)uVar13 < 0) {
        uVar6 = uVar13 + 0x1f;
      }
      if ((*(uint *)(lVar8 + (longlong)((int)uVar6 >> 5) * 4) >> (uVar13 & 0x1f) & 1) == 0) {
        pFVar12 = &FStack_1d8;
      }
      else {
        lVar2 = *(longlong *)param_1;
        uVar6 = 0;
        if ((int)uVar13 < *(int *)(lVar2 + 0x10)) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        pFVar12 = (FLumenCard *)((longlong)(int)uVar13 * 400 + *(longlong *)(lVar2 + 8));
      }
      uVar6 = pFVar12->MeshCardsIndex;
      pFVar9 = pFVar14;
      if (-1 < (int)uVar6) {
        lVar2 = *(longlong *)param_1;
        uVar7 = 0;
        if ((int)uVar6 < *(int *)(lVar2 + 0x2a0)) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        iVar1 = *(int *)((longlong)(int)uVar6 * 400 + 0x148 + *(longlong *)(lVar2 + 0x298));
        if (-1 < iVar1) {
          pFVar9 = TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::operator[]
                             ((TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *)
                              (*(longlong *)param_1 + 0x188),iVar1);
        }
      }
      *(uint *)(pFStack_1f0->_padding_ + (ulonglong)(uint)pFStack_1f0->_padding_ * 4) = uVar13;
      iVar1 = (int)pFStack_1f0->_padding_;
      *(int *)&pFStack_1f0->_padding_ = iVar1 + 1;
      FLumenCardGPUData::FillData
                (pFVar12,pFVar9,
                 (TVector4<float> *)
                 ((ulonglong)(uint)(iVar1 * (int)pFStack_1f0->_padding_) + pFStack_1f0->_padding_));
    }
    puVar15 = puVar15 + 1;
    uVar10 = (ulonglong)uStack_1f4;
  }
  lVar2 = *(longlong *)param_1;
  *(undefined4 *)(lVar2 + 0x118) = 0;
  if (*(int *)(lVar2 + 0x11c) < 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)(lVar2 + 0x110),0,(int *)(lVar2 + 0x11c));
  }
  *(undefined4 *)(lVar2 + 0x138) = 0;
  puVar11 = &FStack_1d8.SurfaceMipMaps[0].PageTableSpanSize;
  do {
    if (*puVar11 != 0) {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_874545965275544426>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenMeshCards.cpp"
                         ,0x496,"SurfaceMipMaps[MipIndex].PageTableSpanSize == 0");
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar13 = (int)pFVar14 + 1;
    pFVar14 = (FLumenPrimitiveGroup *)(ulonglong)uVar13;
    puVar11 = puVar11 + 6;
  } while (uVar13 < 9);
  return;
}

// Call @ 144c2ca00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UpdateLumenMeshCards'::__l19::<lambda_2>,void,FRDGScatterUploader_&>::Call
          (void *param_1,FRDGScatterUploader *param_2)

{
  uint *puVar1;
  float *pfVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  code *pcVar12;
  uint uVar13;
  bool bVar14;
  uint uVar15;
  longlong lVar16;
  uint *puVar17;
  ulonglong uVar18;
  FLumenMeshCards *pFVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_278 [32];
  longlong lStack_258;
  longlong lStack_250;
  undefined1 auStack_248 [8];
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  undefined8 uStack_234;
  float fStack_22c;
  FLumenMeshCards FStack_1f8;
  ulonglong uStack_68;
  
  uStack_68 = __security_cookie.value ^ (ulonglong)auStack_278;
  FLumenMeshCards::FLumenMeshCards(&FStack_1f8);
  lVar10 = *(longlong *)param_1;
  puVar17 = *(uint **)(lVar10 + 0x268);
  iVar7 = *(int *)(lVar10 + 0x270);
  puVar1 = puVar17 + iVar7;
  while( true ) {
    if (*(int *)(lVar10 + 0x270) != iVar7) {
      auStack_248[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_248);
    }
    if (puVar17 == puVar1) break;
    lVar11 = *(longlong *)param_1;
    lVar16 = 0x2d0;
    uVar8 = *puVar17;
    if (*(char *)(lVar11 + 0x398) == '\0') {
      lVar16 = 0x2cc;
    }
    if ((int)uVar8 < *(int *)(lVar16 + lVar11)) {
      if (((int)uVar8 < 0) || (*(int *)(lVar11 + 0x2c0) <= (int)uVar8)) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5c6,L"");
        if (bVar14) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      lVar16 = *(longlong *)(lVar11 + 0x2b8);
      if (*(longlong *)(lVar11 + 0x2b8) == 0) {
        lVar16 = lVar11 + 0x2a8;
      }
      uVar15 = uVar8;
      if ((int)uVar8 < 0) {
        uVar15 = uVar8 + 0x1f;
      }
      if ((*(uint *)(lVar16 + (longlong)((int)uVar15 >> 5) * 4) >> (uVar8 & 0x1f) & 1) == 0) {
        pFVar19 = &FStack_1f8;
      }
      else {
        lVar11 = *(longlong *)param_1;
        iVar9 = *(int *)(lVar11 + 0x2a0);
        uVar15 = 0;
        if ((int)uVar8 < iVar9) {
          uVar15 = ~uVar8 >> 0x1f;
        }
        if (uVar15 == 0) {
          lStack_258 = (longlong)(int)uVar8;
          lStack_250 = (longlong)iVar9;
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        pFVar19 = (FLumenMeshCards *)((longlong)(int)uVar8 * 400 + *(longlong *)(lVar11 + 0x298));
      }
      *(uint *)(param_2->_padding_ + (ulonglong)(uint)param_2->_padding_ * 4) = uVar8;
      iVar9 = (int)param_2->_padding_;
      uVar18 = (ulonglong)(uint)(iVar9 * (int)param_2->_padding_);
      lVar11 = param_2->_padding_;
      *(int *)&param_2->_padding_ = iVar9 + 1;
      dVar3 = (pFVar19->LocalToWorld).M[3][0];
      dVar4 = (pFVar19->LocalToWorld).M[3][1];
      dVar5 = (pFVar19->LocalToWorld).M[3][2];
      fStack_238 = (float)dVar5;
      fStack_240 = (float)dVar3;
      fStack_23c = (float)dVar4;
      fVar21 = (float)(dVar3 - (double)fStack_240);
      fStack_22c = (float)(dVar5 - (double)fStack_238);
      fVar20 = (float)(dVar4 - (double)fStack_23c);
      uStack_234 = CONCAT44(fVar20,fVar21);
      *(float *)(uVar18 + lVar11) = fStack_240;
      *(float *)(uVar18 + 4 + lVar11) = fStack_23c;
      *(float *)(uVar18 + 8 + lVar11) = fStack_238;
      *(undefined4 *)(uVar18 + 0xc + lVar11) = 0x3f800000;
      dVar3 = (pFVar19->WorldToLocalRotation).M[0][1];
      dVar4 = (pFVar19->WorldToLocalRotation).M[0][2];
      pfVar2 = (float *)(uVar18 + 0x10 + lVar11);
      *pfVar2 = (float)(pFVar19->WorldToLocalRotation).M[0][0];
      pfVar2[1] = (float)dVar3;
      pfVar2[2] = (float)dVar4;
      pfVar2[3] = fVar21;
      dVar3 = (pFVar19->WorldToLocalRotation).M[1][1];
      dVar4 = (pFVar19->WorldToLocalRotation).M[1][2];
      pfVar2 = (float *)(uVar18 + 0x20 + lVar11);
      *pfVar2 = (float)(pFVar19->WorldToLocalRotation).M[1][0];
      pfVar2[1] = (float)dVar3;
      pfVar2[2] = (float)dVar4;
      pfVar2[3] = fVar20;
      dVar3 = (pFVar19->WorldToLocalRotation).M[2][1];
      dVar4 = (pFVar19->WorldToLocalRotation).M[2][2];
      pfVar2 = (float *)(uVar18 + 0x30 + lVar11);
      *pfVar2 = (float)(pFVar19->WorldToLocalRotation).M[2][0];
      pfVar2[1] = (float)dVar3;
      pfVar2[2] = (float)dVar4;
      pfVar2[3] = fStack_22c;
      bVar14 = pFVar19->bMostlyTwoSided;
      bVar6 = pFVar19->bHeightfield;
      uVar8 = pFVar19->CardLookup[1];
      uVar13 = pFVar19->NumCards;
      uVar15 = pFVar19->CardLookup[0];
      *(uint *)(uVar18 + 0x40 + lVar11) = pFVar19->FirstCardIndex;
      *(uint *)(uVar18 + 0x44 + lVar11) =
           -(uint)(bVar14 != false) & 0x20000 | -(uint)(bVar6 != false) & 0x10000 |
           (uint)(ushort)uVar13;
      *(uint *)(uVar18 + 0x48 + lVar11) = uVar15;
      *(uint *)(uVar18 + 0x4c + lVar11) = uVar8;
      uVar8 = pFVar19->CardLookup[3];
      uVar15 = pFVar19->CardLookup[4];
      uVar13 = pFVar19->CardLookup[5];
      *(uint *)(uVar18 + 0x50 + lVar11) = pFVar19->CardLookup[2];
      *(uint *)(uVar18 + 0x54 + lVar11) = uVar8;
      *(uint *)(uVar18 + 0x58 + lVar11) = uVar15;
      *(uint *)(uVar18 + 0x5c + lVar11) = uVar13;
    }
    puVar17 = puVar17 + 1;
  }
  if (FStack_1f8.ScenePrimitiveIndices.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0)
  {
    FMemory::Free((void *)FStack_1f8.ScenePrimitiveIndices.AllocatorInstance.SecondaryData);
  }
  return;
}

// Call @ 144c2ca10

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UpdateLumenMeshCards'::__l23::<lambda_3>,void,FRDGScatterUploader_&>::Call
          (void *param_1,FRDGScatterUploader *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  uint *puVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  FLumenHeightfield *pFVar11;
  uint *puVar12;
  longlong lVar13;
  undefined1 auStackX_8 [8];
  FLumenHeightfield aFStackX_18 [2];
  uint *puStackX_20;
  
  lVar4 = *(longlong *)param_1;
  aFStackX_18[0].MeshCardsIndex = -1;
  puVar12 = *(uint **)(lVar4 + 0x4f8);
  iVar1 = *(int *)(lVar4 + 0x500);
  puStackX_20 = puVar12 + iVar1;
  while( true ) {
    puVar7 = puStackX_20;
    if (*(int *)(lVar4 + 0x500) != iVar1) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (puVar12 == puVar7) break;
    lVar5 = *(longlong *)param_1;
    lVar10 = 0x560;
    uVar2 = *puVar12;
    if (*(char *)(lVar5 + 0x628) == '\0') {
      lVar10 = 0x55c;
    }
    if ((int)uVar2 < *(int *)(lVar10 + lVar5)) {
      if (((int)uVar2 < 0) || (*(int *)(lVar5 + 0x550) <= (int)uVar2)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar10 = *(longlong *)param_1;
      lVar13 = *(longlong *)(lVar5 + 0x548);
      if (*(longlong *)(lVar5 + 0x548) == 0) {
        lVar13 = lVar5 + 0x538;
      }
      uVar9 = uVar2;
      if ((int)uVar2 < 0) {
        uVar9 = uVar2 + 0x1f;
      }
      if ((*(uint *)(lVar13 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar2 & 0x1f) & 1) == 0) {
        pFVar11 = aFStackX_18;
      }
      else {
        uVar9 = 0;
        if ((int)uVar2 < *(int *)(lVar10 + 0x530)) {
          uVar9 = ~uVar2 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar8) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        pFVar11 = (FLumenHeightfield *)(*(longlong *)(lVar10 + 0x528) + (longlong)(int)uVar2 * 4);
      }
      *(uint *)(param_2->_padding_ + (ulonglong)(uint)param_2->_padding_ * 4) = uVar2;
      iVar3 = (int)param_2->_padding_;
      *(int *)&param_2->_padding_ = iVar3 + 1;
      FLumenHeightfieldGPUData::FillData
                (pFVar11,(TSparseSpanArray<FLumenMeshCards> *)(*(longlong *)param_1 + 0x298),
                 (TVector4<float> *)
                 ((ulonglong)(uint)(iVar3 * (int)param_2->_padding_) + param_2->_padding_));
    }
    puVar12 = puVar12 + 1;
  }
  return;
}

// Call @ 144c2ca20

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UpdateLumenMeshCards'::__l39::<lambda_4>,void,FRDGScatterUploader_&>::Call
          (void *param_1,FRDGScatterUploader *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  int *piVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStackX_8 [8];
  undefined4 auStackX_20 [2];
  
  lVar5 = *(longlong *)param_1;
  uVar2 = *(uint *)(lVar5 + 0x780);
  uVar13 = (ulonglong)(int)uVar2;
  piVar14 = *(int **)(lVar5 + 0x778);
  piVar1 = piVar14 + uVar13;
  while( true ) {
    if (*(int *)(lVar5 + 0x780) != (int)uVar13) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (piVar14 == piVar1) break;
    lVar6 = *(longlong *)((longlong)param_1 + 8);
    iVar3 = *piVar14;
    if (iVar3 < *(int *)(lVar6 + 0x2890)) {
      if (iVar3 < 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      uVar16 = 0;
      lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x2888) + (longlong)iVar3 * 8);
      iVar3 = *(int *)(lVar6 + 0x228);
      iVar4 = *(int *)(lVar6 + 0x224);
      if (0 < iVar3) {
        do {
          iVar12 = *(int *)(lVar6 + 0x130);
          lVar7 = *(longlong *)param_1;
          if (iVar12 < 1) {
            auStackX_20[0] = 0xffffffff;
          }
          else {
            uVar11 = iVar12 - 1U;
            if ((int)uVar16 < (int)(iVar12 - 1U)) {
              uVar11 = uVar16;
            }
            uVar10 = 0;
            if ((int)uVar11 < iVar12) {
              uVar10 = ~uVar11 >> 0x1f;
            }
            if (uVar10 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            lVar15 = lVar6 + 0x120;
            if (*(longlong *)(lVar6 + 0x128) != 0) {
              lVar15 = *(longlong *)(lVar6 + 0x128);
            }
            iVar12 = *(int *)(lVar15 + (longlong)(int)uVar11 * 4);
            bVar9 = TChunkedSparseArray<FLumenPrimitiveGroup,2097152>::IsAllocated
                              ((TChunkedSparseArray<FLumenPrimitiveGroup,2097152> *)(lVar7 + 0x188),
                               iVar12);
            if (!bVar9) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsAllocated(ElementIndex)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSparseSpanArray.h"
                                 ,0x192,L"");
              if (bVar9) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            uVar10 = (int)(iVar12 + (iVar12 >> 0x1f & 0x7fffU)) >> 0xf;
            uVar11 = 0;
            if ((int)uVar10 < *(int *)(lVar7 + 0x1a0)) {
              uVar11 = ~uVar10 >> 0x1f;
            }
            if (uVar11 == 0) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar9) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            auStackX_20[0] =
                 *(undefined4 *)
                  ((longlong)(int)(iVar12 + uVar10 * -0x8000) * 0x40 + 0x1c +
                  *(longlong *)(*(longlong *)(lVar7 + 0x198) + (longlong)(int)uVar10 * 8));
          }
          iVar12 = iVar4 + uVar16;
          if (iVar12 < *(int *)((longlong)param_1 + 0x10)) {
            *(int *)(param_2->_padding_ + (ulonglong)(uint)param_2->_padding_ * 4) = iVar12;
            iVar12 = (int)param_2->_padding_;
            uVar11 = (uint)param_2->_padding_;
            *(int *)&param_2->_padding_ = iVar12 + 1;
            memcpy((void *)((ulonglong)(iVar12 * uVar11) + param_2->_padding_),auStackX_20,
                   (ulonglong)uVar11);
          }
          uVar16 = uVar16 + 1;
        } while ((int)uVar16 < iVar3);
      }
    }
    piVar14 = piVar14 + 1;
    uVar13 = (ulonglong)uVar2;
  }
  return;
}

// Call @ 144d5d950

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UpdateSurfaceCacheMeshCards'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FLumenSurfaceCacheUpdateMeshCardsTask::AnyThreadTask
            ((FLumenSurfaceCacheUpdateMeshCardsTask *)((longlong)(int)uVar1 * 0xd8 + *plVar2));
  return;
}

// Call @ 144d5d9d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UpdateSurfaceCachePrimitives'::__l3::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FLumenSurfaceCacheCullPrimitivesTask::AnyThreadTask
            ((FLumenSurfaceCacheCullPrimitivesTask *)((longlong)(int)uVar1 * 0xa8 + *plVar2));
  return;
}

// Call @ 144d5da50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UpdateSurfaceCachePrimitives'::__l3::<lambda_2>,void,int>::Call
          (void *param_1,int *param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  plVar2 = *(longlong **)param_1;
  uVar1 = *param_2;
  uVar5 = 0;
  if ((int)uVar1 < (int)plVar2[1]) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FLumenSurfaceCacheCullInstancesTask::AnyThreadTask
            ((FLumenSurfaceCacheCullInstancesTask *)((longlong)(int)uVar1 * 0xb8 + *plVar2));
  return;
}

// Call @ 144d5dad0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLumenSceneData::UploadPageTable'::__l16::<lambda_2>,void,FRDGScatterUploader_&>
::Call(void *param_1,FRDGScatterUploader *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  undefined1 auStackX_8 [8];
  undefined8 uStackX_18;
  
  lVar5 = *(longlong *)param_1;
  puVar11 = *(uint **)(lVar5 + 0x750);
  iVar2 = *(int *)(lVar5 + 0x758);
  puVar1 = puVar11 + iVar2;
  while( true ) {
    if (*(int *)(lVar5 + 0x758) != iVar2) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (puVar11 == puVar1) break;
    lVar10 = *(longlong *)param_1;
    lVar9 = 0x680;
    uVar3 = *puVar11;
    if (*(char *)(lVar10 + 0x748) == '\0') {
      lVar9 = 0x67c;
    }
    if ((int)uVar3 < *(int *)(lVar9 + lVar10)) {
      uStackX_18 = 0;
      if ((int)uVar3 < *(int *)(lVar9 + lVar10)) {
        if (((int)uVar3 < 0) || (*(int *)(lVar10 + 0x670) <= (int)uVar3)) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index>=0 && Index<NumBits",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x5c6,L"");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        lVar9 = *(longlong *)(lVar10 + 0x668);
        if (*(longlong *)(lVar10 + 0x668) == 0) {
          lVar9 = lVar10 + 0x658;
        }
        uVar8 = uVar3;
        if ((int)uVar3 < 0) {
          uVar8 = uVar3 + 0x1f;
        }
        if ((*(uint *)(lVar9 + (longlong)((int)uVar8 >> 5) * 4) >> (uVar3 & 0x1f) & 1) != 0) {
          lVar10 = *(longlong *)param_1;
          uVar8 = 0;
          if ((int)uVar3 < *(int *)(lVar10 + 0x650)) {
            uVar8 = ~uVar3 >> 0x1f;
          }
          if (uVar8 == 0) {
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          lVar10 = (longlong)(int)uVar3 * 0x50 + *(longlong *)(lVar10 + 0x648);
          uStackX_18 = CONCAT44(*(undefined4 *)(lVar10 + 0x18),
                                (uint)uStackX_18 |
                                ((*(ushort *)(lVar10 + 0x20) & 0xf |
                                 (uint)*(ushort *)(lVar10 + 0x22) << 4) << 0xc |
                                *(ushort *)(lVar10 + 0x1e) & 0xfff) << 0xc |
                                *(ushort *)(lVar10 + 0x1c) & 0xfff);
        }
      }
      *(uint *)(param_2->_padding_ + (ulonglong)(uint)param_2->_padding_ * 4) = uVar3;
      iVar4 = (int)param_2->_padding_;
      uVar3 = (uint)param_2->_padding_;
      *(int *)&param_2->_padding_ = iVar4 + 1;
      memcpy((void *)((ulonglong)(iVar4 * uVar3) + param_2->_padding_),&uStackX_18,(ulonglong)uVar3)
      ;
    }
    puVar11 = puVar11 + 1;
  }
  return;
}

// Call @ 144d5dae0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FLumenSceneData::UploadPageTable'::__l20::<lambda_3>,void,FRDGScatterUploader_&>
::Call(void *param_1,FRDGScatterUploader *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  TIntPoint<int>_u_0_s_0 TVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  FLumenPageTableEntry *pFVar14;
  FLumenCard *pFVar15;
  ulonglong uVar16;
  TVector4<float> *pTVar17;
  TIntPoint<int>_u_0 TVar18;
  uint *puVar19;
  double dVar20;
  double dVar21;
  undefined1 auStackX_8 [8];
  int iStack_f4;
  TVector2<double>_u_0 aTStack_c8 [3];
  undefined4 uStack_94;
  
  uVar8 = _UNK_150689648;
  uVar7 = ___xmm_3f800000000000000000000000000000;
  lVar4 = *(longlong *)param_1;
  uVar2 = *(uint *)(lVar4 + 0x758);
  uVar16 = (ulonglong)(int)uVar2;
  puVar19 = *(uint **)(lVar4 + 0x750);
  puVar1 = puVar19 + uVar16;
  uStack_94 = 0xffffffff;
  dVar20 = __real_3ff0000000000000 / (double)(int)*(undefined8 *)(lVar4 + 0xa48);
  dVar21 = __real_3ff0000000000000 /
           (double)(int)((ulonglong)*(undefined8 *)(lVar4 + 0xa48) >> 0x20);
  do {
    while( true ) {
      if (*(int *)(lVar4 + 0x758) != (int)uVar16) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
      }
      if (puVar19 == puVar1) {
        return;
      }
      lVar12 = 0x680;
      uVar3 = *puVar19;
      if (*(char *)(*(longlong *)param_1 + 0x748) == '\0') {
        lVar12 = 0x67c;
      }
      if ((int)uVar3 < *(int *)(lVar12 + *(longlong *)param_1)) break;
LAB_144d4e70b:
      uVar16 = (ulonglong)uVar2;
      puVar19 = puVar19 + 1;
    }
    *(uint *)(param_2->_padding_ + (ulonglong)(uint)param_2->_padding_ * 4) = uVar3;
    iVar11 = (int)param_2->_padding_;
    *(int *)&param_2->_padding_ = iVar11 + 1;
    lVar13 = 0x680;
    lVar12 = *(longlong *)param_1;
    pTVar17 = (TVector4<float> *)
              ((ulonglong)(uint)(iVar11 * (int)param_2->_padding_) + param_2->_padding_);
    if (*(char *)(lVar12 + 0x748) == '\0') {
      lVar13 = 0x67c;
    }
    if (*(int *)(lVar13 + lVar12) <= (int)uVar3) {
LAB_144d4e6a5:
      pTVar17[3].field0_0x0._s_0.Z = 0.0;
      pTVar17[3].field0_0x0._s_0.W = 0.0;
      (pTVar17->field0_0x0)._s_0.X = -NAN;
      *(undefined8 *)((longlong)&pTVar17->field0_0x0 + 4) = 0;
      (pTVar17->field0_0x0)._s_0.W = 0.0;
      *(undefined8 *)&pTVar17[1].field0_0x0 = uVar7;
      *(undefined8 *)((longlong)&pTVar17[1].field0_0x0 + 8) = uVar8;
      *(undefined8 *)&pTVar17[2].field0_0x0 = 0;
      *(undefined8 *)((longlong)&pTVar17[2].field0_0x0 + 8) = 0;
      *(undefined8 *)&pTVar17[3].field0_0x0 = 0;
      *(undefined8 *)&pTVar17[4].field0_0x0 = 0;
      *(undefined8 *)((longlong)&pTVar17[4].field0_0x0 + 8) = 0;
      goto LAB_144d4e70b;
    }
    if ((((int)uVar3 < 0) || (*(int *)(lVar12 + 0x670) <= (int)uVar3)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Index>=0 && Index<NumBits",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x5c6,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar13 = *(longlong *)(lVar12 + 0x668);
    if (*(longlong *)(lVar12 + 0x668) == 0) {
      lVar13 = lVar12 + 0x658;
    }
    uVar10 = uVar3;
    if ((int)uVar3 < 0) {
      uVar10 = uVar3 + 0x1f;
    }
    if ((*(uint *)(lVar13 + (longlong)((int)uVar10 >> 5) * 4) >> (uVar3 & 0x1f) & 1) == 0)
    goto LAB_144d4e6a5;
    lVar12 = *(longlong *)param_1;
    uVar10 = 0;
    if ((int)uVar3 < *(int *)(lVar12 + 0x650)) {
      uVar10 = ~uVar3 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar12 = *(longlong *)(lVar12 + 0x648);
    if ((*(int *)(lVar12 + (longlong)(int)uVar3 * 0x50) < 0) ||
       (*(int *)(lVar12 + 4 + (longlong)(int)uVar3 * 0x50) < 0)) goto LAB_144d4e6a5;
    pFVar14 = TSparseSpanArray<FLumenPageTableEntry>::operator[]
                        ((TSparseSpanArray<FLumenPageTableEntry> *)(*(longlong *)param_1 + 0x648),
                         uVar3);
    pFVar15 = TSparseSpanArray<FLumenCard>::operator[]
                        ((TSparseSpanArray<FLumenCard> *)(*(longlong *)param_1 + 8),
                         pFVar14->CardIndex);
    uVar16 = (ulonglong)pFVar14->ResLevel;
    if (((pFVar14->ResLevel < 3) || (8 < uVar16 - 3)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("MipIndex >= 0 && MipIndex < (sizeof(UEArrayCountHelper(SurfaceMipMaps)) - 1)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneData.h"
                           ,0x162,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    TVar18 = (TIntPoint<int>_u_0)
             ((ulonglong)pFVar15->SurfaceMipMaps[uVar16 - 3].SizeInPagesX << 4 |
             (ulonglong)pFVar15->SurfaceMipMaps[uVar16 - 3].SizeInPagesY << 0x24);
    if ((-1 < (pFVar14->SubAllocationSize).field0_0x0._s_0.X) ||
       (-1 < (pFVar14->SubAllocationSize).field0_0x0._s_0.Y)) {
      TVar5 = (pFVar14->SubAllocationSize).field0_0x0._s_0;
      iStack_f4 = TVar5.Y;
      iVar11 = TVar5.X;
      TVar18._0_4_ = (int)((iVar11 >> 0x1f & 7U) + iVar11) >> 3;
      TVar18._s_0.Y = (int)((iStack_f4 >> 0x1f & 7U) + iStack_f4) >> 3;
    }
    aTStack_c8[0]._0_8_ = dVar20;
    aTStack_c8[0]._8_8_ = dVar21;
    FLumenCardPageGPUData::FillData
              (pFVar14,pFVar15->SurfaceMipMaps[uVar16 - 3].PageTableSpanOffset,
               (TIntPoint<int>)TVar18,(TVector2<double> *)&aTStack_c8[0]._s_0,pTVar17);
    uVar16 = (ulonglong)uVar2;
    puVar19 = puVar19 + 1;
  } while( true );
}

// Call @ 144d5daf0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDeferredShadingSceneRenderer::UpdateLumenScene'[::K]::<lambda_6>,void,TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
::Call(void *param_1,
      TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
      *param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  FName FVar4;
  longlong *plVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  uint *puVar11;
  uint *puVar12;
  FPackedView *pFVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_FDeferredShadingSceneRenderer::UpdateLumenScene(FRDGBuilder_&,FLumenSceneFrameTemporaries_&)_[::K]::<lambda_6>::operator()(TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)const_::_2_::FStat_CreateLumenPackedViews>
  FVar19;
  FPackedView *pFVar20;
  FPackedView *pFVar21;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FPackedView *pFVar22;
  longlong lVar23;
  uint *puVar24;
  longlong lVar25;
  undefined1 auStackY_1a78 [32];
  undefined1 auStack_1a17 [3];
  FColor_u_0 FStack_1a14;
  FName FStack_1a10;
  uint *puStack_1a08;
  FName FStack_1a00;
  FName FStack_19f8;
  LARGE_INTEGER LStack_19e8;
  FStatMessage FStack_19e0;
  FName FStack_19d0;
  FName aFStack_19c8 [2];
  FPackedView FStack_19b8;
  FPackedViewParams FStack_15e8;
  FPackedView FStack_428;
  ulonglong uStack_58;
  
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_1a78;
  puStack_1a08 = param_1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_CreateLumenPackedViews ==
          (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_FDeferredShadingSceneRenderer::UpdateLumenScene(FRDGBuilder_&,FLumenSceneFrameTemporaries_&)_[::K]::<lambda_6>::operator()(TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)const_::_2_::FStat_CreateLumenPackedViews>
           )0x0) {
        pFVar18 = ::FName::FName(&FStack_19d0,"CreateLumenPackedViews");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_CreateLumenPackedViews,*pFVar18,
                   L"CreateLumenPackedViews","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                   ,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar19 = StatPtr_CreateLumenPackedViews;
  if (StatPtr_CreateLumenPackedViews ==
      (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_FDeferredShadingSceneRenderer::UpdateLumenScene(FRDGBuilder_&,FLumenSceneFrameTemporaries_&)_[::K]::<lambda_6>::operator()(TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)const_::_2_::FStat_CreateLumenPackedViews>
       )0x0) {
    pFVar18 = ::FName::FName(aFStack_19c8,"CreateLumenPackedViews");
    FVar19 = (FThreadSafeStaticStat<_public:___cdecl__private:_void___cdecl_FDeferredShadingSceneRenderer::UpdateLumenScene(FRDGBuilder_&,FLumenSceneFrameTemporaries_&)_[::K]::<lambda_6>::operator()(TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&)const_::_2_::FStat_CreateLumenPackedViews>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_CreateLumenPackedViews,*pFVar18,
                          L"CreateLumenPackedViews","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar4 = *(FName *)FVar19;
  bVar8 = false;
  bVar9 = false;
  FStack_19f8.ComparisonIndex.Value = 0;
  FStack_19f8.Number = 0;
  bVar14 = false;
  bVar15 = false;
  if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      FStack_1a14.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&FStack_1a14._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar14 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_1a00.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
        FStack_1a00.Number = FVar4.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_1a00,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Lumen\\LumenSceneRendering.cpp"
                   ,0xb84);
        bVar8 = true;
        bVar9 = true;
        bVar14 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FStack_1a10 = FVar4;
      FThreadStats::AddMessage(FVar4,CycleScopeStart);
      bVar14 = true;
      goto LAB_144d4f266;
    }
  }
  bVar9 = bVar15;
  bVar8 = bVar14;
  bVar14 = false;
  FStack_1a10 = FStack_19f8;
LAB_144d4f266:
  puVar11 = puStack_1a08;
  fVar10 = __real_3f800000;
  puVar24 = *(uint **)puStack_1a08;
  iVar2 = *(int *)((longlong)puStack_1a08 + 8);
  puStack_1a08 = puVar24 + iVar2;
  while( true ) {
    puVar12 = puStack_1a08;
    if (*(int *)((longlong)puVar11 + 8) != iVar2) {
      auStack_1a17[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStack_1a17);
    }
    FVar4 = FStack_1a10;
    if (puVar24 == puVar12) break;
    uVar3 = *puVar24;
    plVar5 = *(longlong **)((longlong)puVar11 + 0x10);
    uVar16 = 0;
    if ((int)uVar3 < (int)plVar5[1]) {
      uVar16 = ~uVar3 >> 0x1f;
    }
    if (uVar16 == 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar15) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    lVar23 = *plVar5;
    lVar25 = (longlong)(int)uVar3 * 0xa10;
    FViewMatrices::FViewMatrices(&FStack_15e8.ViewMatrices);
    FViewMatrices::FViewMatrices(&FStack_15e8.PrevViewMatrices);
    FStack_15e8.LODScaleFactor = 1.0;
    FStack_15e8.StreamingPriorityCategory = 0;
    FStack_15e8.MinBoundsRadius = 0.0;
    FStack_15e8.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    FStack_15e8.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    FStack_15e8.HZBTestViewRect.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    FStack_15e8.HZBTestViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    FStack_15e8.ViewLODDistanceFactor = 1.0;
    FStack_15e8.Flags = 2;
    FStack_15e8.CullingViewOrigin.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    FStack_15e8.CullingViewOrigin.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    FStack_15e8.TargetLayerIndex = -1;
    FStack_15e8.PrevTargetLayerIndex = -1;
    FStack_15e8.CullingViewOrigin.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    FStack_15e8.GlobalClippingPlane._padding_ = 0;
    FStack_15e8.GlobalClippingPlane._padding_ = 0;
    FStack_15e8.TargetMipLevel = 0;
    FStack_15e8.TargetMipCount = 1;
    FStack_15e8.RangeBasedCullingDistance = 0.0;
    FStack_15e8.MaxPixelsPerEdgeMultipler = 1.0;
    FStack_15e8.bUseCullingViewOverrides = false;
    FStack_15e8.CullingViewScreenMultipleSq = 0.0;
    FStack_15e8.CullingViewMinRadiusTestFactorSq = 0.0;
    FStack_15e8.GlobalClippingPlane._padding_ = 0;
    FStack_15e8.GlobalClippingPlane.W = 0.0;
    FStack_15e8.InstanceOcclusionQueryMask = 0;
    FStack_15e8.LightingChannelMask = 7;
    FStack_15e8.bUseLightingChannelMask = false;
    FStack_15e8.bUseCurrentPreTranslationForHZB = false;
    FStack_15e8.SceneRendererPrimaryViewId = -1;
    FStack_15e8.DynamicDepthCullRange.field0_0x0._s_0.X = 0.0;
    FStack_15e8.DynamicDepthCullRange.field0_0x0._s_0.Y = 3.4028235e+38;
    memcpy(&FStack_15e8,(void *)(lVar25 + lVar23 + 0xc0),0x880);
    memcpy(&FStack_15e8.PrevViewMatrices,(void *)(lVar25 + lVar23 + 0xc0),0x880);
    FStack_15e8.ViewRect.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(lVar25 + 0x20 + lVar23);
    FStack_15e8.ViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(lVar25 + 0x28 + lVar23);
    FStack_15e8.RasterContextSize.field0_0x0 = *(TIntPoint<int>_u_0 *)((longlong)puVar11 + 0x1c);
    FStack_15e8.MaxPixelsPerEdgeMultipler = fVar10 / *(float *)(lVar25 + 0x9e8 + lVar23);
    pFVar20 = Nanite::CreatePackedView(&FStack_19b8,&FStack_15e8);
    lVar23 = 7;
    pFVar13 = &FStack_428;
    do {
      pFVar22 = pFVar13;
      pFVar21 = pFVar20;
      uVar7 = *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[0] + 2);
      *(undefined8 *)(pFVar22->SVPositionToTranslatedWorld).M[0] =
           *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[0];
      *(undefined8 *)((pFVar22->SVPositionToTranslatedWorld).M[0] + 2) = uVar7;
      uVar7 = *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[1] + 2);
      *(undefined8 *)(pFVar22->SVPositionToTranslatedWorld).M[1] =
           *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[1];
      *(undefined8 *)((pFVar22->SVPositionToTranslatedWorld).M[1] + 2) = uVar7;
      uVar7 = *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[2] + 2);
      *(undefined8 *)(pFVar22->SVPositionToTranslatedWorld).M[2] =
           *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[2];
      *(undefined8 *)((pFVar22->SVPositionToTranslatedWorld).M[2] + 2) = uVar7;
      uVar7 = *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[3] + 2);
      *(undefined8 *)(pFVar22->SVPositionToTranslatedWorld).M[3] =
           *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[3];
      *(undefined8 *)((pFVar22->SVPositionToTranslatedWorld).M[3] + 2) = uVar7;
      uVar7 = *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[0] + 2);
      *(undefined8 *)(pFVar22->ViewToTranslatedWorld).M[0] =
           *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[0];
      *(undefined8 *)((pFVar22->ViewToTranslatedWorld).M[0] + 2) = uVar7;
      uVar7 = *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[1] + 2);
      *(undefined8 *)(pFVar22->ViewToTranslatedWorld).M[1] =
           *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[1];
      *(undefined8 *)((pFVar22->ViewToTranslatedWorld).M[1] + 2) = uVar7;
      uVar7 = *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[2] + 2);
      *(undefined8 *)(pFVar22->ViewToTranslatedWorld).M[2] =
           *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[2];
      *(undefined8 *)((pFVar22->ViewToTranslatedWorld).M[2] + 2) = uVar7;
      uVar7 = *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[3] + 2);
      *(undefined8 *)(pFVar22->ViewToTranslatedWorld).M[3] =
           *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[3];
      *(undefined8 *)((pFVar22->ViewToTranslatedWorld).M[3] + 2) = uVar7;
      lVar23 = lVar23 + -1;
      pFVar20 = (FPackedView *)&pFVar21->TranslatedWorldToView;
      pFVar13 = (FPackedView *)&pFVar22->TranslatedWorldToView;
    } while (lVar23 != 0);
    uVar7 = *(undefined8 *)((pFVar21->TranslatedWorldToView).M[0] + 2);
    *(undefined8 *)(pFVar22->TranslatedWorldToView).M[0] =
         *(undefined8 *)(pFVar21->TranslatedWorldToView).M[0];
    *(undefined8 *)((pFVar22->TranslatedWorldToView).M[0] + 2) = uVar7;
    uVar7 = *(undefined8 *)((pFVar21->TranslatedWorldToView).M[1] + 2);
    *(undefined8 *)(pFVar22->TranslatedWorldToView).M[1] =
         *(undefined8 *)(pFVar21->TranslatedWorldToView).M[1];
    *(undefined8 *)((pFVar22->TranslatedWorldToView).M[1] + 2) = uVar7;
    uVar7 = *(undefined8 *)((pFVar21->TranslatedWorldToView).M[2] + 2);
    *(undefined8 *)(pFVar22->TranslatedWorldToView).M[2] =
         *(undefined8 *)(pFVar21->TranslatedWorldToView).M[2];
    *(undefined8 *)((pFVar22->TranslatedWorldToView).M[2] + 2) = uVar7;
    uVar7 = *(undefined8 *)((pFVar21->TranslatedWorldToView).M[3] + 2);
    *(undefined8 *)(pFVar22->TranslatedWorldToView).M[3] =
         *(undefined8 *)(pFVar21->TranslatedWorldToView).M[3];
    *(undefined8 *)((pFVar22->TranslatedWorldToView).M[3] + 2) = uVar7;
    uVar7 = *(undefined8 *)((pFVar21->TranslatedWorldToClip).M[0] + 2);
    *(undefined8 *)(pFVar22->TranslatedWorldToClip).M[0] =
         *(undefined8 *)(pFVar21->TranslatedWorldToClip).M[0];
    *(undefined8 *)((pFVar22->TranslatedWorldToClip).M[0] + 2) = uVar7;
    pFVar20 = (param_2->AllocatorInstance).Data;
    if ((pFVar20 <= &FStack_428) && (&FStack_428 < pFVar20 + param_2->ArrayMax)) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar15) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar17 = param_2->ArrayNum;
    if (iVar17 == param_2->ArrayMax) {
      iVar17 = ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FPackedView>_>
                         (0x3d0,0x10,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar17 + 1;
    lVar23 = 7;
    pFVar20 = &FStack_428;
    pFVar13 = (param_2->AllocatorInstance).Data + iVar17;
    do {
      pFVar22 = pFVar13;
      pFVar21 = pFVar20;
      uVar7 = *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[0] + 2);
      *(undefined8 *)(pFVar22->SVPositionToTranslatedWorld).M[0] =
           *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[0];
      *(undefined8 *)((pFVar22->SVPositionToTranslatedWorld).M[0] + 2) = uVar7;
      uVar7 = *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[1] + 2);
      *(undefined8 *)(pFVar22->SVPositionToTranslatedWorld).M[1] =
           *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[1];
      *(undefined8 *)((pFVar22->SVPositionToTranslatedWorld).M[1] + 2) = uVar7;
      uVar7 = *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[2] + 2);
      *(undefined8 *)(pFVar22->SVPositionToTranslatedWorld).M[2] =
           *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[2];
      *(undefined8 *)((pFVar22->SVPositionToTranslatedWorld).M[2] + 2) = uVar7;
      uVar7 = *(undefined8 *)((pFVar21->SVPositionToTranslatedWorld).M[3] + 2);
      *(undefined8 *)(pFVar22->SVPositionToTranslatedWorld).M[3] =
           *(undefined8 *)(pFVar21->SVPositionToTranslatedWorld).M[3];
      *(undefined8 *)((pFVar22->SVPositionToTranslatedWorld).M[3] + 2) = uVar7;
      uVar7 = *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[0] + 2);
      *(undefined8 *)(pFVar22->ViewToTranslatedWorld).M[0] =
           *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[0];
      *(undefined8 *)((pFVar22->ViewToTranslatedWorld).M[0] + 2) = uVar7;
      uVar7 = *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[1] + 2);
      *(undefined8 *)(pFVar22->ViewToTranslatedWorld).M[1] =
           *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[1];
      *(undefined8 *)((pFVar22->ViewToTranslatedWorld).M[1] + 2) = uVar7;
      uVar7 = *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[2] + 2);
      *(undefined8 *)(pFVar22->ViewToTranslatedWorld).M[2] =
           *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[2];
      *(undefined8 *)((pFVar22->ViewToTranslatedWorld).M[2] + 2) = uVar7;
      uVar7 = *(undefined8 *)((pFVar21->ViewToTranslatedWorld).M[3] + 2);
      *(undefined8 *)(pFVar22->ViewToTranslatedWorld).M[3] =
           *(undefined8 *)(pFVar21->ViewToTranslatedWorld).M[3];
      *(undefined8 *)((pFVar22->ViewToTranslatedWorld).M[3] + 2) = uVar7;
      lVar23 = lVar23 + -1;
      pFVar20 = (FPackedView *)&pFVar21->TranslatedWorldToView;
      pFVar13 = (FPackedView *)&pFVar22->TranslatedWorldToView;
    } while (lVar23 != 0);
    uVar7 = *(undefined8 *)((pFVar21->TranslatedWorldToView).M[0] + 2);
    puVar24 = puVar24 + 1;
    *(undefined8 *)(pFVar22->TranslatedWorldToView).M[0] =
         *(undefined8 *)(pFVar21->TranslatedWorldToView).M[0];
    *(undefined8 *)((pFVar22->TranslatedWorldToView).M[0] + 2) = uVar7;
    uVar7 = *(undefined8 *)((pFVar21->TranslatedWorldToView).M[1] + 2);
    *(undefined8 *)(pFVar22->TranslatedWorldToView).M[1] =
         *(undefined8 *)(pFVar21->TranslatedWorldToView).M[1];
    *(undefined8 *)((pFVar22->TranslatedWorldToView).M[1] + 2) = uVar7;
    uVar7 = *(undefined8 *)((pFVar21->TranslatedWorldToView).M[2] + 2);
    *(undefined8 *)(pFVar22->TranslatedWorldToView).M[2] =
         *(undefined8 *)(pFVar21->TranslatedWorldToView).M[2];
    *(undefined8 *)((pFVar22->TranslatedWorldToView).M[2] + 2) = uVar7;
    uVar7 = *(undefined8 *)((pFVar21->TranslatedWorldToView).M[3] + 2);
    *(undefined8 *)(pFVar22->TranslatedWorldToView).M[3] =
         *(undefined8 *)(pFVar21->TranslatedWorldToView).M[3];
    *(undefined8 *)((pFVar22->TranslatedWorldToView).M[3] + 2) = uVar7;
    uVar7 = *(undefined8 *)((pFVar21->TranslatedWorldToClip).M[0] + 2);
    *(undefined8 *)(pFVar22->TranslatedWorldToClip).M[0] =
         *(undefined8 *)(pFVar21->TranslatedWorldToClip).M[0];
    *(undefined8 *)((pFVar22->TranslatedWorldToClip).M[0] + 2) = uVar7;
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar14) && (FVar4 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      FStack_19e0.NameAndInfo.Index = FVar4.ComparisonIndex.Value;
      FStack_19e0.NameAndInfo.Number = FVar4.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_19e8);
      FStack_19e0.StatData.Pad[4] = '\0';
      FStack_19e0.StatData.Pad[5] = '\0';
      FStack_19e0.StatData.Pad[6] = '\0';
      FStack_19e0.StatData.Pad[7] = '\0';
      FStack_19e0.StatData.Pad[0] = LStack_19e8.s.LowPart._0_1_;
      FStack_19e0.StatData.Pad[1] = LStack_19e8.s.LowPart._1_1_;
      FStack_19e0.StatData.Pad[2] = LStack_19e8.s.LowPart._2_1_;
      FStack_19e0.StatData.Pad[3] = LStack_19e8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&FStack_19e0);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// Call @ 144d5db00

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDeferredShadingSceneRenderer::UpdateLumenScene'::__l2::<lambda_7>,void>::Call
          (void *param_1)

{
  uint uVar1;
  longlong lVar2;
  
  uVar1 = *(uint *)((longlong)param_1 + 8);
  lVar2 = *(longlong *)param_1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  *(undefined4 *)(lVar2 + 0x118) = 0;
  if (*(uint *)(lVar2 + 0x11c) != uVar1) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar1,(ForAnyElementType *)(lVar2 + 0x110),0,(int *)(lVar2 + 0x11c));
  }
  *(undefined4 *)(lVar2 + 0x138) = 0;
  uVar1 = *(uint *)((longlong)param_1 + 8);
  lVar2 = *(longlong *)param_1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  *(undefined4 *)(lVar2 + 0x270) = 0;
  if (*(uint *)(lVar2 + 0x274) != uVar1) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar1,(ForAnyElementType *)(lVar2 + 0x268),0,(int *)(lVar2 + 0x274));
  }
  *(undefined4 *)(lVar2 + 0x290) = 0;
  uVar1 = *(uint *)((longlong)param_1 + 8);
  lVar2 = *(longlong *)param_1;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
  *(undefined4 *)(lVar2 + 0x500) = 0;
  if (*(uint *)(lVar2 + 0x504) != uVar1) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar1,(ForAnyElementType *)(lVar2 + 0x4f8),0,(int *)(lVar2 + 0x504));
  }
  *(undefined4 *)(lVar2 + 0x520) = 0;
  uVar1 = *(uint *)((longlong)param_1 + 8);
  lVar2 = *(longlong *)param_1;
  if (-1 < (int)uVar1) {
    *(undefined4 *)(lVar2 + 0x780) = 0;
    if (*(uint *)(lVar2 + 0x784) != uVar1) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,(ForAnyElementType *)(lVar2 + 0x778),0,(int *)(lVar2 + 0x784));
    }
    *(undefined4 *)(lVar2 + 0x7a0) = 0;
    uVar1 = *(uint *)((longlong)param_1 + 8);
    lVar2 = *(longlong *)param_1;
    if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar1);
    }
    *(undefined4 *)(lVar2 + 0x160) = 0;
    if (*(uint *)(lVar2 + 0x164) != uVar1) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar1,(ForAnyElementType *)(lVar2 + 0x158),0,(int *)(lVar2 + 0x164));
    }
    *(undefined4 *)(lVar2 + 0x180) = 0;
    lVar2 = *(longlong *)param_1;
    uVar1 = *(uint *)((longlong)param_1 + 8);
    if (-1 < (int)uVar1) {
      *(undefined4 *)(lVar2 + 0x758) = 0;
      if (*(uint *)(lVar2 + 0x75c) != uVar1) {
        ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar1,(ForAnyElementType *)(lVar2 + 0x750),0,(int *)(lVar2 + 0x75c));
      }
      return;
    }
                    /* WARNING: Subroutine does not return */
    OnInvalidArrayNum((ulonglong)uVar1);
  }
                    /* WARNING: Subroutine does not return */
  OnInvalidArrayNum((ulonglong)uVar1);
}

// Call @ 144e7d810

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`MaterialCacheSetupNaniteContext'::__l2::<lambda_1>,void,TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
::Call(void *param_1,
      TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
      *param_2)

{
  int *piVar1;
  longlong lVar2;
  TIntPoint<int>_u_0 *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  float fVar6;
  longlong lVar7;
  FPackedView *pFVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  FPackedView *pFVar12;
  FPackedView *pFVar13;
  FPackedView *pFVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  longlong *plVar18;
  FPackedView *pFVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_23f8 [32];
  FPackedView *pFStack_23d8;
  FPackedView *pFStack_23d0;
  longlong lStack_23c8;
  longlong lStack_23c0;
  undefined8 uStack_23b8;
  longlong lStack_23a8;
  int iStack_23a0;
  int iStack_239c;
  int iStack_2398;
  int iStack_2394;
  FPackedView FStack_2388;
  FMinimalInitializer FStack_1fb8;
  FPackedView FStack_1e68;
  FPackedViewParams FStack_1a98;
  FViewMatrices FStack_8d8;
  ulonglong uStack_58;
  
  fVar6 = __real_3f800000;
  uStack_58 = __security_cookie.value ^ (ulonglong)auStack_23f8;
  lVar15 = *(longlong *)((longlong)param_1 + 0x10);
  pFVar12 = (FPackedView *)0x0;
  FStack_1fb8.ViewRotationMatrix.M[0][2] = UE::Math::TMatrix<double>::Identity.M[0][2];
  FStack_1fb8.ViewRotationMatrix.M[0][3] = UE::Math::TMatrix<double>::Identity.M[0][3];
  FStack_1fb8.ViewRotationMatrix.M[1][2] = UE::Math::TMatrix<double>::Identity.M[1][2];
  FStack_1fb8.ViewRotationMatrix.M[1][3] = UE::Math::TMatrix<double>::Identity.M[1][3];
  FStack_1fb8.ViewRotationMatrix.M[0][0] = UE::Math::TMatrix<double>::Identity.M[0][0];
  FStack_1fb8.ViewRotationMatrix.M[0][1] = UE::Math::TMatrix<double>::Identity.M[0][1];
  FStack_1fb8.ViewRotationMatrix.M[2][2] = UE::Math::TMatrix<double>::Identity.M[2][2];
  FStack_1fb8.ViewRotationMatrix.M[2][3] = UE::Math::TMatrix<double>::Identity.M[2][3];
  FStack_1fb8.ViewRotationMatrix.M[1][0] = UE::Math::TMatrix<double>::Identity.M[1][0];
  FStack_1fb8.ViewRotationMatrix.M[1][1] = UE::Math::TMatrix<double>::Identity.M[1][1];
  FStack_1fb8.ViewRotationMatrix.M[3][2] = UE::Math::TMatrix<double>::Identity.M[3][2];
  FStack_1fb8.ViewRotationMatrix.M[3][3] = UE::Math::TMatrix<double>::Identity.M[3][3];
  FStack_1fb8.ViewRotationMatrix.M[2][0] = UE::Math::TMatrix<double>::Identity.M[2][0];
  FStack_1fb8.ViewRotationMatrix.M[2][1] = UE::Math::TMatrix<double>::Identity.M[2][1];
  FStack_1fb8.ViewRotationMatrix.M[3][0] = UE::Math::TMatrix<double>::Identity.M[3][0];
  FStack_1fb8.ViewRotationMatrix.M[3][1] = UE::Math::TMatrix<double>::Identity.M[3][1];
  FStack_1fb8.FirstPersonParams.Scale = 1.0;
  FStack_1fb8.FirstPersonParams.FOVCorrectionFactor = 1.0;
  FStack_1fb8.FirstPersonParams.bUseParameters = false;
  FStack_1fb8.FirstPersonParams._9_3_ = 0;
  FStack_1fb8.CameraToViewTarget.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FStack_1fb8.CameraToViewTarget.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FStack_1fb8.ViewOrigin.field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  FStack_1fb8.ViewOrigin.field0_0x0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y
  ;
  FStack_1fb8.CameraToViewTarget.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStack_1fb8.ProjectionMatrix.M[0][0] = __real_3ff0000000000000 / (double)*(int *)param_1;
  FStack_1fb8.ProjectionMatrix.M[1][1] =
       __real_3ff0000000000000 / (double)*(int *)((longlong)param_1 + 4);
  FStack_1fb8.ProjectionMatrix.M[0][2] = 0.0;
  FStack_1fb8.ProjectionMatrix.M[0][3] = 0.0;
  FStack_1fb8.ProjectionMatrix.M[1][2] = 0.0;
  FStack_1fb8.ProjectionMatrix.M[1][3] = 0.0;
  FStack_1fb8.ViewOrigin.field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  FStack_1fb8.ProjectionMatrix.M[2][0] = 0.0;
  FStack_1fb8.ProjectionMatrix.M[2][1] = 0.0;
  FStack_1fb8.ProjectionMatrix.M[2][2] = ___xmm_0000000000000000bff0000000000000;
  FStack_1fb8.ProjectionMatrix.M[2][3] = _UNK_15076ad98;
  FStack_1fb8.ProjectionMatrix.M[0][1] = 0.0;
  FStack_1fb8.ProjectionMatrix.M[1][0] = 0.0;
  FStack_1fb8.ProjectionMatrix.M[3][0] = ___xmm_bff0000000000000bff0000000000000;
  FStack_1fb8.ProjectionMatrix.M[3][1] = _UNK_15076c718;
  FStack_1fb8.ProjectionMatrix.M[3][2] = ___xmm_3ff00000000000003ff0000000000000;
  FStack_1fb8.ProjectionMatrix.M[3][3] = _UNK_150689688;
  iVar11 = *(int *)(lVar15 + 0x18);
  if (iVar11 < 1) {
    pFStack_23d8 = (FPackedView *)0x0;
    pFStack_23d0 = (FPackedView *)(longlong)iVar11;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar15 = *(longlong *)(lVar15 + 0x10);
  lVar2 = *(longlong *)((longlong)param_1 + 0x10);
  FStack_1fb8.ConstrainedViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(lVar15 + 0x198);
  FStack_1fb8.ConstrainedViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(lVar15 + 0x1a0);
  iVar11 = *(int *)(lVar2 + 0x18);
  if (iVar11 < 1) {
    pFStack_23d8 = (FPackedView *)0x0;
    pFStack_23d0 = (FPackedView *)(longlong)iVar11;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FStack_1fb8.StereoPass = *(EStereoscopicPass *)(*(longlong *)(lVar2 + 0x10) + 0x210);
  FViewMatrices::FViewMatrices(&FStack_8d8,&FStack_1fb8);
  FViewMatrices::FViewMatrices(&FStack_1a98.ViewMatrices);
  FViewMatrices::FViewMatrices(&FStack_1a98.PrevViewMatrices);
  FStack_1a98.LODScaleFactor = 1.0;
  FStack_1a98.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  FStack_1a98.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  FStack_1a98.ViewLODDistanceFactor = 1.0;
  FStack_1a98.TargetLayerIndex = -1;
  FStack_1a98.PrevTargetLayerIndex = -1;
  FStack_1a98.CullingViewOrigin.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  FStack_1a98.CullingViewOrigin.field0_0x0._s_0.Y =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  FStack_1a98.TargetMipLevel = 0;
  FStack_1a98.CullingViewOrigin.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  FStack_1a98.GlobalClippingPlane._padding_ = 0;
  FStack_1a98.GlobalClippingPlane._padding_ = 0;
  FStack_1a98.TargetMipCount = 1;
  FStack_1a98.RangeBasedCullingDistance = 0.0;
  FStack_1a98.HZBTestViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  FStack_1a98.HZBTestViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  FStack_1a98.MaxPixelsPerEdgeMultipler = 1.0;
  FStack_1a98.bUseCullingViewOverrides = false;
  FStack_1a98.CullingViewScreenMultipleSq = 0.0;
  FStack_1a98.CullingViewMinRadiusTestFactorSq = 0.0;
  FStack_1a98.GlobalClippingPlane._padding_ = 0;
  FStack_1a98.GlobalClippingPlane.W = 0.0;
  FStack_1a98.InstanceOcclusionQueryMask = 0;
  FStack_1a98.LightingChannelMask = 7;
  FStack_1a98.bUseLightingChannelMask = false;
  FStack_1a98.bUseCurrentPreTranslationForHZB = false;
  FStack_1a98.SceneRendererPrimaryViewId = -1;
  FStack_1a98.DynamicDepthCullRange.field0_0x0._s_0.X = 0.0;
  FStack_1a98.DynamicDepthCullRange.field0_0x0._s_0.Y = 3.4028235e+38;
  memcpy(&FStack_1a98,&FStack_8d8,0x880);
  memcpy(&FStack_1a98.PrevViewMatrices,&FStack_8d8,0x880);
  FStack_1a98.RasterContextSize.field0_0x0 = *(TIntPoint<int>_u_0 *)((longlong)param_1 + 8);
  lVar15 = *(longlong *)((longlong)param_1 + 0x10);
  FStack_1a98.Flags = 0;
  FStack_1a98.StreamingPriorityCategory = 3;
  FStack_1a98.MinBoundsRadius = 0.0;
  iVar11 = *(int *)(lVar15 + 0x18);
  if (iVar11 < 1) {
    pFStack_23d8 = (FPackedView *)0x0;
    pFStack_23d0 = (FPackedView *)(longlong)iVar11;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar2 = *(longlong *)((longlong)param_1 + 0x10);
  FStack_1a98.ViewLODDistanceFactor = *(float *)(*(longlong *)(lVar15 + 0x10) + 0x11c8);
  iVar11 = *(int *)(lVar2 + 0x18);
  if (iVar11 < 1) {
    pFStack_23d8 = (FPackedView *)0x0;
    pFStack_23d0 = (FPackedView *)(longlong)iVar11;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar15 = *(longlong *)((longlong)param_1 + 0x10);
  pTVar3 = *(TIntPoint<int>_u_0 **)(*(longlong *)(lVar2 + 0x10) + 0x24c8);
  FStack_1a98.HZBTestViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)*pTVar3;
  FStack_1a98.HZBTestViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)pTVar3[1];
  FStack_1a98.MaxPixelsPerEdgeMultipler = 1.0;
  iVar11 = *(int *)(lVar15 + 0x18);
  if (iVar11 < 1) {
    pFStack_23d8 = (FPackedView *)0x0;
    pFStack_23d0 = (FPackedView *)(longlong)iVar11;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar15 = *(longlong *)(lVar15 + 0x10);
  lVar2 = *(longlong *)((longlong)param_1 + 0x10);
  FStack_1a98.GlobalClippingPlane._padding_ = *(longlong *)(lVar15 + 0x1210);
  FStack_1a98.GlobalClippingPlane._padding_ = *(longlong *)(lVar15 + 0x1218);
  FStack_1a98.GlobalClippingPlane._padding_ = *(longlong *)(lVar15 + 0x1220);
  FStack_1a98.GlobalClippingPlane.W = *(double *)(lVar15 + 0x1228);
  iVar11 = *(int *)(lVar2 + 0x18);
  if (iVar11 < 1) {
    pFStack_23d8 = (FPackedView *)0x0;
    pFStack_23d0 = (FPackedView *)(longlong)iVar11;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  plVar18 = *(longlong **)((longlong)param_1 + 0x20);
  FStack_1a98.SceneRendererPrimaryViewId = *(int *)(*(longlong *)(lVar2 + 0x10) + 0x28e4);
  if (0 < (int)plVar18[1]) {
    lStack_23a8 = 0;
    pFVar19 = pFVar12;
    do {
      uVar17 = (uint)pFVar12;
      uVar10 = 0;
      if ((int)uVar17 < (int)plVar18[1]) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if (uVar10 == 0) {
        pFStack_23d8 = (FPackedView *)(longlong)(int)uVar17;
        pFStack_23d0 = (FPackedView *)(longlong)(int)plVar18[1];
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar15 = *plVar18;
      plVar18 = *(longlong **)((longlong)param_1 + 0x18);
      iVar11 = (int)plVar18[1];
      uVar10 = 0;
      if ((int)uVar17 < iVar11) {
        uVar10 = ~uVar17 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (pFStack_23d8 = pFVar19, pFStack_23d0 = (FPackedView *)(longlong)iVar11,
         bVar9 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *plVar18;
      iStack_23a0 = *(int *)(lVar2 + (longlong)pFVar19 * 8);
      iStack_239c = *(int *)(lVar2 + 4 + (longlong)pFVar19 * 8);
      iStack_2398 = iStack_23a0 + *(int *)param_1;
      iStack_2394 = *(int *)((longlong)param_1 + 4) + iStack_239c;
      FStack_1a98.ViewRect.field0_0x0._4_4_ = iStack_239c;
      FStack_1a98.ViewRect.field0_0x0._0_4_ = iStack_23a0;
      FStack_1a98.ViewRect.field0_0x0._12_4_ = iStack_2394;
      FStack_1a98.ViewRect.field0_0x0._8_4_ = iStack_2398;
      pFVar12 = Nanite::CreatePackedView(&FStack_2388,&FStack_1a98);
      lVar7 = lStack_23a8;
      lVar16 = 7;
      pFVar8 = &FStack_1e68;
      do {
        pFVar14 = pFVar8;
        pFVar13 = pFVar12;
        uVar5 = *(undefined8 *)((pFVar13->SVPositionToTranslatedWorld).M[0] + 2);
        *(undefined8 *)(pFVar14->SVPositionToTranslatedWorld).M[0] =
             *(undefined8 *)(pFVar13->SVPositionToTranslatedWorld).M[0];
        *(undefined8 *)((pFVar14->SVPositionToTranslatedWorld).M[0] + 2) = uVar5;
        uVar5 = *(undefined8 *)((pFVar13->SVPositionToTranslatedWorld).M[1] + 2);
        *(undefined8 *)(pFVar14->SVPositionToTranslatedWorld).M[1] =
             *(undefined8 *)(pFVar13->SVPositionToTranslatedWorld).M[1];
        *(undefined8 *)((pFVar14->SVPositionToTranslatedWorld).M[1] + 2) = uVar5;
        uVar5 = *(undefined8 *)((pFVar13->SVPositionToTranslatedWorld).M[2] + 2);
        *(undefined8 *)(pFVar14->SVPositionToTranslatedWorld).M[2] =
             *(undefined8 *)(pFVar13->SVPositionToTranslatedWorld).M[2];
        *(undefined8 *)((pFVar14->SVPositionToTranslatedWorld).M[2] + 2) = uVar5;
        uVar5 = *(undefined8 *)((pFVar13->SVPositionToTranslatedWorld).M[3] + 2);
        *(undefined8 *)(pFVar14->SVPositionToTranslatedWorld).M[3] =
             *(undefined8 *)(pFVar13->SVPositionToTranslatedWorld).M[3];
        *(undefined8 *)((pFVar14->SVPositionToTranslatedWorld).M[3] + 2) = uVar5;
        uVar5 = *(undefined8 *)((pFVar13->ViewToTranslatedWorld).M[0] + 2);
        *(undefined8 *)(pFVar14->ViewToTranslatedWorld).M[0] =
             *(undefined8 *)(pFVar13->ViewToTranslatedWorld).M[0];
        *(undefined8 *)((pFVar14->ViewToTranslatedWorld).M[0] + 2) = uVar5;
        uVar5 = *(undefined8 *)((pFVar13->ViewToTranslatedWorld).M[1] + 2);
        *(undefined8 *)(pFVar14->ViewToTranslatedWorld).M[1] =
             *(undefined8 *)(pFVar13->ViewToTranslatedWorld).M[1];
        *(undefined8 *)((pFVar14->ViewToTranslatedWorld).M[1] + 2) = uVar5;
        uVar5 = *(undefined8 *)((pFVar13->ViewToTranslatedWorld).M[2] + 2);
        *(undefined8 *)(pFVar14->ViewToTranslatedWorld).M[2] =
             *(undefined8 *)(pFVar13->ViewToTranslatedWorld).M[2];
        *(undefined8 *)((pFVar14->ViewToTranslatedWorld).M[2] + 2) = uVar5;
        uVar5 = *(undefined8 *)((pFVar13->ViewToTranslatedWorld).M[3] + 2);
        *(undefined8 *)(pFVar14->ViewToTranslatedWorld).M[3] =
             *(undefined8 *)(pFVar13->ViewToTranslatedWorld).M[3];
        *(undefined8 *)((pFVar14->ViewToTranslatedWorld).M[3] + 2) = uVar5;
        lVar16 = lVar16 + -1;
        pFVar12 = (FPackedView *)&pFVar13->TranslatedWorldToView;
        pFVar8 = (FPackedView *)&pFVar14->TranslatedWorldToView;
      } while (lVar16 != 0);
      uVar5 = *(undefined8 *)((pFVar13->TranslatedWorldToView).M[0] + 2);
      pFVar12 = (param_2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar14->TranslatedWorldToView).M[0] =
           *(undefined8 *)(pFVar13->TranslatedWorldToView).M[0];
      *(undefined8 *)((pFVar14->TranslatedWorldToView).M[0] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar13->TranslatedWorldToView).M[1] + 2);
      *(undefined8 *)(pFVar14->TranslatedWorldToView).M[1] =
           *(undefined8 *)(pFVar13->TranslatedWorldToView).M[1];
      *(undefined8 *)((pFVar14->TranslatedWorldToView).M[1] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar13->TranslatedWorldToView).M[2] + 2);
      *(undefined8 *)(pFVar14->TranslatedWorldToView).M[2] =
           *(undefined8 *)(pFVar13->TranslatedWorldToView).M[2];
      *(undefined8 *)((pFVar14->TranslatedWorldToView).M[2] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar13->TranslatedWorldToView).M[3] + 2);
      *(undefined8 *)(pFVar14->TranslatedWorldToView).M[3] =
           *(undefined8 *)(pFVar13->TranslatedWorldToView).M[3];
      *(undefined8 *)((pFVar14->TranslatedWorldToView).M[3] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar13->TranslatedWorldToClip).M[0] + 2);
      *(undefined8 *)(pFVar14->TranslatedWorldToClip).M[0] =
           *(undefined8 *)(pFVar13->TranslatedWorldToClip).M[0];
      *(undefined8 *)((pFVar14->TranslatedWorldToClip).M[0] + 2) = uVar5;
      FStack_1e68.MaterialCacheUnwrapMinAndInvSize.field0_0x0._s_0.X =
           *(float *)(lStack_23a8 + 0x10 + lVar15);
      FStack_1e68.MaterialCacheUnwrapMinAndInvSize.field0_0x0._s_0.Y =
           *(float *)(lStack_23a8 + 0x14 + lVar15);
      piVar1 = &param_2->ArrayMax;
      FStack_1e68.MaterialCacheUnwrapMinAndInvSize.field0_0x0._s_0.Z =
           fVar6 / (*(float *)(lStack_23a8 + 0x18 + lVar15) -
                   FStack_1e68.MaterialCacheUnwrapMinAndInvSize.field0_0x0._s_0.X);
      FStack_1e68.MaterialCacheUnwrapMinAndInvSize.field0_0x0._s_0.W =
           fVar6 / (*(float *)(lStack_23a8 + 0x1c + lVar15) -
                   FStack_1e68.MaterialCacheUnwrapMinAndInvSize.field0_0x0._s_0.Y);
      fVar21 = fVar6 / (float)*(int *)((longlong)param_1 + 8);
      fVar20 = fVar6 / (float)*(int *)((longlong)param_1 + 0xc);
      FStack_1e68.MaterialCachePageOffsetAndInvSize.field0_0x0._s_0.X =
           (float)*(int *)(lVar2 + (longlong)pFVar19 * 8) * fVar21;
      FStack_1e68.MaterialCachePageOffsetAndInvSize.field0_0x0._s_0.Y =
           (float)*(int *)(lVar2 + 4 + (longlong)pFVar19 * 8) * fVar20;
      FStack_1e68.MaterialCachePageOffsetAndInvSize.field0_0x0._s_0.W =
           (float)*(int *)((longlong)param_1 + 4) * fVar20;
      FStack_1e68.MaterialCachePageOffsetAndInvSize.field0_0x0._s_0.Z =
           (float)*(int *)param_1 * fVar21;
      if ((pFVar12 <= &FStack_1e68) && (&FStack_1e68 < pFVar12 + *piVar1)) {
        lStack_23c0 = (longlong)param_2->ArrayNum;
        uStack_23b8 = 0x3d0;
        pFStack_23d8 = &FStack_1e68;
        pFStack_23d0 = pFVar12;
        lStack_23c8 = (longlong)*piVar1;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar9) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar11 = param_2->ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FPackedView>_>
                           (0x3d0,0x10,&param_2->AllocatorInstance,piVar1);
      }
      param_2->ArrayNum = iVar11 + 1;
      lVar15 = 7;
      pFVar12 = &FStack_1e68;
      pFVar8 = (param_2->AllocatorInstance).Data + iVar11;
      do {
        pFVar14 = pFVar8;
        pFVar13 = pFVar12;
        uVar5 = *(undefined8 *)((pFVar13->SVPositionToTranslatedWorld).M[0] + 2);
        *(undefined8 *)(pFVar14->SVPositionToTranslatedWorld).M[0] =
             *(undefined8 *)(pFVar13->SVPositionToTranslatedWorld).M[0];
        *(undefined8 *)((pFVar14->SVPositionToTranslatedWorld).M[0] + 2) = uVar5;
        uVar5 = *(undefined8 *)((pFVar13->SVPositionToTranslatedWorld).M[1] + 2);
        *(undefined8 *)(pFVar14->SVPositionToTranslatedWorld).M[1] =
             *(undefined8 *)(pFVar13->SVPositionToTranslatedWorld).M[1];
        *(undefined8 *)((pFVar14->SVPositionToTranslatedWorld).M[1] + 2) = uVar5;
        uVar5 = *(undefined8 *)((pFVar13->SVPositionToTranslatedWorld).M[2] + 2);
        *(undefined8 *)(pFVar14->SVPositionToTranslatedWorld).M[2] =
             *(undefined8 *)(pFVar13->SVPositionToTranslatedWorld).M[2];
        *(undefined8 *)((pFVar14->SVPositionToTranslatedWorld).M[2] + 2) = uVar5;
        uVar5 = *(undefined8 *)((pFVar13->SVPositionToTranslatedWorld).M[3] + 2);
        *(undefined8 *)(pFVar14->SVPositionToTranslatedWorld).M[3] =
             *(undefined8 *)(pFVar13->SVPositionToTranslatedWorld).M[3];
        *(undefined8 *)((pFVar14->SVPositionToTranslatedWorld).M[3] + 2) = uVar5;
        uVar5 = *(undefined8 *)((pFVar13->ViewToTranslatedWorld).M[0] + 2);
        *(undefined8 *)(pFVar14->ViewToTranslatedWorld).M[0] =
             *(undefined8 *)(pFVar13->ViewToTranslatedWorld).M[0];
        *(undefined8 *)((pFVar14->ViewToTranslatedWorld).M[0] + 2) = uVar5;
        uVar5 = *(undefined8 *)((pFVar13->ViewToTranslatedWorld).M[1] + 2);
        *(undefined8 *)(pFVar14->ViewToTranslatedWorld).M[1] =
             *(undefined8 *)(pFVar13->ViewToTranslatedWorld).M[1];
        *(undefined8 *)((pFVar14->ViewToTranslatedWorld).M[1] + 2) = uVar5;
        uVar5 = *(undefined8 *)((pFVar13->ViewToTranslatedWorld).M[2] + 2);
        *(undefined8 *)(pFVar14->ViewToTranslatedWorld).M[2] =
             *(undefined8 *)(pFVar13->ViewToTranslatedWorld).M[2];
        *(undefined8 *)((pFVar14->ViewToTranslatedWorld).M[2] + 2) = uVar5;
        uVar5 = *(undefined8 *)((pFVar13->ViewToTranslatedWorld).M[3] + 2);
        *(undefined8 *)(pFVar14->ViewToTranslatedWorld).M[3] =
             *(undefined8 *)(pFVar13->ViewToTranslatedWorld).M[3];
        *(undefined8 *)((pFVar14->ViewToTranslatedWorld).M[3] + 2) = uVar5;
        lVar15 = lVar15 + -1;
        pFVar12 = (FPackedView *)&pFVar13->TranslatedWorldToView;
        pFVar8 = (FPackedView *)&pFVar14->TranslatedWorldToView;
      } while (lVar15 != 0);
      uVar5 = *(undefined8 *)((pFVar13->TranslatedWorldToView).M[0] + 2);
      lStack_23a8 = lVar7 + 0x2c;
      pFVar12 = (FPackedView *)(ulonglong)(uVar17 + 1);
      pFVar19 = (FPackedView *)((longlong)(pFVar19->SVPositionToTranslatedWorld).M[0] + 1);
      *(undefined8 *)(pFVar14->TranslatedWorldToView).M[0] =
           *(undefined8 *)(pFVar13->TranslatedWorldToView).M[0];
      *(undefined8 *)((pFVar14->TranslatedWorldToView).M[0] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar13->TranslatedWorldToView).M[1] + 2);
      *(undefined8 *)(pFVar14->TranslatedWorldToView).M[1] =
           *(undefined8 *)(pFVar13->TranslatedWorldToView).M[1];
      *(undefined8 *)((pFVar14->TranslatedWorldToView).M[1] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar13->TranslatedWorldToView).M[2] + 2);
      *(undefined8 *)(pFVar14->TranslatedWorldToView).M[2] =
           *(undefined8 *)(pFVar13->TranslatedWorldToView).M[2];
      *(undefined8 *)((pFVar14->TranslatedWorldToView).M[2] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar13->TranslatedWorldToView).M[3] + 2);
      *(undefined8 *)(pFVar14->TranslatedWorldToView).M[3] =
           *(undefined8 *)(pFVar13->TranslatedWorldToView).M[3];
      *(undefined8 *)((pFVar14->TranslatedWorldToView).M[3] + 2) = uVar5;
      uVar5 = *(undefined8 *)((pFVar13->TranslatedWorldToClip).M[0] + 2);
      *(undefined8 *)(pFVar14->TranslatedWorldToClip).M[0] =
           *(undefined8 *)(pFVar13->TranslatedWorldToClip).M[0];
      *(undefined8 *)((pFVar14->TranslatedWorldToClip).M[0] + 2) = uVar5;
      plVar18 = *(longlong **)((longlong)param_1 + 0x20);
    } while ((int)(uVar17 + 1) < (int)plVar18[1]);
  }
  return;
}

// Call @ 144efa8b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FParallelMeshDrawCommandPass::Dispatch'::__l2::<lambda_1>,void,FRHICommandList_&>
::Call(void *param_1,FRHICommandList *param_2)

{
  FSceneRenderer::SetStereoViewport
            (param_2,*(FViewInfo **)param_1,*(float *)((longlong)param_1 + 8));
  return;
}

// Call @ 144efa8d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SortAndMergeDynamicPassMeshDrawCommands'::__l17::<lambda_1>,void,int,int,int>::
Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  `SortAndMergeDynamicPassMeshDrawCommands'::__l17::<lambda_1>::operator()
            (param_1,*param_2,*param_3,*param_4);
  return;
}

// Call @ 144efa8f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FParallelMeshDrawCommandPass::DispatchPassSetup'::__l33::<lambda_1>,void,FInstanceCullingContext_&>
::Call(void *param_1,FInstanceCullingContext *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  undefined1 auStackX_8 [8];
  
  FParallelMeshDrawCommandPass::WaitForSetupTask(*(FParallelMeshDrawCommandPass **)param_1);
  lVar2 = *(longlong *)param_1;
  iVar5 = *(int *)(lVar2 + 0x60);
  lVar6 = *(longlong *)(lVar2 + 0x58);
  lVar1 = lVar6 + (longlong)iVar5 * 0x48;
  while( true ) {
    if (*(int *)(lVar2 + 0x60) != iVar5) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<FVisibleMeshDrawCommand,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (lVar6 == lVar1) break;
    if (*(int *)(lVar6 + 0x18) < 0) {
      FGPUScenePrimitiveCollector::CheckPrimitiveProcessed
                ((FGPUScenePrimitiveCollector *)(**(longlong **)param_1 + 0x2900),
                 *(uint *)(lVar6 + 0x10) & 0x7fffffff,
                 (FGPUScene *)(*(longlong *)((longlong)param_1 + 8) + 0x3500));
    }
    lVar6 = lVar6 + 0x48;
  }
  iVar5 = 0;
  lVar1 = **(longlong **)param_1;
  lVar2 = *(longlong *)(lVar1 + 0x2918);
  if (lVar2 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = *(int *)(lVar2 + 0x364);
  }
  if ((*(char *)(lVar1 + 0x2920) == '\0') && (lVar2 != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("bCommitted || UploadData == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.h"
                       ,0x74,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)(lVar1 + 0x2918) != 0) {
    iVar5 = *(int *)(*(longlong *)(lVar1 + 0x2918) + 0x360);
  }
  FInstanceCullingContext::SetDynamicPrimitiveInstanceOffsets(param_2,iVar5,iVar7);
  return;
}

// Call @ 144efa900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<FMeshEdgesViewFamilySettings::<lambda_25_>,void,FSceneViewFamily_&>::Call
          (void *param_1,FSceneViewFamily *param_2)

{
  return;
}

// Call @ 144efa910

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

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`RenderMeshEdges'::__l2::<lambda_2>,bool,FRDGBuilder_&,FSceneRenderFunctionInputs_const_&>
::Call(void *param_1,FRDGBuilder *param_2,FSceneRenderFunctionInputs *param_3)

{
  int iVar1;
  FSceneRenderer *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  FSceneView *pFVar10;
  FSceneView *pFVar11;
  undefined1 auStackX_8 [8];
  
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x18))
            (*(longlong **)(*(longlong *)param_1 + 8),param_2->_padding_);
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 0x10) + 0x18))
            (*(longlong **)(*(longlong *)param_1 + 0x10),param_2->_padding_);
  (**(code **)(*(longlong *)param_3->Renderer + 0x40))
            (param_3->Renderer,param_2,param_3->SceneUpdateInputs);
  pFVar2 = param_3->Renderer;
  iVar1 = *(int *)&pFVar2->field_0x18;
  pFVar10 = *(FSceneView **)&pFVar2->field_0x10;
  pFVar11 = (FSceneView *)((longlong)iVar1 * 0x2970 + (longlong)pFVar10);
  while( true ) {
    if (*(int *)&pFVar2->field_0x18 != iVar1) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (pFVar10 == pFVar11) break;
    uVar7 = FindViewIndex(pFVar10);
    if (uVar7 != 0xffffffff) {
      lVar3 = *(longlong *)param_1;
      uVar8 = 0;
      if ((int)uVar7 < *(int *)(lVar3 + 0x20)) {
        uVar8 = ~uVar7 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      puVar9 = (undefined8 *)((longlong)(int)uVar7 * 0x10 + *(longlong *)(lVar3 + 0x18));
      *puVar9 = *(undefined8 *)(pFVar10 + 1);
      puVar9[1] = pFVar10[1].Family;
    }
    pFVar10 = (FSceneView *)(pFVar10[1].ProjectionMatrixUnadjustedForRHI.M + 1);
  }
  return true;
}

// Call @ 144efa920

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SortAndMergeDynamicPassMeshDrawCommands'::__l26::<lambda_2>,void,int,int,int>::
Call(void *param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_3;
  if (**(int **)((longlong)param_1 + 8) != -1) {
    uVar1 = uVar2 + **(int **)((longlong)param_1 + 8);
    if (-1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    uVar2 = uVar1 | 0x80000000;
  }
  *(uint *)(**(longlong **)param_1 + (longlong)*param_2 * 4) = uVar2;
  return;
}

// Call @ 144f85220

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_1>,unsigned_int>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return *(uint *)(lVar3 + 8);
}

// Call @ 144f85270

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_1>,unsigned_int>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return *(uint *)(lVar3 + 8);
}

// Call @ 144f852c0

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Nanite::FRenderer::DrawGeometry'::__l2::<lambda_1>,unsigned_int>::Call
          (void *param_1)

{
  return *(uint *)param_1;
}

// Call @ 144f852d0

TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *
__cdecl UE::Core::Private::Function::
        TFunctionRefCaller<`TGPUWorkGroupLoadBalancer<UE::HLSL::FCellChunkDraw>::GetParametersAsync'::__l2::<lambda_1>,TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
        ::Call(void *param_1)

{
  return (TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *)(*(longlong *)param_1 + 0x40);
}

// Call @ 144f852e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Nanite::FInstanceHierarchyDriver::Init'::__l5::<lambda_1>,TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>
::Call(void *param_1)

{
  Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::Sync(*(FDeferredSetupContext **)param_1);
  return (TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)
         (*(longlong *)(*(longlong *)param_1 + 8) + 0x58);
}

// Call @ 144f85310

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Nanite::FRenderer::FDispatchContext::DispatchSW'::__l8::<lambda_1>,void,FRHICommandDispatchComputeShaderBundle_&>
::Call(void *param_1,FRHICommandDispatchComputeShaderBundle *param_2)

{
  TArray<FRHIShaderBundleComputeDispatch,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  FRDGResource *this;
  FRHIBatchedShaderParametersAllocator *pFVar5;
  void *pvVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  EPSOPrecacheResult EVar13;
  FRHIBatchedShaderParameters *pFVar14;
  FShaderParametersMetadata *pFVar15;
  FRHIShader *pFVar16;
  FComputePipelineState *pFVar17;
  FRHIShader *pFVar18;
  byte bVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  uint *puVar25;
  longlong lVar26;
  longlong lVar27;
  TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable> *this_00;
  undefined1 auStackX_8 [8];
  undefined1 auStackX_10 [8];
  uint uStackX_18;
  TArray<FRHIShaderBundleComputeDispatch,TSizedDefaultAllocator<32>_> *pTStackX_20;
  undefined4 uStack_bc;
  FRHIBatchedShaderParameters FStack_98;
  
  param_2->ShaderBundle = (FRHIShaderBundle *)**(undefined8 **)param_1;
  param_2->bEmulated = (bool)**(undefined1 **)((longlong)param_1 + 8);
  lVar26 = *(longlong *)((longlong)param_1 + 0x10);
  if ((*(longlong *)(lVar26 + 0xe8) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Buffer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x183,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this = *(FRDGResource **)(lVar26 + 0xe8);
  if ((((ulonglong)this[4].Name & 0x80) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Desc.Usage & EBufferUsageFlags::DrawIndirect",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                          ,0x53c,L"Buffer %s was not flagged for indirect draw usage."), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FRDGResource::ValidateRHIAccess(this);
  pTVar1 = &param_2->Dispatches;
  param_2->RecordArgBuffer = (FRHIBuffer *)this->ResourceRHI;
  piVar2 = &(param_2->Dispatches).ArrayNum;
  uVar4 = *(uint *)(**(longlong **)param_1 + 0x18);
  iVar12 = *piVar2;
  pTStackX_20 = pTVar1;
  if (iVar12 < (int)uVar4) {
    iVar11 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x88,8,uVar4 - iVar12,&pTVar1->AllocatorInstance,piVar2,
                        &(param_2->Dispatches).ArrayMax);
    DefaultConstructItems<FRHIShaderBundleComputeDispatch,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 0x88,uVar4 - iVar12);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar12) {
      uVar22 = iVar12 - uVar4;
      if (((int)(uVar4 | uVar22) < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar22 != 0) {
        pFVar21 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x88;
        iVar12 = (*piVar2 - uVar4) - uVar22;
        if (iVar12 != 0) {
          memmove(pFVar21,pFVar21 + (longlong)(int)uVar22 * 0x88,(longlong)iVar12 * 0x88);
        }
        *piVar2 = *piVar2 - uVar22;
        ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,&pTVar1->AllocatorInstance,*piVar2,&(param_2->Dispatches).ArrayMax);
      }
    }
  }
  pFVar21 = (pTVar1->AllocatorInstance).Data;
  iVar12 = *piVar2;
  pFVar23 = pFVar21 + (longlong)iVar12 * 0x88;
  while( true ) {
    if (*piVar2 != iVar12) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<FRHIShaderBundleComputeDispatch,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(auStackX_8);
    }
    if (pFVar21 == pFVar23) break;
    *(undefined4 *)pFVar21 = 0xffffffff;
    pFVar21 = pFVar21 + 0x88;
  }
  pFVar14 = FRHICommandListBase::GetScratchShaderParameters
                      (*(FRHICommandListBase **)((longlong)param_1 + 0x18));
  pFVar5 = pFVar14->Allocator;
  if (GRHIGlobals.ShaderBundles.RequiresSharedBindlessParameters != false) {
    pvVar6 = *(void **)((longlong)param_1 + 0x10);
    FStack_98.ParametersData.DataPtr = (uchar *)0x0;
    FStack_98.ParametersData.ArrayNum = 0;
    FStack_98.Parameters.DataPtr = (FRHIShaderParameter *)0x0;
    FStack_98.Parameters.ArrayNum = 0;
    FStack_98.ResourceParameters.DataPtr = (FRHIShaderParameterResource *)0x0;
    FStack_98.ResourceParameters.ArrayNum = 0;
    FStack_98.BindlessParameters.DataPtr = (FRHIShaderParameterResource *)0x0;
    FStack_98.BindlessParameters.ArrayNum = 0;
    FStack_98.Allocator = pFVar5;
    pFVar15 = FRasterizePassParameters::FTypeInfo::GetStructMetadata();
    SetAllShaderParametersAsBindless(&FStack_98,pFVar15,pvVar6);
    (FStack_98.Allocator)->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
    (param_2->SharedBindlessParameters).DataPtr = FStack_98.BindlessParameters.DataPtr;
    *(ulonglong *)&(param_2->SharedBindlessParameters).ArrayNum =
         CONCAT44(uStack_bc,FStack_98.BindlessParameters.ArrayNum);
  }
  puVar7 = *(undefined8 **)((longlong)param_1 + 0x20);
  uStackX_18 = *(uint *)(puVar7 + 1);
  uVar20 = (ulonglong)(int)uStackX_18;
  puVar25 = (uint *)*puVar7;
  puVar3 = puVar25 + uVar20;
  while( true ) {
    if (*(int *)(puVar7 + 1) != (int)uVar20) {
      auStackX_10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_10);
    }
    if (puVar25 == puVar3) {
      return;
    }
    uVar4 = *puVar25;
    pFVar18 = (FRHIShader *)0x0;
    lVar26 = *(longlong *)((longlong)param_1 + 0x28);
    uVar22 = 0;
    if ((int)uVar4 < *(int *)(lVar26 + 0x38)) {
      uVar22 = ~uVar4 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) break;
    lVar24 = *(longlong *)((longlong)param_1 + 0x10);
    lVar26 = (longlong)(int)uVar4 * 0xc0 + *(longlong *)(lVar26 + 0x30);
    *(undefined4 *)(lVar24 + 0x50) = *(undefined4 *)(lVar26 + 0xb8);
    *(undefined8 *)(lVar24 + 0x54) = 0;
    *(undefined4 *)(lVar24 + 0x5c) = 0;
    uVar4 = *(uint *)(lVar26 + 0xb8);
    uVar22 = 0;
    if ((int)uVar4 < *piVar2) {
      uVar22 = ~uVar4 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar27 = 0x40;
    lVar24 = (longlong)(int)uVar4 * 0x88;
    pFVar21 = (pTStackX_20->AllocatorInstance).Data;
    *(undefined4 *)(pFVar21 + lVar24) = *(undefined4 *)(lVar26 + 0xb8);
    uVar9 = *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10) + 0x58);
    *(undefined8 *)(pFVar21 + lVar24 + 0x78) =
         *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10) + 0x50);
    *(undefined8 *)(pFVar21 + lVar24 + 0x78 + 8) = uVar9;
    if (**(char **)((longlong)param_1 + 0x30) == '\0') {
      lVar27 = 0x30;
    }
    this_00 = (TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable> *)(lVar27 + lVar26);
    bVar19 = this_00->ShaderContent->field_0xd0 & 0xf;
    if (bVar19 == 5) {
      pFVar16 = TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable>::GetRHIShaderBase
                          (this_00,SF_Compute,true);
      *(FRHIShader **)(pFVar21 + lVar24 + 0x10) = pFVar16;
    }
    else {
      *(undefined8 *)(pFVar21 + lVar24 + 0x10) = 0;
      if ((bVar19 == 0xb) && (this_00->ShaderContent != (FMicropolyRasterizeCS *)0x0)) {
        pFVar18 = TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable>::GetRHIShaderBase
                            (this_00,this_00->ShaderContent->field_0xd0 &
                                     (SF_NumFrequencies|SF_Pixel),true);
      }
    }
    *(FRHIShader **)(pFVar21 + lVar24 + 0x18) = pFVar18;
    *(undefined8 *)(pFVar21 + lVar24 + 0x30) = 0;
    *(undefined4 *)(pFVar21 + lVar24 + 0x38) = 0;
    *(undefined8 *)(pFVar21 + lVar24 + 0x40) = 0;
    *(undefined4 *)(pFVar21 + lVar24 + 0x48) = 0;
    *(undefined8 *)(pFVar21 + lVar24 + 0x50) = 0;
    *(undefined4 *)(pFVar21 + lVar24 + 0x58) = 0;
    *(undefined8 *)(pFVar21 + lVar24 + 0x60) = 0;
    *(undefined4 *)(pFVar21 + lVar24 + 0x68) = 0;
    *(FRHIBatchedShaderParametersAllocator **)(pFVar21 + lVar24 + 0x28) = pFVar5;
    pFVar21[lVar24 + 0x70] = (FScriptContainerElement)0x1;
    SetBatchedShaderParametersMixed<FMicropolyRasterizeCS,FViewInfo_const_&,FMaterialRenderProxy_const_*_const_&,FMaterial_const_&>
              ((FRHIBatchedShaderParameters *)(pFVar21 + lVar24 + 0x28),this_00,
               *(FRasterizePassParameters **)((longlong)param_1 + 0x10),
               *(FViewInfo **)((longlong)param_1 + 0x38),(FMaterialRenderProxy **)(lVar26 + 0x88),
               *(FMaterial **)(lVar26 + 0xa0));
    if ((pFVar21[lVar24 + 0x70] == (FScriptContainerElement)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar17 = (FComputePipelineState *)0x0;
    *(undefined8 *)(*(longlong *)(pFVar21 + lVar24 + 0x28) + 0xb0) = 0;
    if (*(FRHIComputeShader **)(pFVar21 + lVar24 + 0x10) != (FRHIComputeShader *)0x0) {
      EVar13 = PipelineStateCache::CheckPipelineStateInCache
                         (*(FRHIComputeShader **)(pFVar21 + lVar24 + 0x10));
      PSOCollectorStats::CheckComputePipelineStateInCache
                (*(FRHIComputeShader **)(pFVar21 + lVar24 + 0x10),EVar13,
                 *(FMaterialRenderProxy **)(lVar26 + 0x88),**(int **)((longlong)param_1 + 0x40));
    }
    if (*(FRHIComputeShader **)(pFVar21 + lVar24 + 0x10) != (FRHIComputeShader *)0x0) {
      pFVar17 = FindComputePipelineState(*(FRHIComputeShader **)(pFVar21 + lVar24 + 0x10),true);
    }
    *(FComputePipelineState **)(pFVar21 + lVar24 + 8) = pFVar17;
    if ((*(longlong *)(pFVar21 + lVar24 + 0x10) != 0) && (pFVar17 == (FComputePipelineState *)0x0))
    {
      bVar10 = PipelineStateCache::IsPSOPrecachingEnabled();
      pFVar17 = GetComputePipelineState
                          (*(FRHIComputeCommandList **)((longlong)param_1 + 0x18),
                           *(FRHIComputeShader **)(pFVar21 + lVar24 + 0x10),bVar10);
      *(FComputePipelineState **)(pFVar21 + lVar24 + 8) = pFVar17;
      if (!bVar10) {
        *(undefined4 *)(pFVar21 + lVar24) = 0xffffffff;
      }
    }
    puVar25 = puVar25 + 1;
    uVar20 = (ulonglong)uStackX_18;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// Call @ 144f85320

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l19::<lambda_1>,void>
::Call(void *param_1)

{
  uint uVar1;
  
  Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::Sync(*(FDeferredSetupContext **)param_1);
  uVar1 = Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::GetMaxInstanceWorkGroups
                    (*(FDeferredSetupContext **)param_1);
  *(uint *)(*(longlong *)((longlong)param_1 + 8) + 0xe8) = uVar1;
  return;
}

// Call @ 144f85350

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_2>,void_const_*>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  puVar3 = (undefined8 *)(*pcVar1)(uVar2);
  return (void *)*puVar3;
}

// Call @ 144f853a0

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_2>,void_const_*>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  puVar3 = (undefined8 *)(*pcVar1)(uVar2);
  return (void *)*puVar3;
}

// Call @ 144f853f0

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Nanite::FRenderer::DrawGeometry'::__l2::<lambda_2>,void_const_*>::Call
          (void *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  piVar1 = *(int **)param_1;
  if (*(FTaskBase **)(piVar1 + 6) != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait(*(FTaskBase **)(piVar1 + 6));
  }
  if (piVar1[4] != *piVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Views.Num() == NumViews",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShared.h"
                       ,0x75,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  return *(void **)(piVar1 + 2);
}

// Call @ 144f85450

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Nanite::FRenderer::FDispatchContext::DispatchHW'::__l8::<lambda_2>,void,FRHICommandDispatchGraphicsShaderBundle_&>
::Call(void *param_1,FRHICommandDispatchGraphicsShaderBundle *param_2)

{
  TArray<FRHIShaderBundleGraphicsDispatch,TSizedDefaultAllocator<32>_> *pTVar1;
  FRHIBatchedShaderParameters *pFVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  FRDGResource *this;
  TIntPoint<int>_u_0 *pTVar7;
  FRHIBatchedShaderParametersAllocator *pFVar8;
  void *pvVar9;
  undefined8 *puVar10;
  longlong lVar11;
  char *pcVar12;
  FMaterialRenderProxy *pFVar13;
  FHWRasterizePS *pFVar14;
  FSceneView *pFVar15;
  FRasterizePassParameters *pFVar16;
  FMaterial *pFVar17;
  undefined8 *puVar18;
  code *pcVar19;
  undefined8 uVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  FRHIBatchedShaderParameters *pFVar25;
  FShaderParametersMetadata *pFVar26;
  FRHIVertexShader *pFVar27;
  FRHIShader *pFVar28;
  FRHIShader *pFVar29;
  FRHIPixelShader *pFVar30;
  FGraphicsPipelineState *pFVar31;
  byte bVar32;
  TRefCountPtr<FRHIRasterizerState> TVar33;
  ulonglong uVar34;
  FScriptContainerElement *pFVar35;
  uint *puVar36;
  FMaterialShader *pFVar37;
  TShaderRefBase<FHWRasterizePS,FShaderMapPointerTable> *this_00;
  uint uVar38;
  FScriptContainerElement *pFVar39;
  EPrimitiveType EVar40;
  undefined1 auStackX_10 [8];
  undefined1 auStackX_18 [8];
  uint uStackX_20;
  undefined4 uStack_b4;
  FRHIBatchedShaderParameters FStack_98;
  
  param_2->ShaderBundle = *(FRHIShaderBundle **)(*(longlong *)param_1 + 0x58);
  param_2->bEmulated = (bool)**(undefined1 **)((longlong)param_1 + 8);
  lVar6 = *(longlong *)((longlong)param_1 + 0x10);
  if ((*(longlong *)(lVar6 + 0xe8) == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Buffer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x183,L""), bVar21)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  this = *(FRDGResource **)(lVar6 + 0xe8);
  if ((((ulonglong)this[4].Name & 0x80) == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Desc.Usage & EBufferUsageFlags::DrawIndirect",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                          ,0x53c,L"Buffer %s was not flagged for indirect draw usage."), bVar21)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  FRDGResource::ValidateRHIAccess(this);
  pTVar1 = &param_2->Dispatches;
  param_2->RecordArgBuffer = (FRHIBuffer *)this->ResourceRHI;
  piVar4 = &(param_2->Dispatches).ArrayNum;
  pTVar7 = *(TIntPoint<int>_u_0 **)((longlong)param_1 + 0x18);
  (param_2->BundleState).ViewRect.field0_0x0._s_0.Min.field0_0x0 = *pTVar7;
  EVar40 = PT_TriangleList;
  (param_2->BundleState).ViewRect.field0_0x0._s_0.Max.field0_0x0 = pTVar7[1];
  if (**(char **)((longlong)param_1 + 0x20) == '\x01') {
    EVar40 = PT_PointList;
  }
  (param_2->BundleState).PrimitiveType = EVar40;
  uVar5 = *(uint *)(*(longlong *)(*(longlong *)param_1 + 0x58) + 0x18);
  iVar24 = *piVar4;
  if (iVar24 < (int)uVar5) {
    iVar23 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1a8,8,uVar5 - iVar24,&pTVar1->AllocatorInstance,piVar4,
                        &(param_2->Dispatches).ArrayMax);
    DefaultConstructItems<FRHIShaderBundleGraphicsDispatch,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar23 * 0x1a8,uVar5 - iVar24);
  }
  else {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((int)uVar5 < iVar24) {
      uVar38 = iVar24 - uVar5;
      if (((int)(uVar38 | uVar5) < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar21)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      if (uVar38 != 0) {
        pFVar35 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x1a8;
        iVar24 = (*piVar4 - uVar5) - uVar38;
        if (iVar24 != 0) {
          memmove(pFVar35,pFVar35 + (longlong)(int)uVar38 * 0x1a8,(longlong)iVar24 * 0x1a8);
        }
        *piVar4 = *piVar4 - uVar38;
        ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1a8,8,&pTVar1->AllocatorInstance,*piVar4,&(param_2->Dispatches).ArrayMax);
      }
    }
  }
  pFVar35 = (pTVar1->AllocatorInstance).Data;
  iVar24 = *piVar4;
  pFVar39 = pFVar35 + (longlong)iVar24 * 0x1a8;
  while( true ) {
    if (*piVar4 != iVar24) {
      auStackX_10[0] = 0;
      `TCheckedPointerIterator<FRHIShaderBundleGraphicsDispatch,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_10);
    }
    if (pFVar35 == pFVar39) break;
    *(undefined4 *)pFVar35 = 0xffffffff;
    pFVar35 = pFVar35 + 0x1a8;
  }
  pFVar25 = FRHICommandListBase::GetScratchShaderParameters
                      (*(FRHICommandListBase **)((longlong)param_1 + 0x28));
  bVar21 = GRHIGlobals.ShaderBundles.RequiresSharedBindlessParameters;
  pFVar8 = pFVar25->Allocator;
  FStack_98.ParametersData.DataPtr = (uchar *)0x0;
  FStack_98.ParametersData.ArrayNum = 0;
  FStack_98.Parameters.DataPtr = (FRHIShaderParameter *)0x0;
  FStack_98.Parameters.ArrayNum = 0;
  FStack_98.ResourceParameters.DataPtr = (FRHIShaderParameterResource *)0x0;
  FStack_98.ResourceParameters.ArrayNum = 0;
  FStack_98.BindlessParameters.DataPtr = (FRHIShaderParameterResource *)0x0;
  FStack_98.BindlessParameters.ArrayNum = 0;
  FStack_98.Allocator = pFVar8;
  if (GRHIGlobals.ShaderBundles.RequiresSharedBindlessParameters != false) {
    pvVar9 = *(void **)((longlong)param_1 + 0x10);
    pFVar26 = FRasterizePassParameters::FTypeInfo::GetStructMetadata();
    SetAllShaderParametersAsBindless(&FStack_98,pFVar26,pvVar9);
    (FStack_98.Allocator)->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
    (param_2->SharedBindlessParameters).DataPtr = FStack_98.BindlessParameters.DataPtr;
    *(ulonglong *)&(param_2->SharedBindlessParameters).ArrayNum =
         CONCAT44(uStack_b4,FStack_98.BindlessParameters.ArrayNum);
  }
  puVar10 = *(undefined8 **)((longlong)param_1 + 0x30);
  uStackX_20 = *(uint *)(puVar10 + 1);
  uVar34 = (ulonglong)(int)uStackX_20;
  puVar36 = (uint *)*puVar10;
  puVar3 = puVar36 + uVar34;
  do {
    pFVar29 = (FRHIShader *)0x0;
    if (*(int *)(puVar10 + 1) != (int)uVar34) {
      auStackX_18[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_18);
    }
    if (puVar36 == puVar3) {
      return;
    }
    uVar5 = *puVar36;
    lVar6 = *(longlong *)param_1;
    uVar38 = 0;
    if ((int)uVar5 < *(int *)(lVar6 + 0x38)) {
      uVar38 = ~uVar5 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    lVar11 = *(longlong *)((longlong)param_1 + 0x10);
    this_00 = (TShaderRefBase<FHWRasterizePS,FShaderMapPointerTable> *)
              ((longlong)(int)uVar5 * 0xc0 + *(longlong *)(lVar6 + 0x30));
    *(undefined4 *)(lVar11 + 0x50) = *(undefined4 *)&this_00[0xb].ShaderMap;
    *(undefined8 *)(lVar11 + 0x54) = 0;
    *(undefined4 *)(lVar11 + 0x5c) = 0;
    uVar5 = *(uint *)&this_00[0xb].ShaderMap;
    uVar38 = 0;
    if ((int)uVar5 < *piVar4) {
      uVar38 = ~uVar5 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pFVar35 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x1a8;
    *(undefined4 *)pFVar35 = *(undefined4 *)&this_00[0xb].ShaderMap;
    uVar20 = *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10) + 0x58);
    *(undefined8 *)(pFVar35 + 0x198) =
         *(undefined8 *)(*(longlong *)((longlong)param_1 + 0x10) + 0x50);
    *(undefined8 *)(pFVar35 + 0x1a0) = uVar20;
    bVar32 = ~*(byte *)&this_00[6].ShaderMap & 1;
    TVar33 = TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
             ::StaticResource.StateRHI;
    if (((bVar32 != 0) &&
        (TVar33 = TStaticStateRHI<TStaticRasterizerState<2,1,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                  ::StaticResource.StateRHI, bVar32 != 1)) && (bVar32 == 2)) {
      TVar33 = TStaticStateRHI<TStaticRasterizerState<2,2,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI;
    }
    *(FRHIRasterizerState **)(*(longlong *)((longlong)param_1 + 0x38) + 0x40) = TVar33.Reference;
    pcVar12 = *(char **)((longlong)param_1 + 0x40);
    if ((*pcVar12 == '\x04') || ((byte)(*pcVar12 - 2U) < 2)) {
      lVar6 = *(longlong *)(pcVar12 + 8);
      pFVar28 = pFVar29;
      if ((this_00[2].ShaderContent != (FHWRasterizePS *)0x0) &&
         (((this_00[2].ShaderContent)->field_0xd0 & 0xf) == 1)) {
        pFVar28 = TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable>::GetRHIShaderBase
                            ((TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable> *)(this_00 + 2),
                             SF_Mesh,true);
      }
      *(FRHIShader **)(lVar6 + 0x18) = pFVar28;
      lVar6 = *(longlong *)(pcVar12 + 8);
      if ((this_00[2].ShaderContent != (FHWRasterizePS *)0x0) &&
         (((this_00[2].ShaderContent)->field_0xd0 & 0xf) == 0xb)) {
        pFVar29 = TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable>::GetRHIShaderBase
                            ((TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable> *)(this_00 + 2),
                             SF_WorkGraphComputeNode,true);
      }
      *(FRHIShader **)(lVar6 + 0x30) = pFVar29;
    }
    else {
      pFVar27 = TShaderRefBase<FHWRasterizeVS,FShaderMapPointerTable>::GetVertexShader
                          ((TShaderRefBase<FHWRasterizeVS,FShaderMapPointerTable> *)(this_00 + 1),
                           true);
      *(FRHIVertexShader **)(*(longlong *)(pcVar12 + 8) + 8) = pFVar27;
    }
    pFVar30 = TShaderRefBase<FHWRasterizePS,FShaderMapPointerTable>::GetPixelShader(this_00,true);
    *(FRHIPixelShader **)(*(longlong *)(pcVar12 + 8) + 0x10) = pFVar30;
    bVar22 = PSOCollectorStats::IsFullPrecachingValidationEnabled();
    if (bVar22) {
      PSOCollectorStats::CheckFullPipelineStateInCache
                (*(FGraphicsPipelineStateInitializer **)((longlong)param_1 + 0x38),Unknown,
                 (FMaterialRenderProxy *)this_00[5].ShaderContent,&FNaniteVertexFactory::StaticType,
                 (FPrimitiveSceneProxy *)0x0,**(int **)((longlong)param_1 + 0x48));
    }
    if ((**(char **)((longlong)param_1 + 0x20) == '\x04') ||
       ((byte)(**(char **)((longlong)param_1 + 0x20) - 2U) < 2)) {
      bVar22 = true;
    }
    else {
      bVar22 = false;
    }
    pFVar13 = (FMaterialRenderProxy *)this_00[7].ShaderMap;
    pFVar25 = (FRHIBatchedShaderParameters *)(pFVar35 + 0xf8);
    pFVar14 = this_00[9].ShaderContent;
    pFVar15 = *(FSceneView **)((longlong)param_1 + 0x50);
    pFVar16 = *(FRasterizePassParameters **)((longlong)param_1 + 0x10);
    pFVar25->Allocator = pFVar8;
    *(undefined8 *)(pFVar35 + 0x100) = 0;
    *(undefined4 *)(pFVar35 + 0x108) = 0;
    *(undefined8 *)(pFVar35 + 0x110) = 0;
    *(undefined4 *)(pFVar35 + 0x118) = 0;
    *(undefined8 *)(pFVar35 + 0x120) = 0;
    *(undefined4 *)(pFVar35 + 0x128) = 0;
    *(undefined8 *)(pFVar35 + 0x130) = 0;
    *(undefined4 *)(pFVar35 + 0x138) = 0;
    pFVar35[0x140] = (FScriptContainerElement)0x1;
    if (bVar22) {
      if (bVar21 == false) {
        SetShaderParameters<FHWRasterizeMS>
                  (pFVar25,(TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable> *)(this_00 + 2),
                   pFVar16);
      }
      pFVar37 = (FMaterialShader *)this_00[2].ShaderContent;
    }
    else {
      if (bVar21 == false) {
        SetShaderParameters<FHWRasterizeVS>
                  (pFVar25,(TShaderRefBase<FHWRasterizeVS,FShaderMapPointerTable> *)(this_00 + 1),
                   pFVar16);
      }
      pFVar37 = (FMaterialShader *)this_00[1].ShaderContent;
    }
    if ((pFVar35[0x140] == (FScriptContainerElement)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar22)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    FMaterialShader::SetViewParameters(pFVar37,pFVar25,pFVar15,&pFVar15->ViewUniformBuffer);
    FMaterialShader::SetParameters(pFVar37,pFVar25,pFVar13,(FMaterial *)pFVar14,pFVar15);
    if ((pFVar35[0x140] == (FScriptContainerElement)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar22)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pFVar2 = (FRHIBatchedShaderParameters *)(pFVar35 + 0x148);
    pFVar25->Allocator->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
    pFVar17 = (FMaterial *)this_00[9].ShaderMap;
    pFVar14 = this_00[8].ShaderContent;
    pFVar15 = *(FSceneView **)((longlong)param_1 + 0x50);
    pFVar16 = *(FRasterizePassParameters **)((longlong)param_1 + 0x10);
    pFVar2->Allocator = pFVar8;
    *(undefined8 *)(pFVar35 + 0x150) = 0;
    *(undefined4 *)(pFVar35 + 0x158) = 0;
    *(undefined8 *)(pFVar35 + 0x160) = 0;
    *(undefined4 *)(pFVar35 + 0x168) = 0;
    *(undefined8 *)(pFVar35 + 0x170) = 0;
    *(undefined4 *)(pFVar35 + 0x178) = 0;
    *(undefined8 *)(pFVar35 + 0x180) = 0;
    *(undefined4 *)(pFVar35 + 0x188) = 0;
    pFVar35[400] = (FScriptContainerElement)0x1;
    if (bVar21 == false) {
      SetShaderParameters<FHWRasterizePS>(pFVar2,this_00,pFVar16);
    }
    pFVar37 = (FMaterialShader *)this_00->ShaderContent;
    if ((pFVar35[400] == (FScriptContainerElement)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar22)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    FMaterialShader::SetViewParameters(pFVar37,pFVar2,pFVar15,&pFVar15->ViewUniformBuffer);
    FMaterialShader::SetParameters(pFVar37,pFVar2,(FMaterialRenderProxy *)pFVar14,pFVar17,pFVar15);
    if ((pFVar35[400] == (FScriptContainerElement)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar22)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pFVar2->Allocator->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
    puVar18 = *(undefined8 **)((longlong)param_1 + 0x38);
    uVar20 = puVar18[1];
    *(undefined8 *)(pFVar35 + 0x18) = *puVar18;
    *(undefined8 *)(pFVar35 + 0x20) = uVar20;
    uVar20 = puVar18[3];
    *(undefined8 *)(pFVar35 + 0x28) = puVar18[2];
    *(undefined8 *)(pFVar35 + 0x30) = uVar20;
    uVar20 = puVar18[5];
    *(undefined8 *)(pFVar35 + 0x38) = puVar18[4];
    *(undefined8 *)(pFVar35 + 0x40) = uVar20;
    uVar20 = puVar18[7];
    *(undefined8 *)(pFVar35 + 0x48) = puVar18[6];
    *(undefined8 *)(pFVar35 + 0x50) = uVar20;
    uVar20 = puVar18[9];
    *(undefined8 *)(pFVar35 + 0x58) = puVar18[8];
    *(undefined8 *)(pFVar35 + 0x60) = uVar20;
    uVar20 = puVar18[0xb];
    *(undefined8 *)(pFVar35 + 0x68) = puVar18[10];
    *(undefined8 *)(pFVar35 + 0x70) = uVar20;
    uVar20 = puVar18[0xd];
    *(undefined8 *)(pFVar35 + 0x78) = puVar18[0xc];
    *(undefined8 *)(pFVar35 + 0x80) = uVar20;
    uVar20 = puVar18[0xf];
    *(undefined8 *)(pFVar35 + 0x88) = puVar18[0xe];
    *(undefined8 *)(pFVar35 + 0x90) = uVar20;
    uVar20 = puVar18[0x11];
    *(undefined8 *)(pFVar35 + 0x98) = puVar18[0x10];
    *(undefined8 *)(pFVar35 + 0xa0) = uVar20;
    uVar20 = puVar18[0x13];
    *(undefined8 *)(pFVar35 + 0xa8) = puVar18[0x12];
    *(undefined8 *)(pFVar35 + 0xb0) = uVar20;
    uVar20 = puVar18[0x15];
    *(undefined8 *)(pFVar35 + 0xb8) = puVar18[0x14];
    *(undefined8 *)(pFVar35 + 0xc0) = uVar20;
    uVar20 = puVar18[0x17];
    *(undefined8 *)(pFVar35 + 200) = puVar18[0x16];
    *(undefined8 *)(pFVar35 + 0xd0) = uVar20;
    uVar20 = puVar18[0x19];
    *(undefined8 *)(pFVar35 + 0xd8) = puVar18[0x18];
    *(undefined8 *)(pFVar35 + 0xe0) = uVar20;
    uVar20 = puVar18[0x1b];
    *(undefined8 *)(pFVar35 + 0xe8) = puVar18[0x1a];
    *(undefined8 *)(pFVar35 + 0xf0) = uVar20;
    if (*(char *)((longlong)&this_00[0xb].ShaderContent + 2) == '\0') {
      pFVar31 = FindGraphicsPipelineState
                          ((FGraphicsPipelineStateInitializer *)(pFVar35 + 0x18),true);
      *(FGraphicsPipelineState **)(pFVar35 + 8) = pFVar31;
      if (pFVar31 == (FGraphicsPipelineState *)0x0) goto LAB_144f75cbd;
    }
    else {
      *(undefined8 *)(pFVar35 + 8) = 0;
LAB_144f75cbd:
      if ((*(char *)((longlong)&this_00[0xb].ShaderContent + 2) == '\0') ||
         (*(longlong *)(*(longlong *)((longlong)param_1 + 0x38) + 0x30) == 0)) {
        bVar22 = PipelineStateCache::IsPSOPrecachingEnabled();
        pFVar31 = GetGraphicsPipelineState
                            (*(FRHICommandList **)((longlong)param_1 + 0x28),
                             (FGraphicsPipelineStateInitializer *)(pFVar35 + 0x18),bVar22);
        *(FGraphicsPipelineState **)(pFVar35 + 8) = pFVar31;
        if (!bVar22) {
          *(undefined4 *)pFVar35 = 0xffffffff;
        }
      }
    }
    puVar36 = puVar36 + 1;
    uVar34 = (ulonglong)uStackX_20;
  } while( true );
}

// Call @ 144f85460

TIntVector3<int> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l22::<lambda_2>,UE::Math::TIntVector3<int>_>
::Call(TIntVector3<int> *__return_storage_ptr__,void *param_1)

{
  `Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l22::<lambda_2>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 144f85490

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Nanite::FInstanceHierarchyDriver::Init'::__l15::<lambda_2>,unsigned_int>::Call
          (void *param_1)

{
  Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::Sync(*(FDeferredSetupContext **)param_1);
  return *(uint *)(*(longlong *)param_1 + 0x10);
}

// Call @ 144f854c0

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_3>,unsigned___int64>
::Call(void *param_1)

{
  uint uVar1;
  
  uVar1 = `CreateStructuredBuffer_Impl<TArray<UE::HLSL::FCellChunkDraw,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'
          ::__l2::<lambda_3>::operator()(param_1);
  return (ulonglong)uVar1;
}

// Call @ 144f854e0

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_3>,unsigned___int64>
::Call(void *param_1)

{
  uint uVar1;
  
  uVar1 = `CreateStructuredBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'
          ::__l2::<lambda_3>::operator()(param_1);
  return (ulonglong)uVar1;
}

// Call @ 144f85500

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Nanite::FRenderer::DrawGeometry'::__l2::<lambda_3>,unsigned___int64>::Call
          (void *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  
  piVar1 = *(int **)param_1;
  if (*(FTaskBase **)(piVar1 + 6) != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait(*(FTaskBase **)(piVar1 + 6));
  }
  if (piVar1[4] != *piVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Views.Num() == NumViews",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShared.h"
                       ,0x75,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (longlong)piVar1[4] * 0x3d0;
}

// Call @ 144f85560

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Nanite::FInstanceHierarchyDriver::Init'::__l5::<lambda_3>,unsigned_int>::Call
          (void *param_1)

{
  uint uVar1;
  
  Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::Sync(*(FDeferredSetupContext **)param_1);
  uVar1 = Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::GetMaxInstanceWorkGroups
                    (*(FDeferredSetupContext **)param_1);
  return uVar1;
}

// Call @ 144f85590

TIntVector3<int> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l23::<lambda_3>,UE::Math::TIntVector3<int>_>
::Call(TIntVector3<int> *__return_storage_ptr__,void *param_1)

{
  `Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l23::<lambda_3>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 144f855c0

TIntVector3<int> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l26::<lambda_4>,UE::Math::TIntVector3<int>_>
::Call(TIntVector3<int> *__return_storage_ptr__,void *param_1)

{
  `Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l26::<lambda_4>::operator()
            (param_1,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Call @ 144f855f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntVector3<int> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Nanite::FInstanceHierarchyDriver::DispatchCullingPass'::__l30::<lambda_5>,UE::Math::TIntVector3<int>_>
::Call(TIntVector3<int> *__return_storage_ptr__,void *param_1)

{
  longlong lVar1;
  uint uVar2;
  
  Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::Sync(*(FDeferredSetupContext **)param_1);
  uVar2 = Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::GetMaxInstanceWorkGroups
                    (*(FDeferredSetupContext **)param_1);
  if (*(uint *)((longlong)param_1 + 8) < uVar2) {
    uVar2 = *(uint *)((longlong)param_1 + 8);
  }
  *(uint *)(*(longlong *)((longlong)param_1 + 0x10) + 0x14) = uVar2;
  uVar2 = Nanite::FInstanceHierarchyDriver::FDeferredSetupContext::GetMaxInstanceWorkGroups
                    (*(FDeferredSetupContext **)param_1);
  lVar1 = *(longlong *)((longlong)param_1 + 0x10);
  (__return_storage_ptr__->field0_0x0)._s_0.X = 1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 1;
  *(uint *)(lVar1 + 0x10) = uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 1;
  return __return_storage_ptr__;
}

// Call @ 14504bf20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FNaniteMaterialsParameters_&,FRDGBuilder_&),void,FNaniteMaterialsParameters_&,FRDGBuilder_&>
::Call(void *param_1,FNaniteMaterialsParameters *param_2,FRDGBuilder *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014504bf2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,param_3);
  return;
}

// Call @ 14504bf40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FNaniteOwnershipVisibilityParameters_&,FRDGBuilder_&),void,FNaniteOwnershipVisibilityParameters_&,FRDGBuilder_&>
::Call(void *param_1,FNaniteOwnershipVisibilityParameters *param_2,FRDGBuilder *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014504bf4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,param_3);
  return;
}

// Call @ 14504bf60

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateByteAddressBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_1>,unsigned_int>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return *(uint *)(lVar3 + 8) & 0x3fffffff;
}

// Call @ 14504bfb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSceneUniformBufferMemberRegistration<FNaniteMaterialsParameters>::TSceneUniformBufferMemberRegistration<FNaniteMaterialsParameters>'::__l2::<lambda_1>,void,void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&>
::Call(void *param_1,void **param_2,FShaderParametersMetadata *param_3,FRDGBuilder *param_4)

{
  `TSceneUniformBufferMemberRegistration<FNaniteMaterialsParameters>::
  TSceneUniformBufferMemberRegistration<FNaniteMaterialsParameters>'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3,param_4);
  return;
}

// Call @ 14504bfc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSceneUniformBufferMemberRegistration<FNaniteOwnershipVisibilityParameters>::TSceneUniformBufferMemberRegistration<FNaniteOwnershipVisibilityParameters>'::__l2::<lambda_1>,void,void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&>
::Call(void *param_1,void **param_2,FShaderParametersMetadata *param_3,FRDGBuilder *param_4)

{
  `TSceneUniformBufferMemberRegistration<FNaniteOwnershipVisibilityParameters>::
  TSceneUniformBufferMemberRegistration<FNaniteOwnershipVisibilityParameters>'::__l2::<lambda_1>::
  operator()(param_1,*param_2,param_3,param_4);
  return;
}

// Call @ 14504bfd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Nanite::DispatchComputeShaderBundle'::__l2::<lambda_1>,void,FRHICommandDispatchComputeShaderBundle_&>
::Call(void *param_1,FRHICommandDispatchComputeShaderBundle *param_2)

{
  FRHICommandListBase *this;
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  atomic<unsigned_int> aVar6;
  FRHIBatchedShaderParametersAllocator *pFVar7;
  FComputePipelineState *pFVar8;
  FRHIComputePipelineState *pFVar9;
  ForElementType<FRHIBatchedShaderParametersAllocator_*> FVar10;
  FScriptContainerElement *pFVar11;
  uint uVar12;
  TArray<FRHIShaderBundleComputeDispatch,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  atomic<unsigned_int> aVar16;
  int *piVar17;
  atomic<unsigned_int> aVar18;
  longlong lVar19;
  <lambda_1> a<StackX_8 [8];
  atomic<unsigned_int> aaStackX_10 [2];
  atomic<unsigned_int> aStackX_18;
  ForElementType<FRHIBatchedShaderParametersAllocator_*> FStack_d8;
  int aiStack_d0 [2];
  int *piStack_c8;
  TArray<FRHIShaderBundleComputeDispatch,TSizedDefaultAllocator<32>_> *pTStack_c0;
  TArrayView<FRHIBatchedShaderParametersAllocator_*,int> TStack_b8;
  FNaniteShadingCommands *pFStack_a8;
  FNaniteShadingPassIntermediates *pFStack_a0;
  FRHICommandDispatchComputeShaderBundle *pFStack_98;
  FShadingConfig *pFStack_90;
  uint *puStack_88;
  atomic<unsigned_int> *paStack_80;
  <lambda_2> <Stack_78;
  
  pTVar13 = &param_2->Dispatches;
  piVar17 = &(param_2->Dispatches).ArrayNum;
  param_2->ShaderBundle = (FRHIShaderBundle *)**(undefined8 **)param_1;
  param_2->bEmulated = (bool)(**(byte **)((longlong)param_1 + 8) >> 1 & 1);
  param_2->RecordArgBuffer = *(FRHIBuffer **)(*(longlong *)((longlong)param_1 + 0x10) + 0x28);
  uVar12 = *(uint *)(**(longlong **)param_1 + 0x18);
  iVar5 = *piVar17;
  piStack_c8 = piVar17;
  pTStack_c0 = pTVar13;
  if (iVar5 < (int)uVar12) {
    iVar4 = ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x88,8,uVar12 - iVar5,&pTVar13->AllocatorInstance,piVar17,
                       &(param_2->Dispatches).ArrayMax);
    DefaultConstructItems<FRHIShaderBundleComputeDispatch,int>
              ((pTVar13->AllocatorInstance).Data + (longlong)iVar4 * 0x88,uVar12 - iVar5);
  }
  else {
    if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      OnInvalidArrayNum((ulonglong)uVar12);
    }
    if ((int)uVar12 < iVar5) {
      uVar15 = iVar5 - uVar12;
      if (((int)(uVar15 | uVar12) < 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (uVar15 != 0) {
        pFVar11 = (pTVar13->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x88;
        iVar5 = (*piVar17 - uVar12) - uVar15;
        if (iVar5 != 0) {
          memmove(pFVar11,pFVar11 + (longlong)(int)uVar15 * 0x88,(longlong)iVar5 * 0x88);
        }
        *piVar17 = *piVar17 - uVar15;
        ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,&pTVar13->AllocatorInstance,*piVar17,&(param_2->Dispatches).ArrayMax);
      }
    }
  }
  pFStack_a0 = *(FNaniteShadingPassIntermediates **)((longlong)param_1 + 0x10);
  FVar10.Data = (FRHIBatchedShaderParametersAllocator **)0x0;
  pFStack_a8 = *(FNaniteShadingCommands **)((longlong)param_1 + 0x18);
  this = *(FRHICommandListBase **)((longlong)param_1 + 0x20);
  pFStack_90 = *(FShadingConfig **)((longlong)param_1 + 8);
  puStack_88 = *(uint **)((longlong)param_1 + 0x28);
  paStack_80 = aaStackX_10;
  aaStackX_10[0] = (atomic<unsigned_int>)0x0;
  aVar18 = (atomic<unsigned_int>)(pFStack_a8->Commands).ArrayNum;
  FStack_d8.Data = (FRHIBatchedShaderParametersAllocator **)0x0;
  aiStack_d0[0] = 0;
  aiStack_d0[1] = 0;
  aStackX_18 = aVar18;
  pFStack_98 = param_2;
  if ((int)aVar18 < 1) goto LAB_14503c235;
  bVar2 = FApp::ShouldUseThreadingForPerformance();
  if (bVar2) {
LAB_14503c0b8:
    bVar2 = true;
  }
  else {
    bVar3 = FForkProcessHelper::IsForkedMultithreadInstance();
    bVar2 = false;
    if (bVar3) goto LAB_14503c0b8;
  }
  aVar6 = (atomic<unsigned_int>)0x0;
  if (((1 < (int)aVar18) && (aVar6 = (atomic<unsigned_int>)0x0, bVar2)) &&
     (aVar6 = aVar18, (int)LowLevelTasks::FScheduler::Singleton.ActiveWorkers < (int)aVar18)) {
    aVar6 = LowLevelTasks::FScheduler::Singleton.ActiveWorkers;
  }
  bVar2 = LowLevelTasks::FSchedulerTls::IsWorkerThread
                    ((FSchedulerTls *)&LowLevelTasks::FScheduler::Singleton);
  aVar16 = (atomic<unsigned_int>)((int)aVar6 + 1);
  if (bVar2) {
    aVar16 = aVar6;
  }
  aVar6 = (atomic<unsigned_int>)FWindowsPlatformMisc::NumberOfCoresIncludingHyperthreads();
  if ((int)aVar16 < (int)aVar6) {
    aVar6 = aVar16;
  }
  aVar16 = (atomic<unsigned_int>)0x1;
  if (1 < (int)aVar6) {
    aVar16 = aVar6;
  }
  ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRHIBatchedShaderParametersAllocator_*>_>
            (8,8,(int)aVar16,&FStack_d8,aiStack_d0,aiStack_d0 + 1);
  FVar10.Data = FStack_d8.Data;
  uVar12 = 0;
  iVar5 = aiStack_d0[0];
  if (0 < (int)aVar16) {
    lVar19 = 0;
    do {
      uVar15 = 0;
      if ((int)uVar12 < iVar5) {
        uVar15 = ~uVar12 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar7 = FRHICommandListBase::CreateBatchedShaderParameterAllocator(this,Large);
      FVar10.Data[lVar19] = pFVar7;
      uVar12 = uVar12 + 1;
      lVar19 = lVar19 + 1;
      piVar17 = piStack_c8;
      aVar18 = aStackX_18;
    } while (lVar19 < (int)aVar16);
  }
  TStack_b8.DataPtr = FVar10.Data;
  if ((iVar5 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  <Stack_78.ShadingCommands = pFStack_a8;
  <Stack_78.Intermediates = pFStack_a0;
  TStack_b8.ArrayNum = iVar5;
  <Stack_78.DataByteOffset = puStack_88;
  <Stack_78.PendingPSOs = paStack_80;
  <Stack_78.Command = pFStack_98;
  <Stack_78.ShadingConfig = pFStack_90;
  ParallelForImpl::
  ParallelForInternal<__Nanite::DispatchComputeShaderBundle_::__l2::<lambda_1>::operator()_::__l2::<lambda_2>,_ParallelForWithTaskContext<FRHIBatchedShaderParametersAllocator_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,__Nanite::DispatchComputeShaderBundle_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>,__Nanite::DispatchComputeShaderBundle_::__l2::<lambda_1>::operator()_::__l2::<lambda_2>_>_::__l5::<lambda_1>,FRHIBatchedShaderParametersAllocator_*>
            (L"RecordShadingCommands",(int)aVar18,1,&<Stack_78,a<StackX_8[0],None,&TStack_b8);
  pTVar13 = pTStack_c0;
LAB_14503c235:
  if (aaStackX_10[0] != (atomic<unsigned_int>)0x0) {
    pFVar11 = (pTVar13->AllocatorInstance).Data;
    iVar5 = *piVar17;
    pFVar14 = pFVar11 + (longlong)iVar5 * 0x88;
    while( true ) {
      if (*piVar17 != iVar5) {
        `TCheckedPointerIterator<FRHIShaderBundleComputeDispatch,int,0>::operator!='::__l2::
        <lambda_1>::operator()(a<StackX_8);
      }
      if (pFVar11 == pFVar14) break;
      if ((*(int *)pFVar11 == -1) || (*(longlong *)(pFVar11 + 8) != 0)) {
LAB_14503c2cd:
        pFVar11 = pFVar11 + 0x88;
      }
      else {
        bVar2 = PipelineStateCache::IsPSOPrecachingEnabled();
        pFVar8 = GetComputePipelineState
                           (*(FRHIComputeCommandList **)((longlong)param_1 + 0x20),
                            *(FRHIComputeShader **)(pFVar11 + 0x10),bVar2);
        *(FComputePipelineState **)(pFVar11 + 8) = pFVar8;
        if (bVar2) {
          if (((*(longlong *)(pFVar11 + 0x10) != 0) && (GRHICommandList.bLatchedBypass != false)) &&
             ((*(byte *)(*(longlong *)((longlong)param_1 + 0x20) + 0x29b) & 0x20) != 0)) {
            pFVar9 = ExecuteSetComputePipelineState(pFVar8);
            *(FRHIComputePipelineState **)(pFVar11 + 0x20) = pFVar9;
          }
          goto LAB_14503c2cd;
        }
        *(int *)pFVar11 = -1;
        pFVar11 = pFVar11 + 0x88;
      }
    }
  }
  if (FVar10.Data != (FRHIBatchedShaderParametersAllocator **)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(FVar10.Data);
  }
  return;
}

// Call @ 14504bfe0

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateByteAddressBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_2>,void_const_*>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  puVar3 = (undefined8 *)(*pcVar1)(uVar2);
  return (void *)*puVar3;
}

// Call @ 14504c030

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateByteAddressBuffer_Impl<TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>'::__l2::<lambda_3>,unsigned___int64>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return (ulonglong)(uint)(*(int *)(lVar3 + 8) << 2);
}

// Call @ 14504c080

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`DispatchLumenMeshCapturePass'::__l2::<lambda_3>,unsigned_int>::Call
          (void *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 1;
  if (*(int *)(*(longlong *)param_1 + 8) != 0) {
    iVar3 = *(int *)(*(longlong *)param_1 + 8);
  }
  uVar1 = (ulonglong)(iVar3 - 1) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  return 1 << ((byte)lVar2 & 0x1f);
}

// Call @ 14504c0b0

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`DispatchLumenMeshCapturePass'::__l2::<lambda_4>,void_const_*>::Call
          (void *param_1)

{
  return (void *)**(undefined8 **)param_1;
}

// Call @ 14504c0c0

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`DispatchLumenMeshCapturePass'::__l2::<lambda_5>,unsigned___int64>::Call
          (void *param_1)

{
  return (ulonglong)(uint)(*(int *)(*(longlong *)param_1 + 8) * 0x3d0);
}

// Call @ 14504c0e0

TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`DispatchLumenMeshCapturePass'::__l2::<lambda_6>,TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
::Call(void *param_1)

{
  return *(TArray<unsigned_int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> **)
          param_1;
}

// Call @ 1450bdfa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001450bdfa6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 1450bdfb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AddPlanarReflection'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForAnyElementType *pFVar5;
  
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 8) + 0x2d00) = 1;
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  pFVar5 = (ForAnyElementType *)(lVar1 + 0x2ce0);
  if ((pFVar5->Data <= param_1) && (param_1 < pFVar5->Data + (longlong)*(int *)(lVar1 + 0x2cec) * 8)
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(lVar1 + 0x2ce8);
  if (iVar4 == *(int *)(lVar1 + 0x2cec)) {
    iVar4 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar5,(int *)(lVar1 + 0x2cec));
  }
  *(int *)(lVar1 + 0x2ce8) = iVar4 + 1;
  *(undefined8 *)(pFVar5->Data + (longlong)iVar4 * 8) = *(undefined8 *)param_1;
  return;
}

// Call @ 1450bdfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ISceneRenderBuilder::AddRenderCommand'::__l2::<lambda_1>,void>::Call
          (void *param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [48];
  byte bStack_28;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  this = FRenderCommandList::GetInstanceTLS();
  if (this == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<__ISceneRenderBuilder::AddRenderCommand_::__l2::<lambda_1>::operator()_::__l2::TSTR_SceneRenderBuilder_AddRenderCommand79>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              (param_1);
  }
  else {
    this_00 = FRenderCommandList::GetRenderThread(this);
    auStack_58._0_8_ = *(undefined8 *)param_1;
    auStack_58._40_8_ = *(undefined8 *)((longlong)param_1 + 0x28);
    *(undefined8 *)((longlong)param_1 + 0x28) = 0;
    auStack_58._32_8_ = *(undefined8 *)((longlong)param_1 + 0x20);
    auStack_58._16_8_ = *(undefined8 *)((longlong)param_1 + 0x10);
    auStack_58._24_8_ = *(undefined8 *)((longlong)param_1 + 0x18);
    if (auStack_58._0_8_ != 0) {
      *(undefined8 *)param_1 = 0;
    }
    bStack_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<``ISceneRenderBuilder::AddRenderCommand'::__l2::<lambda_1>::operator()'::__l2::TSTR_SceneRenderBuilder_AddRenderCommand79>
             ::Get();
    RenderCommandPipe::FCommandList::Enqueue
              (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)auStack_58,pFVar3);
    uVar5 = (ulonglong)bStack_28;
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
                  ::__l2::Destructors)[uVar5] !=
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(auStack_58);
      return;
    }
    if (auStack_58._0_8_ != 0) {
      plVar4 = (longlong *)(auStack_58 + 0x10);
      if ((longlong *)auStack_58._40_8_ != (longlong *)0x0) {
        plVar4 = (longlong *)auStack_58._40_8_;
      }
      (**(code **)(*plVar4 + 0x10))();
      return;
    }
  }
  return;
}

// Call @ 1450bdfd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::RemovePlanarReflection'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 8) + 0x2d00) = 1;
  lVar1 = *(longlong *)((longlong)param_1 + 8);
  if ((*(void **)(lVar1 + 0x2ce0) <= param_1) &&
     (param_1 < (void *)((longlong)*(void **)(lVar1 + 0x2ce0) +
                        (longlong)*(int *)(lVar1 + 0x2cec) * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x2ce8);
  if (*(int *)(lVar1 + 0x2ce8) != 0) {
    iVar9 = 0;
    plVar2 = *(longlong **)(lVar1 + 0x2ce0);
    bVar4 = *plVar2 != *(longlong *)param_1;
    lVar6 = 0;
    iVar7 = 0;
    do {
      lVar6 = lVar6 + 1;
      iVar8 = iVar7 + 1;
      if (lVar6 < lVar5) {
        do {
          if (bVar4 != (plVar2[lVar6] != *(longlong *)param_1)) break;
          iVar8 = iVar8 + 1;
          lVar6 = lVar6 + 1;
        } while (lVar6 < lVar5);
      }
      if (bVar4 != false) {
        if (iVar9 != iVar7) {
          memmove(plVar2 + iVar9,plVar2 + iVar7,(longlong)(iVar8 - iVar7) << 3);
        }
        iVar9 = iVar9 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < lVar5);
    *(int *)(lVar1 + 0x2ce8) = iVar9;
  }
  return;
}

// Call @ 1450bdfe0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdatePlanarReflectionTransform'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x90) + 0x2d00) = 1;
  FPlanarReflectionSceneProxy::UpdateTransform
            (*(FPlanarReflectionSceneProxy **)param_1,(TMatrix<double> *)((longlong)param_1 + 0x10))
  ;
  return;
}

// Call @ 1450be000

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdatePlanarReflectionContents'::__l40::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  
  (**(code **)(**(longlong **)param_1 + 0x20))();
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001450be027. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Call @ 1450be040

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdatePlanarReflectionContents'::__l43::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001450be046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x18))();
  return;
}

// Call @ 1450be050

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

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdatePlanarReflectionContents'::__l2::<lambda_3>,bool,FRDGBuilder_&,FSceneRenderFunctionInputs_const_&>
::Call(void *param_1,FRDGBuilder *param_2,FSceneRenderFunctionInputs *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  undefined1 uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  longlong lVar25;
  
  uVar23 = 0;
  *(undefined8 *)(*(longlong *)((longlong)param_1 + 8) + 600) = 0;
  if (0 < *(int *)((longlong)param_1 + 0x48)) {
    lVar24 = 0;
    lVar25 = 0x100;
    do {
      uVar22 = 0;
      if ((int)uVar23 < *(int *)((longlong)param_1 + 0x48)) {
        uVar22 = ~uVar23 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar4 = (code *)swi(3);
        uVar21 = (*pcVar4)();
        return (bool)uVar21;
      }
      lVar3 = *(longlong *)((longlong)param_1 + 0x40);
      uVar23 = uVar23 + 1;
      puVar1 = (undefined8 *)(lVar3 + 0xa0 + lVar24);
      uVar5 = puVar1[1];
      puVar2 = (undefined8 *)(lVar3 + 0xb0 + lVar24);
      uVar6 = *puVar2;
      uVar7 = puVar2[1];
      puVar2 = (undefined8 *)(lVar3 + 0xc0 + lVar24);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      puVar2 = (undefined8 *)(lVar3 + 0xd0 + lVar24);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar3 + 0xe0 + lVar24);
      uVar12 = *puVar2;
      uVar13 = puVar2[1];
      puVar2 = (undefined8 *)(lVar3 + 0xf0 + lVar24);
      uVar14 = *puVar2;
      uVar15 = puVar2[1];
      puVar2 = (undefined8 *)(lVar3 + 0x100 + lVar24);
      uVar16 = *puVar2;
      uVar17 = puVar2[1];
      puVar2 = (undefined8 *)(lVar3 + 0x110 + lVar24);
      uVar18 = *puVar2;
      uVar19 = puVar2[1];
      lVar3 = *(longlong *)((longlong)param_1 + 8);
      lVar24 = lVar24 + 0x1a0;
      *(undefined8 *)(lVar3 + lVar25) = *puVar1;
      ((undefined8 *)(lVar3 + lVar25))[1] = uVar5;
      puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar25);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar25);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar25);
      *puVar1 = uVar10;
      puVar1[1] = uVar11;
      puVar1 = (undefined8 *)(lVar3 + 0x40 + lVar25);
      *puVar1 = uVar12;
      puVar1[1] = uVar13;
      puVar1 = (undefined8 *)(lVar3 + 0x50 + lVar25);
      *puVar1 = uVar14;
      puVar1[1] = uVar15;
      puVar1 = (undefined8 *)(lVar3 + 0x60 + lVar25);
      *puVar1 = uVar16;
      puVar1[1] = uVar17;
      puVar1 = (undefined8 *)(lVar3 + 0x70 + lVar25);
      *puVar1 = uVar18;
      puVar1[1] = uVar19;
      lVar25 = lVar25 + 0x80;
      *(undefined1 *)(*(longlong *)((longlong)param_1 + 8) + 0x38) =
           *(undefined1 *)((longlong)param_1 + 0x50);
    } while ((int)uVar23 < *(int *)((longlong)param_1 + 0x48));
  }
  bVar20 = UpdatePlanarReflectionContents_RenderThread
                     (param_2,param_3->Renderer,param_3->SceneUpdateInputs,param_1);
  return bVar20;
}

// Call @ 14513af10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``AddMobileAmbientOcclusionUpsamplePass'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>,void,FGraphicsPipelineStateInitializer_&>
::Call(void *param_1,FGraphicsPipelineStateInitializer *param_2)

{
  param_2->bDepthBounds = true;
  return;
}

// Call @ 14513af20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``AddMobileAmbientOcclusionUpsamplePass'::__l5::<lambda_1>::operator()'::__l2::<lambda_2>,void,FRHICommandList_&>
::Call(void *param_1,FRHICommandList *param_2)

{
  FRHICommandList::SetDepthBounds(param_2,0.0,*(float *)param_1);
  return;
}

// Call @ 14513af40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``AddMobileAmbientOcclusionPass'::__l12::<lambda_1>::operator()'::__l2::<lambda_2>,void,FRHICommandList_&>
::Call(void *param_1,FRHICommandList *param_2)

{
  FRHICommandList::SetDepthBounds(param_2,0.0,*(float *)param_1);
  return;
}

// Call @ 14513af60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``AddMobileAmbientOcclusionUpsamplePass'::__l5::<lambda_1>::operator()'::__l2::<lambda_3>,void,FRHICommandList_&>
::Call(void *param_1,FRHICommandList *param_2)

{
  FRHICommandList::SetDepthBounds(param_2,*(float *)param_1,__real_3f800000);
  return;
}

// Call @ 14513af80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``AddMobileAmbientOcclusionPass'::__l12::<lambda_1>::operator()'::__l2::<lambda_3>,void,FRHICommandList_&>
::Call(void *param_1,FRHICommandList *param_2)

{
  FRHICommandList::SetDepthBounds(param_2,*(float *)param_1,__real_3f800000);
  return;
}

// Call @ 145312d60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FillRayTracingInstanceUploadBuffer'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FillRayTracingInstanceUploadBuffer'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 145312d70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`RefreshRayTracingInstancesSinkFunction'::__l5::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  ActiveRayTracingProxyTypes = *(ERayTracingProxyType *)((longlong)param_1 + 1);
  bUpdateCachedRayTracingState = (bool)*(undefined1 *)param_1;
  return;
}

// Call @ 145312d90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRayTracingDynamicGeometryUpdateManager::AddDynamicGeometryUpdatePass'::__l2::<lambda_4>,void>
::Call(void *param_1)

{
  FRayTracingDynamicGeometryUpdateManager::EndUpdate
            (*(FRayTracingDynamicGeometryUpdateManager **)param_1);
  return;
}

// Call @ 1453715b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget>::TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget><>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  return;
}

// Call @ 1453715c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_&>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FReflectionCubemapTexture::InitRHI(*(FReflectionCubemapTexture **)param_1,param_2);
  return;
}

// Call @ 1453715d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TRenderThreadStruct<FReflectionCubemapTexture>::TRenderThreadStruct<FReflectionCubemapTexture><int_const_&>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FReflectionCubemapTexture::InitRHI(*(FReflectionCubemapTexture **)param_1,param_2);
  return;
}

// Call @ 1453715e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget>::~TRenderThreadStruct<`CaptureSceneIntoScratchCubemap'::__l2::FDummyRenderTarget>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRenderTarget *this;
  
  this = *(FRenderTarget **)param_1;
  if (this != (FRenderTarget *)0x0) {
    FRenderTarget::~FRenderTarget(this);
    ::operator_delete(this,0x18);
    return;
  }
  return;
}

// Call @ 145371620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TRenderThreadStruct<FReflectionCubemapTexture>::~TRenderThreadStruct<FReflectionCubemapTexture>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
    if ((longlong *)*plVar1 != (longlong *)0x0) {
      (**(code **)(*(longlong *)*plVar1 + 0x38))();
    }
    ::operator_delete(plVar1,0x10);
    return;
  }
  return;
}

// Call @ 145371660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::GetReflectionCaptureData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  GetReflectionCaptureData_RenderingThread
            (param_2,*(FScene **)param_1,*(UReflectionCaptureComponent **)((longlong)param_1 + 8),
             *(FReflectionCaptureData **)((longlong)param_1 + 0x10));
  return;
}

// Call @ 145371680

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FReflectionEnvironmentSceneData::Reset'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHIResource *pFVar1;
  longlong lVar2;
  
  **(undefined1 **)param_1 = 1;
  *(undefined1 *)(*(longlong *)param_1 + 1) = 0;
  pFVar1 = *(FRHIResource **)(*(longlong *)param_1 + 0x130);
  if (pFVar1 != (FRHIResource *)0x0) {
    *(undefined8 *)(*(longlong *)param_1 + 0x130) = 0;
    FRHIResource::Release(pFVar1);
  }
  pFVar1 = *(FRHIResource **)(*(longlong *)param_1 + 0x138);
  if (pFVar1 != (FRHIResource *)0x0) {
    *(undefined8 *)(*(longlong *)param_1 + 0x138) = 0;
    FRHIResource::Release(pFVar1);
  }
  lVar2 = *(longlong *)param_1;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  if (*(int *)(lVar2 + 0x14) != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)(lVar2 + 8),0,(int *)(lVar2 + 0x14));
  }
  lVar2 = *(longlong *)param_1;
  *(undefined4 *)(lVar2 + 0x20) = 0;
  if (*(int *)(lVar2 + 0x24) != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)(lVar2 + 0x18),0,(int *)(lVar2 + 0x24));
  }
  lVar2 = *(longlong *)param_1;
  (**(code **)(*(longlong *)(lVar2 + 0x28) + 0x10))(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x48) = 0;
  FReflectionCaptureCache::Empty((FReflectionCaptureCache *)(*(longlong *)param_1 + 0x58));
  lVar2 = *(longlong *)param_1;
  *(undefined4 *)(lVar2 + 0x110) = 0;
  if ((*(int *)(lVar2 + 0x114) < 0) || (0x80 < *(int *)(lVar2 + 0x114))) {
    *(undefined4 *)(lVar2 + 0x114) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar2 + 0xf8),0);
  }
  lVar2 = *(longlong *)param_1;
  *(undefined4 *)(lVar2 + 0x120) = 0;
  if (*(int *)(lVar2 + 0x124) != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xb0,0x10,0,(ForAnyElementType *)(lVar2 + 0x118),0,(int *)(lVar2 + 0x124));
  }
  *(undefined4 *)(*(longlong *)param_1 + 0x128) = 0;
  *(undefined4 *)(*(longlong *)param_1 + 300) = 0;
  return;
}

// Call @ 145371690

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateAllReflectionCaptures'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FReflectionCaptureCache::Empty((FReflectionCaptureCache *)(*(longlong *)param_1 + 0x2d58));
  *(undefined4 *)(*(longlong *)param_1 + 0x2e10) = 0;
  return;
}

// Call @ 1453716d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::CaptureOrUploadReflectionCapture'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  UReflectionCaptureComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  FCaptureComponentSceneState *pFVar6;
  FGuid *pFVar7;
  FReflectionCaptureCache *this;
  undefined8 *puStackX_8;
  
  puVar1 = (undefined8 *)((longlong)param_1 + 0x10);
  if ((*(FReflectionCaptureData **)((longlong)param_1 + 8))->bUploadedFinal == false) {
    UploadReflectionCapture_RenderingThread
              (*(FScene **)param_1,*(FReflectionCaptureData **)((longlong)param_1 + 8),
               (UReflectionCaptureComponent *)*puVar1);
    puVar2 = *(undefined4 **)((longlong)param_1 + 8);
    if ((*(char *)(puVar2 + 10) != '\0') &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bUploadedFinal",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Engine\\MapBuildDataRegistry.h"
                           ,0xd8,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    puVar2[4] = 0;
    if (puVar2[5] != 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)(puVar2 + 2),0,puVar2 + 5);
    }
    puVar2[8] = 0;
    if (puVar2[9] != 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0,(ForAnyElementType *)(puVar2 + 6),0,puVar2 + 9);
    }
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 10) = 1;
    return;
  }
  pUVar3 = (UReflectionCaptureComponent *)*puVar1;
  this = (FReflectionCaptureCache *)(*(longlong *)param_1 + 0x2d58);
  if (pUVar3 != (UReflectionCaptureComponent *)0x0) {
    pFVar6 = FReflectionCaptureCache::Find(this,&pUVar3->MapBuildDataId);
    if (pFVar6 != (FCaptureComponentSceneState *)0x0) {
      return;
    }
    pFVar7 = TMapBase<UReflectionCaptureComponent_const_*,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>_>
             ::Find((TMapBase<UReflectionCaptureComponent_const_*,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>_>
                     *)this,pUVar3);
    if ((pFVar7 != (FGuid *)0x0) &&
       (pFVar6 = FReflectionCaptureCache::Find(this,pFVar7),
       pFVar6 != (FCaptureComponentSceneState *)0x0)) {
      return;
    }
  }
  puStackX_8 = puVar1;
  ``FScene::CaptureOrUploadReflectionCapture'::__l8::<lambda_1>::operator()'::__l10::<lambda_1>::
  operator()(&puStackX_8);
  return;
}

// Call @ 1453716e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AllocateReflectionCaptures'::__l42::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FScriptContainerElement *pFVar1;
  uint *puVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  int iVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  undefined1 auStackX_8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> TStack_78;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> TStack_68;
  
  TStack_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_78.ArrayNum = 0;
  TStack_78.ArrayMax = 0;
  lVar4 = *(longlong *)param_1;
  TStack_68.Elements._0_8_ = 0;
  TStack_68.Elements._8_8_ = 0;
  TStack_68.Elements._32_8_ = 0;
  TStack_68.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  TStack_68.HashSize = 0;
  TStack_68.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  TStack_68.Elements._48_8_ = _UNK_150631d98;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::operator=
            (&TStack_68,
             (TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator> *)((longlong)param_1 + 8));
  FReflectionCaptureCache::Prune((FReflectionCaptureCache *)(lVar4 + 0x2d58),&TStack_68,&TStack_78);
  iVar6 = TStack_78.ArrayNum;
  uVar9 = (ulonglong)TStack_78.ArrayNum;
  pFVar1 = TStack_78.AllocatorInstance.Data + uVar9 * 4;
  FVar10.Data = TStack_78.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar6) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (FVar10.Data == pFVar1) break;
    lVar4 = *(longlong *)param_1;
    iVar3 = *(int *)FVar10.Data;
    if ((iVar3 < 0) || (*(int *)(lVar4 + 0x2e10) <= iVar3)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    lVar11 = lVar4 + 0x2df8;
    if (*(longlong *)(lVar4 + 0x2e08) != 0) {
      lVar11 = *(longlong *)(lVar4 + 0x2e08);
    }
    iVar8 = iVar3;
    if (iVar3 < 0) {
      iVar8 = iVar3 + 0x1f;
    }
    puVar2 = (uint *)(lVar11 + (longlong)(iVar8 >> 5) * 4);
    *puVar2 = *puVar2 & ~(1 << ((byte)iVar3 & 0x1f));
    uVar9 = TStack_78._8_8_ & 0xffffffff;
    FVar10.Data = FVar10.Data + 4;
  }
  if (TStack_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_78.AllocatorInstance.Data);
  }
  return;
}

// Call @ 1453716f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateSkyCaptureContents'::__l15::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  float *pfVar1;
  code *pcVar2;
  bool bVar3;
  FGlobalShaderMap *pFVar4;
  undefined1 auStackY_878 [32];
  float afStack_828 [2];
  float fStack_820;
  float fStack_81c;
  float fStack_818;
  undefined4 uStack_814;
  FRDGEventName FStack_810;
  FRDGBuilder FStack_7f8;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_878;
  afStack_828[0] = 1.0;
  if (*(char *)((longlong)param_1 + 0x34) == '\0') {
    _fStack_820 = ___xmm_3f8000003f8000003f8000003f800000;
    _fStack_818 = _UNK_15076b1f8;
  }
  else {
    FStack_810.EventFormat = L"";
    FStack_810.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_810.FormattedEventName.Data.ArrayNum = 0;
    FStack_810.FormattedEventName.Data.ArrayMax = 0;
    FRDGBuilder::FRDGBuilder(&FStack_7f8,param_2,&FStack_810,None,GMaxRHIShaderPlatform);
    FRDGBuilder::RegisterExternalTexture
              (&FStack_7f8,*(TRefCountPtr<IPooledRenderTarget> **)((longlong)param_1 + 0x10),None);
    pFVar4 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)param_1]);
    ComputeSpecifiedCubemapColorScale
              (&FStack_7f8,pFVar4,*(UTextureCube **)((longlong)param_1 + 8),
               *(int *)((longlong)param_1 + 0x18),true,*(bool *)((longlong)param_1 + 0x1c),
               *(float *)((longlong)param_1 + 0x20),(FLinearColor *)((longlong)param_1 + 0x24),
               afStack_828);
    FRDGBuilder::Execute(&FStack_7f8);
    FRDGBuilder::~FRDGBuilder(&FStack_7f8);
    _fStack_820 = ___xmm_3f8000003f8000003f8000003f800000;
    _fStack_818 = _UNK_15076b1f8;
    if ((*(char *)((longlong)param_1 + 0x34) != '\0') && (__real_477fe000 < afStack_828[0])) {
      fStack_81c = __real_477fe000 / afStack_828[0];
      fStack_820 = fStack_81c;
      uStack_814 = (undefined4)((ulonglong)_UNK_15076b1f8 >> 0x20);
      fStack_818 = fStack_81c;
    }
  }
  CopyCubemapToScratchCubemap
            (param_2,*(Type *)param_1,*(UTextureCube **)((longlong)param_1 + 8),
             *(FReflectionCubemapTexture **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18),true,*(bool *)((longlong)param_1 + 0x1c),
             *(float *)((longlong)param_1 + 0x20),(FLinearColor *)((longlong)param_1 + 0x24),
             (FLinearColor *)&fStack_820);
  if ((*(char *)((longlong)param_1 + 0x34) != '\0') && (__real_477fe000 < afStack_828[0])) {
    if (*(longlong *)((longlong)param_1 + 0x38) == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("SpecifiedCubemapColorScale",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironmentCapture.cpp"
                         ,0x715,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    afStack_828[0] = afStack_828[0] * ___real_37801002;
    pfVar1 = *(float **)((longlong)param_1 + 0x38);
    *pfVar1 = afStack_828[0];
    pfVar1[1] = afStack_828[0];
    pfVar1[2] = afStack_828[0];
    pfVar1[3] = 1.0;
  }
  return;
}

// Call @ 145371700

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::CaptureOrUploadReflectionCapture'::__l46::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  IRendererModule *pIVar1;
  
  pIVar1 = GetRendererModule();
  (**(code **)((longlong)*pIVar1 + 0x1a8))(pIVar1,(longlong)param_1 + 8,0xffffffff);
  pIVar1 = GetRendererModule();
                    /* WARNING: Could not recover jumptable at 0x000145371751. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*pIVar1 + 0x1b0))
            (pIVar1,param_2,*(undefined4 *)param_1,*(code **)((longlong)*pIVar1 + 0x1b0));
  return;
}

// Call @ 145371760

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AllocateReflectionCaptures'::__l63::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FReflectionEnvironmentSceneData::ResizeCubemapArrayGPU
            ((FReflectionEnvironmentSceneData *)(*(longlong *)param_1 + 0x2d00),
             *(uint *)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 145371780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateSkyCaptureContents'::__l5::<lambda_3>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  float *pfVar1;
  longlong *plVar2;
  FGlobalShaderMap *pFVar3;
  FRDGTexture *pFVar4;
  undefined1 auStackY_848 [32];
  FRDGEventName FStack_818;
  FRDGBuilder FStack_7f8;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_848;
  pFVar3 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                              [*(int *)((longlong)param_1 + 8)]);
  FStack_818.EventFormat = L"";
  FStack_818.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_818.FormattedEventName.Data.ArrayNum = 0;
  FStack_818.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder(&FStack_7f8,param_2,&FStack_818,None,GMaxRHIShaderPlatform);
  pFVar4 = FRDGBuilder::RegisterExternalTexture
                     (&FStack_7f8,*(TRefCountPtr<IPooledRenderTarget> **)((longlong)param_1 + 0x10),
                      None);
  if (*(TArray<FFloat16Color,TSizedDefaultAllocator<32>_> **)((longlong)param_1 + 0x30) !=
      (TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *)0x0) {
    ReadbackRadianceMap(&FStack_7f8,pFVar4,
                        *(TArray<FFloat16Color,TSizedDefaultAllocator<32>_> **)
                         ((longlong)param_1 + 0x30));
  }
  pfVar1 = *(float **)((longlong)param_1 + 0x18);
  if (*(int *)((longlong)param_1 + 8) < 2) {
    MobileReflectionEnvironmentCapture::ComputeAverageBrightness(&FStack_7f8,pFVar3,pFVar4,pfVar1);
    pFVar4 = MobileReflectionEnvironmentCapture::FilterReflectionEnvironment
                       (&FStack_7f8,pFVar3,pFVar4,*(TSHVectorRGB<3> **)((longlong)param_1 + 0x20));
  }
  else {
    CreateCubeMips(&FStack_7f8,pFVar3,pFVar4);
    ComputeSingleAverageBrightnessFromCubemap(&FStack_7f8,pFVar3,pFVar4,pfVar1);
    pFVar4 = FilterReflectionEnvironment
                       (&FStack_7f8,pFVar3,pFVar4,*(TSHVectorRGB<3> **)((longlong)param_1 + 0x20));
  }
  if (*(FTexture **)((longlong)param_1 + 0x28) != (FTexture *)0x0) {
    CopyToSkyTexture(&FStack_7f8,*(FScene **)param_1,pFVar4,*(FTexture **)((longlong)param_1 + 0x28)
                    );
  }
  FRDGBuilder::Execute(&FStack_7f8);
  plVar2 = *(longlong **)(*(longlong *)param_1 + 0x2b98);
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(*(longlong *)param_1 + 0x2b98) = 0;
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar2 = *(longlong **)(*(longlong *)param_1 + 0x2ba0);
  if (plVar2 != (longlong *)0x0) {
    *(undefined8 *)(*(longlong *)param_1 + 0x2ba0) = 0;
    (**(code **)(*plVar2 + 0x38))();
  }
  FRDGBuilder::~FRDGBuilder(&FStack_7f8);
  return;
}

// Call @ 145371790

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CaptureSceneIntoScratchCubemap'::__l7::<lambda_3>,bool,FRDGBuilder_&,FSceneRenderFunctionInputs_const_&>
::Call(void *param_1,FRDGBuilder *param_2,FSceneRenderFunctionInputs *param_3)

{
  CaptureSceneToScratchCubemap
            (param_2,param_3->Renderer,param_3->SceneUpdateInputs,
             *(FReflectionCubemapTexture **)param_1,*(ECubeFace *)((longlong)param_1 + 8),
             *(int *)((longlong)param_1 + 0xc),*(bool *)((longlong)param_1 + 0x10),
             *(bool *)((longlong)param_1 + 0x11),(FLinearColor *)((longlong)param_1 + 0x14),
             *(bool *)((longlong)param_1 + 0x24));
  return true;
}

// Call @ 1453717f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::CaptureOrUploadReflectionCapture'::__l53::<lambda_3>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FLinearColor_u_0 local_18;
  
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  CopyCubemapToScratchCubemap
            (param_2,*(Type *)param_1,*(UTextureCube **)((longlong)param_1 + 8),
             *(FReflectionCubemapTexture **)((longlong)param_1 + 0x10),
             *(int *)((longlong)param_1 + 0x18),false,false,*(float *)((longlong)param_1 + 0x1c),
             (FLinearColor *)&local_18._s_0,&FLinearColor::White);
  return;
}

// Call @ 145371850

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AllocateReflectionCaptures'::__l66::<lambda_3>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FReflectionEnvironmentCubemapArray::UpdateMaxCubemaps
            ((FReflectionEnvironmentCubemapArray *)(*(longlong *)param_1 + 0x2d28),
             *(uint *)((longlong)param_1 + 8),*(int *)((longlong)param_1 + 0xc));
  return;
}

// Call @ 145371870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::CaptureOrUploadReflectionCapture'::__l19::<lambda_4>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  UReflectionCaptureComponent *pUVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FCaptureComponentSceneState *pFVar6;
  FGuid *pFVar7;
  FGlobalShaderMap *pFVar8;
  FRDGTexture *pFVar9;
  FReflectionCaptureCache *this;
  undefined1 auStackY_858 [32];
  FRDGEventName FStack_828;
  FRDGBuilder FStack_808;
  ulonglong uStack_38;
  
  uStack_38 = __security_cookie.value ^ (ulonglong)auStackY_858;
  iVar5 = FindOrAllocateCubemapIndex
                    (*(FScene **)param_1,*(UReflectionCaptureComponent **)((longlong)param_1 + 0x20)
                    );
  pUVar1 = *(UReflectionCaptureComponent **)((longlong)param_1 + 0x20);
  this = (FReflectionCaptureCache *)(*(longlong *)param_1 + 0x2d58);
  if (pUVar1 == (UReflectionCaptureComponent *)0x0) {
LAB_145368d56:
    pFVar6 = (FCaptureComponentSceneState *)0x0;
  }
  else {
    pFVar6 = FReflectionCaptureCache::Find(this,&pUVar1->MapBuildDataId);
    if (pFVar6 != (FCaptureComponentSceneState *)0x0) goto LAB_145368d7a;
    pFVar7 = TMapBase<UReflectionCaptureComponent_const_*,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>_>
             ::Find((TMapBase<UReflectionCaptureComponent_const_*,FGuid,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UReflectionCaptureComponent_const_*,FGuid,0>_>
                     *)this,pUVar1);
    if (pFVar7 == (FGuid *)0x0) goto LAB_145368d56;
    pFVar6 = FReflectionCaptureCache::Find(this,pFVar7);
    if (pFVar6 != (FCaptureComponentSceneState *)0x0) goto LAB_145368d7a;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("Found",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ReflectionEnvironment.cpp"
                     ,0x104,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_145368d7a:
  FStack_828.EventFormat = L"";
  FStack_828.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FStack_828.FormattedEventName.Data.ArrayNum = 0;
  FStack_828.FormattedEventName.Data.ArrayMax = 0;
  FRDGBuilder::FRDGBuilder(&FStack_808,param_2,&FStack_828,None,GMaxRHIShaderPlatform);
  pFVar8 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                              [*(int *)((longlong)param_1 + 8)]);
  pFVar9 = FRDGBuilder::RegisterExternalTexture
                     (&FStack_808,*(TRefCountPtr<IPooledRenderTarget> **)((longlong)param_1 + 0x10),
                      None);
  CreateCubeMips(&FStack_808,pFVar8,pFVar9);
  ComputeSingleAverageBrightnessFromCubemap(&FStack_808,pFVar8,pFVar9,&pFVar6->AverageBrightness);
  pFVar9 = FilterReflectionEnvironment(&FStack_808,pFVar8,pFVar9,(TSHVectorRGB<3> *)0x0);
  if (2 < *(int *)((longlong)param_1 + 8)) {
    CopyToSceneArray(&FStack_808,*(FScene **)param_1,pFVar9,
                     *(FReflectionCaptureProxy **)((longlong)param_1 + 0x28),iVar5);
  }
  FRDGBuilder::Execute(&FStack_808);
  pvVar2 = *(void **)((longlong)param_1 + 0x28);
  if (pvVar2 != (void *)0x0) {
    if (*(FRHIResource **)((longlong)pvVar2 + 0x10) != (FRHIResource *)0x0) {
      FRHIResource::Release(*(FRHIResource **)((longlong)pvVar2 + 0x10));
    }
    ::operator_delete(pvVar2,0xf0);
  }
  FRDGBuilder::~FRDGBuilder(&FStack_808);
  return;
}

// Call @ 145421690

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::BatchReleasePrimitivesInternal<FPrimitiveSceneDesc>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  undefined1 auStackX_8 [8];
  
  iVar2 = *(int *)((longlong)param_1 + 0x18);
  puVar3 = *(uint **)((longlong)param_1 + 0x10);
  if (*(uint **)((longlong)param_1 + 0x10) == (uint *)0x0) {
    puVar3 = (uint *)((longlong)param_1 + 8);
  }
  puVar1 = puVar3 + iVar2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x18) != iVar2) {
      `TCheckedPointerIterator<FPrimitiveComponentId_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (puVar3 == puVar1) break;
    FIndirectLightingCache::ReleasePrimitive
              ((FIndirectLightingCache *)(*(longlong *)param_1 + 0x2f00),
               (FPrimitiveComponentId)*puVar3);
    puVar3 = puVar3 + 1;
  }
  return;
}

// Call @ 1454216a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::BatchReleasePrimitivesInternal<UPrimitiveComponent>'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint *puVar1;
  int iVar2;
  uint *puVar3;
  undefined1 auStackX_8 [8];
  
  iVar2 = *(int *)((longlong)param_1 + 0x18);
  puVar3 = *(uint **)((longlong)param_1 + 0x10);
  if (*(uint **)((longlong)param_1 + 0x10) == (uint *)0x0) {
    puVar3 = (uint *)((longlong)param_1 + 8);
  }
  puVar1 = puVar3 + iVar2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x18) != iVar2) {
      `TCheckedPointerIterator<FPrimitiveComponentId_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (puVar3 == puVar1) break;
    FIndirectLightingCache::ReleasePrimitive
              ((FIndirectLightingCache *)(*(longlong *)param_1 + 0x2f00),
               (FPrimitiveComponentId)*puVar3);
    puVar3 = puVar3 + 1;
  }
  return;
}

// Call @ 1454216b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::FScene'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  FPersistentUniformBuffers::Initialize(*(FPersistentUniformBuffers **)param_1);
  return;
}

// Call @ 1454216c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneViewState::FSceneViewState'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint local_res8 [8];
  
  TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,FDefaultSetAllocator>::
  Emplace<unsigned_int_const_&>(&FSceneViewState_ActiveUniqueIDs,local_res8,param_1);
  return;
}

// Call @ 1454216f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AddExponentialHeightFog'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  
  lVar1 = *(longlong *)param_1;
  uVar5 = *(uint *)(lVar1 + 0x4700);
  if (uVar5 == *(uint *)(lVar1 + 0x4704)) {
    uVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8c0,(ForAnyElementType *)(lVar1 + 0x46f8),(int *)(lVar1 + 0x4704));
  }
  *(uint *)(lVar1 + 0x4700) = uVar5 + 1;
  uVar6 = 0;
  if ((int)uVar5 < (int)(uVar5 + 1)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar7 = (undefined8 *)((longlong)(int)uVar5 * 0xc0 + *(longlong *)(lVar1 + 0x46f8));
  if (puVar7 != (undefined8 *)0x0) {
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x10);
    *puVar7 = *(undefined8 *)((longlong)param_1 + 8);
    puVar7[1] = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x20);
    puVar7[2] = *(undefined8 *)((longlong)param_1 + 0x18);
    puVar7[3] = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x30);
    puVar7[4] = *(undefined8 *)((longlong)param_1 + 0x28);
    puVar7[5] = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x40);
    puVar7[6] = *(undefined8 *)((longlong)param_1 + 0x38);
    puVar7[7] = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x50);
    puVar7[8] = *(undefined8 *)((longlong)param_1 + 0x48);
    puVar7[9] = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x60);
    puVar7[10] = *(undefined8 *)((longlong)param_1 + 0x58);
    puVar7[0xb] = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x70);
    puVar7[0xc] = *(undefined8 *)((longlong)param_1 + 0x68);
    puVar7[0xd] = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x80);
    puVar7[0xe] = *(undefined8 *)((longlong)param_1 + 0x78);
    puVar7[0xf] = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x90);
    puVar7[0x10] = *(undefined8 *)((longlong)param_1 + 0x88);
    puVar7[0x11] = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_1 + 0xa0);
    puVar7[0x12] = *(undefined8 *)((longlong)param_1 + 0x98);
    puVar7[0x13] = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_1 + 0xb0);
    puVar7[0x14] = *(undefined8 *)((longlong)param_1 + 0xa8);
    puVar7[0x15] = uVar3;
    uVar3 = *(undefined8 *)((longlong)param_1 + 0xc0);
    puVar7[0x16] = *(undefined8 *)((longlong)param_1 + 0xb8);
    puVar7[0x17] = uVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x00014540ac5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x240))(*(longlong **)param_1,1);
  return;
}

// Call @ 145421700

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AddPrecomputedLightVolume'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType *pFVar6;
  
  lVar2 = *(longlong *)param_1;
  pFVar1 = (FScriptContainerElement *)((longlong)param_1 + 8);
  pFVar6 = (ForAnyElementType *)(lVar2 + 0x2ef0);
  if ((pFVar6->Data <= pFVar1) && (pFVar1 < pFVar6->Data + (longlong)*(int *)(lVar2 + 0x2efc) * 8))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(lVar2 + 0x2ef8);
  if (iVar5 == *(int *)(lVar2 + 0x2efc)) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar6,(int *)(lVar2 + 0x2efc));
  }
  *(int *)(lVar2 + 0x2ef8) = iVar5 + 1;
  *(undefined8 *)(pFVar6->Data + (longlong)iVar5 * 8) = *(undefined8 *)pFVar1;
  FIndirectLightingCache::SetLightingCacheDirty
            (&(*(FScene **)param_1)->IndirectLightingCache,*(FScene **)param_1,
             *(FPrecomputedLightVolume **)pFVar1);
  return;
}

// Call @ 145421710

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AddPrecomputedVolumetricLightmap'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSet<TTuple<UE::Math::TVector<double>,FVolumetricLightmapInterpolation>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,FVolumetricLightmapInterpolation,0>,FDefaultSetAllocator>
  *this;
  ForAnyElementType *pFVar1;
  char cVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  undefined8 *apuStack_18 [2];
  
  lVar3 = *(longlong *)param_1;
  cVar2 = *(char *)((longlong)param_1 + 0x10);
  this = (TSet<TTuple<UE::Math::TVector<double>,FVolumetricLightmapInterpolation>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,FVolumetricLightmapInterpolation,0>,FDefaultSetAllocator>
          *)(lVar3 + 0x3118);
  FSceneInterface::GetShadingPath(*(Type *)(lVar3 + 8));
  apuStack_18[0] = *(undefined8 **)((longlong)param_1 + 8);
  pFVar1 = (ForAnyElementType *)(lVar3 + 0x34e8);
  if (((pFVar1->Data <= (FScriptContainerElement *)apuStack_18) &&
      ((FScriptContainerElement *)apuStack_18 <
       pFVar1->Data + (longlong)*(int *)(lVar3 + 0x34f4) * 8)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)(lVar3 + 0x34f0);
  if (iVar6 == *(int *)(lVar3 + 0x34f4)) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar1,(int *)(lVar3 + 0x34f4));
  }
  *(int *)(lVar3 + 0x34f0) = iVar6 + 1;
  *(undefined8 **)(pFVar1->Data + (longlong)iVar6 * 8) = apuStack_18[0];
  if (cVar2 != '\0') {
    *(undefined8 **)(lVar3 + 0x34e0) = apuStack_18[0];
  }
  FPrecomputedVolumetricLightmapData::AddToSceneData
            ((FPrecomputedVolumetricLightmapData *)*apuStack_18[0],
             (FPrecomputedVolumetricLightmapData *)(lVar3 + 0x3168));
  bVar5 = 1 < *(int *)(lVar3 + 0x3160);
  if (!bVar5) {
    TSet<TTuple<UE::Math::TVector<double>,FVolumetricLightmapInterpolation>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,FVolumetricLightmapInterpolation,0>,FDefaultSetAllocator>
    ::UnhashElements(this);
  }
  *(undefined4 *)(lVar3 + 0x3120) = 0;
  if (*(int *)(lVar3 + 0x3124) != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xd0,0x10,0,(ForAnyElementType *)this,0,(int *)(lVar3 + 0x3124));
  }
  *(undefined4 *)(lVar3 + 0x3148) = 0xffffffff;
  *(undefined4 *)(lVar3 + 0x314c) = 0;
  *(undefined4 *)(lVar3 + 0x3140) = 0;
  if ((*(int *)(lVar3 + 0x3144) < 0) || (0x80 < *(int *)(lVar3 + 0x3144))) {
    *(undefined4 *)(lVar3 + 0x3144) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar3 + 0x3128),0);
  }
  if (bVar5) {
    *(undefined4 *)(lVar3 + 0x3160) = 1;
    TSet<TTuple<UE::Math::TVector<double>,FVolumetricLightmapInterpolation>,TDefaultMapHashableKeyFuncs<UE::Math::TVector<double>,FVolumetricLightmapInterpolation,0>,FDefaultSetAllocator>
    ::Rehash(this);
  }
  return;
}

// Call @ 145421720

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AddWindSource'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType *pFVar6;
  
  lVar2 = *(longlong *)param_1;
  pFVar1 = (FScriptContainerElement *)((longlong)param_1 + 8);
  pFVar6 = (ForAnyElementType *)(lVar2 + 0x4768);
  if ((pFVar6->Data <= pFVar1) && (pFVar1 < pFVar6->Data + (longlong)*(int *)(lVar2 + 0x4774) * 8))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(lVar2 + 0x4770);
  if (iVar5 == *(int *)(lVar2 + 0x4774)) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar6,(int *)(lVar2 + 0x4774));
  }
  *(int *)(lVar2 + 0x4770) = iVar5 + 1;
  *(undefined8 *)(pFVar6->Data + (longlong)iVar5 * 8) = *(undefined8 *)pFVar1;
  return;
}

// Call @ 145421730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::ApplyWorldOffset'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FSceneInterface::UpdateAllPrimitiveSceneInfos(*(FSceneInterface **)param_1,param_2);
  FScene::ApplyWorldOffset_RenderThread
            (*(FScene **)param_1,(FRHICommandListBase *)param_2,
             (TVector<double> *)((longlong)param_1 + 8));
  return;
}

// Call @ 145421770

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::BatchUpdateDecals'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  float fVar1;
  char cVar2;
  int iVar3;
  double dVar4;
  undefined8 uVar5;
  TTransform<double> *pTVar6;
  TTransform<double> *pTVar7;
  TTransform<double> *pTVar8;
  undefined1 auStackX_8 [8];
  
  iVar3 = *(int *)((longlong)param_1 + 0x10);
  pTVar7 = *(TTransform<double> **)((longlong)param_1 + 8);
  pTVar8 = (TTransform<double> *)((longlong)iVar3 * 0xd0 + (longlong)pTVar7);
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x10) != iVar3) {
      `TCheckedPointerIterator<FDeferredDecalUpdateParams_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_8);
    }
    if (pTVar7 == pTVar8) break;
    cVar2 = *(char *)((longlong)pTVar7[2].Rotation.XY.m128d_f64 + 0xc);
    if (cVar2 == '\x02') {
      FScene::AddOrRemoveDecal_RenderThread
                (*(FScene **)param_1,(FDeferredDecalProxy *)pTVar7[1].Rotation.XY.m128d_f64[0],false
                );
      pTVar7 = (TTransform<double> *)&pTVar7[2].Rotation.ZW;
    }
    else {
      if (cVar2 == '\0') {
        FScene::AddOrRemoveDecal_RenderThread
                  (*(FScene **)param_1,(FDeferredDecalProxy *)pTVar7[1].Rotation.XY.m128d_f64[0],
                   true);
      }
      FDeferredDecalProxy::SetTransformIncludingDecalSize
                ((FDeferredDecalProxy *)pTVar7[1].Rotation.XY.m128d_f64[0],pTVar7,
                 (TBoxSphereBounds<double,double> *)(pTVar7[1].Rotation.XY.m128d_f64 + 1));
      fVar1 = *(float *)((longlong)pTVar7[1].Scale3D.XY.m128d_f64 + 4);
      if (fVar1 == 0.0) {
        *(undefined4 *)((longlong)pTVar7[1].Rotation.XY.m128d_f64[0] + 0xb4) = 0xbf800000;
      }
      else {
        FDeferredDecalProxy::InitializeFadingParameters
                  ((FDeferredDecalProxy *)pTVar7[1].Rotation.XY.m128d_f64[0],
                   *(float *)pTVar7[1].Scale3D.XY.m128d_f64,fVar1,
                   *(float *)(pTVar7[1].Scale3D.XY.m128d_f64 + 1),
                   *(float *)((longlong)pTVar7[1].Scale3D.XY.m128d_f64 + 0xc),
                   *(float *)pTVar7[1].Scale3D.ZW.m128d_f64);
      }
      *(undefined4 *)((longlong)pTVar7[1].Rotation.XY.m128d_f64[0] + 0xc4) =
           *(undefined4 *)((longlong)pTVar7[1].Scale3D.ZW.m128d_f64 + 4);
      *(undefined4 *)((longlong)pTVar7[1].Rotation.XY.m128d_f64[0] + 0xb0) =
           *(undefined4 *)(pTVar7[1].Scale3D.ZW.m128d_f64 + 1);
      dVar4 = pTVar7[1].Rotation.XY.m128d_f64[0];
      pTVar6 = pTVar7 + 1;
      uVar5 = *(undefined8 *)((longlong)pTVar7[2].Rotation.XY.m128d_f64 + 4);
      pTVar7 = (TTransform<double> *)&pTVar7[2].Rotation.ZW;
      *(undefined8 *)((longlong)dVar4 + 200) =
           *(undefined8 *)((longlong)(pTVar6->Scale3D).ZW.m128d_f64 + 0xc);
      *(undefined8 *)((longlong)dVar4 + 0xd0) = uVar5;
    }
  }
  return;
}

// Call @ 145421780

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::DisableSkyLight'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  uint uVar8;
  
  lVar1 = *(longlong *)param_1;
  plVar2 = *(longlong **)(lVar1 + 0x2bb8);
  if (plVar2 != plVar2 + *(int *)(lVar1 + 0x2bc0)) {
    plVar6 = plVar2;
    do {
      if (*plVar6 == *(longlong *)((longlong)param_1 + 8)) {
        iVar5 = (int)((longlong)plVar6 - (longlong)plVar2 >> 3);
        if (iVar5 != -1) {
          memmove(plVar2 + iVar5,plVar2 + iVar5 + 1,
                  (longlong)((*(int *)(lVar1 + 0x2bc0) - iVar5) + -1) << 3);
          *(int *)(lVar1 + 0x2bc0) = *(int *)(lVar1 + 0x2bc0) + -1;
        }
        break;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar2 + *(int *)(lVar1 + 0x2bc0));
  }
  lVar1 = *(longlong *)param_1;
  if (*(int *)(lVar1 + 0x2bc0) < 1) {
    *(undefined8 *)(lVar1 + 0x2b38) = 0;
  }
  else {
    uVar8 = *(int *)(lVar1 + 0x2bc0) - 1;
    uVar7 = 0;
    if ((int)uVar8 < *(int *)(lVar1 + 0x2bc0)) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined8 *)(*(longlong *)param_1 + 0x2b38) =
         *(undefined8 *)
          (*(longlong *)(lVar1 + 0x2bb8) + -8 + (longlong)*(int *)(lVar1 + 0x2bc0) * 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014540b3e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x240))(*(longlong **)param_1,1);
  return;
}

// Call @ 145421790

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRendererModule::GPUBenchmark'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  RendererGPUBenchmark
            (param_2,*(FSynthBenchmarkResults **)((longlong)param_1 + 0x1c38),param_1,
             *(float *)((longlong)param_1 + 0x1c30),false);
  return;
}

// Call @ 1454217d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::IncrementFrameNumber'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined4 *)(*(longlong *)param_1 + 0x508c) = *(undefined4 *)((longlong)param_1 + 8);
  return;
}

// Call @ 1454217f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::OnLevelAddedToWorld'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType *pFVar6;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  uStack_18 = *(undefined8 *)((longlong)param_1 + 8);
  lVar1 = *(longlong *)param_1;
  pFVar6 = (ForAnyElementType *)(lVar1 + 0x5030);
  uStack_10 = 0;
  if ((pFVar6->Data <= (FScriptContainerElement *)&uStack_18) &&
     ((FScriptContainerElement *)&uStack_18 <
      pFVar6->Data + (longlong)*(int *)(lVar1 + 0x503c) * 0xc)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(lVar1 + 0x5038);
  if (iVar5 == *(int *)(lVar1 + 0x503c)) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,pFVar6,(int *)(lVar1 + 0x503c));
  }
  *(int *)(lVar1 + 0x5038) = iVar5 + 1;
  pFVar2 = pFVar6->Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0xc) = uStack_18;
  *(undefined4 *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = uStack_10;
  return;
}

// Call @ 145421800

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::OnLevelRemovedFromWorld'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType *pFVar6;
  undefined8 uStack_18;
  undefined4 uStack_10;
  
  uStack_18 = *(undefined8 *)((longlong)param_1 + 8);
  lVar1 = *(longlong *)param_1;
  pFVar6 = (ForAnyElementType *)(lVar1 + 0x5030);
  uStack_10 = 1;
  if ((pFVar6->Data <= (FScriptContainerElement *)&uStack_18) &&
     ((FScriptContainerElement *)&uStack_18 <
      pFVar6->Data + (longlong)*(int *)(lVar1 + 0x503c) * 0xc)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(lVar1 + 0x5038);
  if (iVar5 == *(int *)(lVar1 + 0x503c)) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,pFVar6,(int *)(lVar1 + 0x503c));
  }
  *(int *)(lVar1 + 0x5038) = iVar5 + 1;
  pFVar2 = pFVar6->Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar5 * 0xc) = uStack_18;
  *(undefined4 *)(pFVar2 + (longlong)iVar5 * 0xc + 8) = uStack_10;
  return;
}

// Call @ 145421810

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRendererModule::OnWorldCleanup'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  if (0 < bFlushRenderTargetsOnWorldCleanup) {
    FRenderTargetPool::FreeUnusedResources((FRenderTargetPool *)&GRenderTargetPool);
  }
  if ((*(char *)((longlong)param_1 + 8) != '\0') && (*(longlong **)param_1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145421844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)param_1 + 0x428))();
    return;
  }
  return;
}

// Call @ 145421860

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::RemoveExponentialHeightFog'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FScriptContainerElement *_Dst;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  lVar6 = *(longlong *)param_1;
  uVar7 = 0;
  if (0 < *(int *)(lVar6 + 0x4700)) {
    lVar8 = 0;
    do {
      plVar1 = (longlong *)(lVar6 + 0x46f8);
      uVar9 = ~uVar7 >> 0x1f;
      uVar4 = 0;
      if ((int)uVar7 < *(int *)(lVar6 + 0x4700)) {
        uVar4 = uVar9;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar6 = *(longlong *)param_1;
      if (*(longlong *)(lVar8 + *plVar1) == *(longlong *)((longlong)param_1 + 8)) {
        uVar4 = 0;
        if ((int)uVar7 < *(int *)(lVar6 + 0x4700)) {
          uVar4 = uVar9;
        }
        if ((uVar4 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        _Dst = ((ForAnyElementType *)(lVar6 + 0x46f8))->Data + (longlong)(int)uVar7 * 0xc0;
        iVar5 = *(int *)(lVar6 + 0x4700) + ~uVar7;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + 0xc0,(longlong)iVar5 * 0xc0);
        }
        *(int *)(lVar6 + 0x4700) = *(int *)(lVar6 + 0x4700) + -1;
        ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xc0,8,(ForAnyElementType *)(lVar6 + 0x46f8),*(int *)(lVar6 + 0x4700),
                   (int *)(lVar6 + 0x4704));
        (**(code **)(**(longlong **)param_1 + 0x240))(*(longlong **)param_1,1);
        return;
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 0xc0;
    } while ((int)uVar7 < *(int *)(lVar6 + 0x4700));
  }
  return;
}

// Call @ 145421870

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::RemovePrecomputedLightVolume'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  lVar2 = *(longlong *)param_1;
  plVar1 = (longlong *)((longlong)param_1 + 8);
  if ((*(longlong **)(lVar2 + 0x2ef0) <= plVar1) &&
     (plVar1 < *(longlong **)(lVar2 + 0x2ef0) + *(int *)(lVar2 + 0x2efc))) {
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
  lVar6 = (longlong)*(int *)(lVar2 + 0x2ef8);
  if (*(int *)(lVar2 + 0x2ef8) != 0) {
    iVar10 = 0;
    plVar3 = *(longlong **)(lVar2 + 0x2ef0);
    bVar5 = *plVar3 != *plVar1;
    lVar7 = 0;
    iVar8 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar9 = iVar8 + 1;
      if (lVar7 < lVar6) {
        do {
          if (bVar5 != (plVar3[lVar7] != *plVar1)) break;
          iVar9 = iVar9 + 1;
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar6);
      }
      if (bVar5 != false) {
        if (iVar10 != iVar8) {
          memmove(plVar3 + iVar10,plVar3 + iVar8,(longlong)(iVar9 - iVar8) << 3);
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < lVar6);
    *(int *)(lVar2 + 0x2ef8) = iVar10;
  }
  FIndirectLightingCache::SetLightingCacheDirty
            (&(*(FScene **)param_1)->IndirectLightingCache,*(FScene **)param_1,
             (FPrecomputedLightVolume *)*plVar1);
  return;
}

// Call @ 145421880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::RemovePrecomputedVolumetricLightmap'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FVolumetricLightmapSceneData::RemoveLevelVolume
            ((FVolumetricLightmapSceneData *)(*(longlong *)param_1 + 0x3118),
             *(FPrecomputedVolumetricLightmap **)((longlong)param_1 + 8));
  return;
}

// Call @ 1454218a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::ResetPhysicsField'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined8 *)(*(longlong *)param_1 + 0x4760) = 0;
  return;
}

// Call @ 1454218c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::SetPhysicsField'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined8 *)(*(longlong *)param_1 + 0x4760) = *(undefined8 *)((longlong)param_1 + 8);
  return;
}

// Call @ 1454218e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::SetPrecomputedVisibility'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined8 *)(*(longlong *)param_1 + 0x4878) = *(undefined8 *)((longlong)param_1 + 8);
  return;
}

// Call @ 145421900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::SetSkyLight'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  ForAnyElementType *pFVar8;
  
  pFVar1 = (FScriptContainerElement *)((longlong)param_1 + 8);
  plVar7 = *(longlong **)(*(longlong *)param_1 + 0x2bb8);
  plVar2 = plVar7 + *(int *)(*(longlong *)param_1 + 0x2bc0);
  if (plVar7 != plVar2) {
    do {
      if (*plVar7 == *(longlong *)pFVar1) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Scene->SkyLightStack.Contains(LightProxy)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                           ,0x944,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        break;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar2);
  }
  lVar3 = *(longlong *)param_1;
  pFVar8 = (ForAnyElementType *)(lVar3 + 0x2bb8);
  if (((pFVar8->Data <= pFVar1) && (pFVar1 < pFVar8->Data + (longlong)*(int *)(lVar3 + 0x2bc4) * 8))
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar6 = *(int *)(lVar3 + 0x2bc0);
  if (iVar6 == *(int *)(lVar3 + 0x2bc4)) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar8,(int *)(lVar3 + 0x2bc4));
  }
  *(int *)(lVar3 + 0x2bc0) = iVar6 + 1;
  *(longlong *)(pFVar8->Data + (longlong)iVar6 * 8) = *(longlong *)pFVar1;
  *(longlong *)(*(longlong *)param_1 + 0x2b38) = *(longlong *)pFVar1;
                    /* WARNING: Could not recover jumptable at 0x00014540ba16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x240))(*(longlong **)param_1,1);
  return;
}

// Call @ 145421910

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateParameterCollections'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  TSet<TTuple<FGuid,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FRHIUniformBuffer>,0>,FDefaultSetAllocator>
  *this;
  ulonglong uVar7;
  ulonglong uVar8;
  FRHIResource *apFStackX_18 [2];
  undefined8 *puStack_48;
  FRHIResource **ppFStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  FRDGBuilder::WaitForAsyncExecuteTask();
  lVar1 = *(longlong *)param_1;
  this = (TSet<TTuple<FGuid,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FRHIUniformBuffer>,0>,FDefaultSetAllocator>
          *)(lVar1 + 0x4a80);
  bVar4 = 1 < *(int *)(lVar1 + 0x4ac8);
  if (!bVar4) {
    TSet<TTuple<FGuid,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FRHIUniformBuffer>,0>,FDefaultSetAllocator>
    ::UnhashElements(this);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TRefCountPtr<FRHIUniformBuffer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FGuid,TRefCountPtr<FRHIUniformBuffer>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this,0,*(int *)(lVar1 + 0x4a88));
  uVar7 = 0;
  *(undefined4 *)(lVar1 + 0x4a88) = 0;
  if (*(int *)(lVar1 + 0x4a8c) != 0) {
    ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)this,0,(int *)(lVar1 + 0x4a8c));
  }
  *(undefined4 *)(lVar1 + 0x4ab0) = 0xffffffff;
  *(undefined4 *)(lVar1 + 0x4ab4) = 0;
  *(undefined4 *)(lVar1 + 0x4aa8) = 0;
  if ((*(int *)(lVar1 + 0x4aac) < 0) || (0x80 < *(int *)(lVar1 + 0x4aac))) {
    *(undefined4 *)(lVar1 + 0x4aac) = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar1 + 0x4a90),0);
  }
  if (bVar4) {
    *(undefined4 *)(lVar1 + 0x4ac8) = 1;
    TSet<TTuple<FGuid,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FRHIUniformBuffer>,0>,FDefaultSetAllocator>
    ::Rehash(this);
  }
  uVar8 = uVar7;
  if (0 < *(int *)((longlong)param_1 + 0x10)) {
    do {
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < *(int *)((longlong)param_1 + 0x10)) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)param_1;
      puVar2 = *(undefined8 **)(uVar8 + *(longlong *)((longlong)param_1 + 8));
      apFStackX_18[0] = (FRHIResource *)puVar2[3];
      if (apFStackX_18[0] != (FRHIResource *)0x0) {
        FRHIResource::AddRef(apFStackX_18[0]);
      }
      uStack_38 = *puVar2;
      uStack_30 = puVar2[1];
      puStack_48 = &uStack_38;
      ppFStack_40 = apFStackX_18;
      TSet<TTuple<FGuid,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FRHIUniformBuffer>,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FGuid_&&,TRefCountPtr<FRHIUniformBuffer>_&&>_>
                ((TSet<TTuple<FGuid,TRefCountPtr<FRHIUniformBuffer>_>,TDefaultMapHashableKeyFuncs<FGuid,TRefCountPtr<FRHIUniformBuffer>,0>,FDefaultSetAllocator>
                  *)(lVar1 + 0x4a80),
                 (TPairInitializer<FGuid_&&,TRefCountPtr<FRHIUniformBuffer>_&&> *)&stack0x00000008,
                 (bool *)&puStack_48);
      if (apFStackX_18[0] != (FRHIResource *)0x0) {
        FRHIResource::Release(apFStackX_18[0]);
      }
      uVar7 = (ulonglong)(uVar6 + 1);
      uVar8 = uVar8 + 8;
    } while ((int)(uVar6 + 1) < *(int *)((longlong)param_1 + 0x10));
  }
  return;
}

// Call @ 145421920

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateSceneSettings'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined4 *)(*(longlong *)param_1 + 0x4c10) = *(undefined4 *)((longlong)param_1 + 8);
  *(undefined4 *)(*(longlong *)param_1 + 0x4c14) = *(undefined4 *)((longlong)param_1 + 0xc);
  *(undefined4 *)(*(longlong *)param_1 + 0x4c18) = *(undefined4 *)((longlong)param_1 + 0x10);
  return;
}

// Call @ 145421950

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateSpeedTreeWind'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  byte bVar1;
  longlong lVar2;
  UStaticMesh *this;
  FSpeedTreeWind *this_00;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FStaticMeshRenderData *pFVar7;
  float *pfVar8;
  ulonglong uVar9;
  uint uVar10;
  float afStackX_8 [2];
  float afStackX_18 [2];
  float afStackX_20 [2];
  undefined1 auStack_310 [16];
  uint uStack_300;
  uint uStack_2fc;
  longlong lStack_2f8;
  TSet<TTuple<UStaticMesh_const_*,FSpeedTreeWindComputation_*>,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>,FDefaultSetAllocator>
  *pTStack_2f0;
  TSet<TTuple<UStaticMesh_const_*,FSpeedTreeWindComputation_*>,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>,FDefaultSetAllocator>
  *pTStack_2e8;
  char cStack_2e0;
  char cStack_2df;
  TVector<double> TStack_2d8;
  undefined1 auStack_2c0 [32];
  longlong lStack_2a0;
  TSet<TTuple<UStaticMesh_const_*,FSpeedTreeWindComputation_*>,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>,FDefaultSetAllocator>
  *pTStack_298;
  TVector4<float>_u_0 TStack_288;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  float fStack_168;
  undefined8 uStack_164;
  undefined4 uStack_15c;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  (**(code **)(**(longlong **)param_1 + 0x3a8))
            (*(longlong **)param_1,&TStack_2d8,afStackX_8,afStackX_18,afStackX_20);
  lVar2 = *(longlong *)param_1;
  TSet<TTuple<UStaticMesh_const_*,FSpeedTreeWindComputation_*>,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)auStack_2c0,
             (TSet<TTuple<UStaticMesh_const_*,FSpeedTreeWindComputation_*>,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>,FDefaultSetAllocator>
              *)(lVar2 + 0x4788));
  cStack_2e0 = '\0';
  cStack_2df = '\0';
  stack0xfffffffffffffcf8 = auStack_2c0._16_16_;
  auStack_310._0_8_ = auStack_2c0._8_8_;
  lStack_2f8 = lStack_2a0;
  pTStack_2f0 = pTStack_298;
  uVar9 = auStack_2c0._24_8_ >> 0x20;
  uVar10 = auStack_2c0._28_4_;
  pTStack_2e8 = (TSet<TTuple<UStaticMesh_const_*,FSpeedTreeWindComputation_*>,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>,FDefaultSetAllocator>
                 *)(lVar2 + 0x4788);
  if ((int)uVar10 < *(int *)(auStack_2c0._16_8_ + 0x18)) {
    do {
      this = *(UStaticMesh **)(*(longlong *)auStack_2c0._0_8_ + (longlong)(int)uVar9 * 0x18);
      this_00 = *(FSpeedTreeWind **)
                 (*(longlong *)auStack_2c0._0_8_ + 8 + (longlong)(int)uVar10 * 0x18);
      pFVar7 = UStaticMesh::GetRenderData(this);
      if ((pFVar7 == (FStaticMeshRenderData *)0x0) ||
         ((this->SpeedTreeWind).Object == (FSpeedTreeWind *)0x0)) {
        TSet<TTuple<UStaticMesh_const_*,FSpeedTreeWindComputation_*>,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_2f0,uVar10);
        cStack_2e0 = '\x01';
      }
      else {
        FSpeedTreeWind::SetDirection(this_00,&TStack_2d8);
        FSpeedTreeWind::SetStrength(this_00,afStackX_8[0]);
        FSpeedTreeWind::SetGustMin(this_00,afStackX_18[0]);
        FSpeedTreeWind::SetGustMax(this_00,afStackX_20[0]);
        FSpeedTreeWind::Advance(this_00,true,*(double *)((longlong)param_1 + 8));
        pfVar8 = FSpeedTreeWind::GetShaderTable(this_00);
        FSpeedTreeUniformParameters::FSpeedTreeUniformParameters
                  ((FSpeedTreeUniformParameters *)&TStack_288._s_0);
        uStack_164 = 0;
        uStack_15c = 0;
        fStack_168 = (float)*(double *)((longlong)param_1 + 8);
        TStack_288._0_8_ = *(undefined8 *)pfVar8;
        TStack_288._8_8_ = *(undefined8 *)(pfVar8 + 2);
        uStack_158 = *(undefined8 *)(pfVar8 + 0x48);
        uStack_150 = *(undefined8 *)(pfVar8 + 0x4a);
        uStack_278 = *(undefined8 *)(pfVar8 + 4);
        uStack_270 = *(undefined8 *)(pfVar8 + 6);
        uStack_148 = *(undefined8 *)(pfVar8 + 0x4c);
        uStack_140 = *(undefined8 *)(pfVar8 + 0x4e);
        uStack_268 = *(undefined8 *)(pfVar8 + 8);
        uStack_260 = *(undefined8 *)(pfVar8 + 10);
        uStack_138 = *(undefined8 *)(pfVar8 + 0x50);
        uStack_130 = *(undefined8 *)(pfVar8 + 0x52);
        uStack_258 = *(undefined8 *)(pfVar8 + 0xc);
        uStack_250 = *(undefined8 *)(pfVar8 + 0xe);
        uStack_128 = *(undefined8 *)(pfVar8 + 0x54);
        uStack_120 = *(undefined8 *)(pfVar8 + 0x56);
        uStack_248 = *(undefined8 *)(pfVar8 + 0x10);
        uStack_240 = *(undefined8 *)(pfVar8 + 0x12);
        uStack_118 = *(undefined8 *)(pfVar8 + 0x58);
        uStack_110 = *(undefined8 *)(pfVar8 + 0x5a);
        uStack_238 = *(undefined8 *)(pfVar8 + 0x14);
        uStack_230 = *(undefined8 *)(pfVar8 + 0x16);
        uStack_108 = *(undefined8 *)(pfVar8 + 0x5c);
        uStack_100 = *(undefined8 *)(pfVar8 + 0x5e);
        uStack_228 = *(undefined8 *)(pfVar8 + 0x18);
        uStack_220 = *(undefined8 *)(pfVar8 + 0x1a);
        uStack_f8 = *(undefined8 *)(pfVar8 + 0x60);
        uStack_f0 = *(undefined8 *)(pfVar8 + 0x62);
        uStack_218 = *(undefined8 *)(pfVar8 + 0x1c);
        uStack_210 = *(undefined8 *)(pfVar8 + 0x1e);
        uStack_e8 = *(undefined8 *)(pfVar8 + 100);
        uStack_e0 = *(undefined8 *)(pfVar8 + 0x66);
        uStack_208 = *(undefined8 *)(pfVar8 + 0x20);
        uStack_200 = *(undefined8 *)(pfVar8 + 0x22);
        uStack_d8 = *(undefined8 *)(pfVar8 + 0x68);
        uStack_d0 = *(undefined8 *)(pfVar8 + 0x6a);
        uStack_1f8 = *(undefined8 *)(pfVar8 + 0x24);
        uStack_1f0 = *(undefined8 *)(pfVar8 + 0x26);
        uStack_c8 = *(undefined8 *)(pfVar8 + 0x6c);
        uStack_c0 = *(undefined8 *)(pfVar8 + 0x6e);
        uStack_1e8 = *(undefined8 *)(pfVar8 + 0x28);
        uStack_1e0 = *(undefined8 *)(pfVar8 + 0x2a);
        uStack_b8 = *(undefined8 *)(pfVar8 + 0x70);
        uStack_b0 = *(undefined8 *)(pfVar8 + 0x72);
        uStack_1d8 = *(undefined8 *)(pfVar8 + 0x2c);
        uStack_1d0 = *(undefined8 *)(pfVar8 + 0x2e);
        uStack_a8 = *(undefined8 *)(pfVar8 + 0x74);
        uStack_a0 = *(undefined8 *)(pfVar8 + 0x76);
        uStack_1c8 = *(undefined8 *)(pfVar8 + 0x30);
        uStack_1c0 = *(undefined8 *)(pfVar8 + 0x32);
        uStack_98 = *(undefined8 *)(pfVar8 + 0x78);
        uStack_90 = *(undefined8 *)(pfVar8 + 0x7a);
        uStack_1b8 = *(undefined8 *)(pfVar8 + 0x34);
        uStack_1b0 = *(undefined8 *)(pfVar8 + 0x36);
        uStack_88 = *(undefined8 *)(pfVar8 + 0x7c);
        uStack_80 = *(undefined8 *)(pfVar8 + 0x7e);
        bVar1 = param_2->field_0x6a;
        uStack_1a8 = *(undefined8 *)(pfVar8 + 0x38);
        uStack_1a0 = *(undefined8 *)(pfVar8 + 0x3a);
        uStack_78 = *(undefined8 *)(pfVar8 + 0x80);
        uStack_70 = *(undefined8 *)(pfVar8 + 0x82);
        uStack_198 = *(undefined8 *)(pfVar8 + 0x3c);
        uStack_190 = *(undefined8 *)(pfVar8 + 0x3e);
        uStack_68 = *(undefined8 *)(pfVar8 + 0x84);
        uStack_60 = *(undefined8 *)(pfVar8 + 0x86);
        uStack_188 = *(undefined8 *)(pfVar8 + 0x40);
        uStack_180 = *(undefined8 *)(pfVar8 + 0x42);
        uStack_58 = *(undefined8 *)(pfVar8 + 0x88);
        uStack_50 = *(undefined8 *)(pfVar8 + 0x8a);
        uStack_178 = *(undefined8 *)(pfVar8 + 0x44);
        uStack_170 = *(undefined8 *)(pfVar8 + 0x46);
        uStack_48 = *(undefined8 *)(pfVar8 + 0x8c);
        uStack_40 = *(undefined8 *)(pfVar8 + 0x8e);
        uVar3._0_4_ = this_00[1].m_sParams.m_fStrengthResponse;
        uVar3._4_4_ = this_00[1].m_sParams.m_fDirectionResponse;
        if (((bVar1 != 0) && ((bVar1 & bVar1 - 1) != 0)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                               ,0x2a5,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (param_2->field_0x6a == '\0') {
          FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_2,Graphics);
          (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,param_2,uVar3,&TStack_288);
          FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_2,None);
        }
        else {
          (**(code **)(GDynamicRHI->_padding_ + 0x130))(GDynamicRHI,param_2,uVar3,&TStack_288);
        }
      }
      uStack_300 = uStack_300 & ~auStack_310._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_310);
      uVar9 = (ulonglong)uStack_2fc;
      uVar10 = uStack_2fc;
    } while ((int)uStack_2fc < *(int *)(auStack_310._8_8_ + 0x18));
    if ((cStack_2e0 != '\0') && (cStack_2df != '\0')) {
      uVar10 = *(int *)&(pTStack_2e8->Elements).field_0x8 -
               *(int *)&(pTStack_2e8->Elements).field_0x34;
      if (uVar10 < 4) {
        iVar6 = 1;
      }
      else {
        uVar9 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
        lVar2 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar2 == 0; lVar2 = lVar2 + -1) {
          }
        }
        iVar6 = 1 << ((byte)lVar2 & 0x1f);
      }
      if (((0 < (int)uVar10) && (pTStack_2e8->HashSize < iVar6)) || (iVar6 < pTStack_2e8->HashSize))
      {
        pTStack_2e8->HashSize = iVar6;
        TSet<TTuple<UStaticMesh_const_*,FSpeedTreeWindComputation_*>,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>,FDefaultSetAllocator>
        ::Rehash(pTStack_2e8);
      }
    }
  }
  return;
}

// Call @ 145421960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateStaticDrawLists'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FScene::UpdateStaticDrawLists_RenderThread(*(FScene **)param_1,param_2);
  return;
}

// Call @ 145421970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UpdateStaticMeshesForMaterials'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  longlong *plVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  undefined8 *puVar12;
  int iVar13;
  TBitArray<FDefaultBitArrayAllocator> *pTVar14;
  int iVar15;
  uint uVar16;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  uint uStack_168;
  undefined4 uStack_134;
  undefined4 uStack_f4;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  undefined8 uStack_c8;
  longlong *plStack_c0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b8;
  undefined8 uStack_98;
  FPrimitiveSceneInfo **ppFStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  TArrayView<FPrimitiveSceneInfo_*,int> aTStack_78 [2];
  undefined4 uStack_4c;
  
  iVar3 = *(int *)((longlong)param_1 + 0x28);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)param_1 + 0x10);
  uStack_168 = 1;
  iVar13 = 0;
  iVar15 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar3 != 0) {
    pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar1;
    }
    uVar8 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
    iVar15 = 0;
    while (uVar8 == 0) {
      lVar11 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      uVar8 = 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14540c2af;
      uVar8 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar8 = -uVar8 & uVar8;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = (int)lVar11 + -1 + iVar15;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_14540c2af:
  uVar16 = *(uint *)((longlong)param_1 + 0x28);
  TStack_e8._padding_ = CONCAT44(uVar8,iVar13);
  uVar8 = uVar16 & 0xffffffe0;
  TStack_e8.CurrentBitIndex = iVar9;
  TStack_e8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar16 >> 5;
  TStack_e8._28_4_ = uStack_4c;
  TStack_e8.BaseBitIndex = iVar15;
  uStack_c8 = CONCAT44(uStack_134,
                       *(int *)((longlong)param_1 + 8) - *(int *)((longlong)param_1 + 0x34));
  TStack_e8.Array = pTVar1;
  if ((((int)uVar16 < 0) || (iVar3 < (int)uVar16)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)((longlong)param_1 + 0x28);
  if (uVar16 != uVar4) {
    pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) &
             *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar13;
      uVar8 = uVar8 + 0x20;
      iVar13 = iVar13 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14540c3d1;
      uVar16 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar16 = (int)lVar11 + -1 + uVar8;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_14540c3d1:
  while( true ) {
    if (*(int *)((longlong)param_1 + 8) - *(int *)((longlong)param_1 + 0x34) != (int)uStack_c8) {
      auStackX_18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FScene_*,TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_18);
    }
    if ((TStack_e8.CurrentBitIndex == uVar16) && (TStack_e8.Array == pTVar1)) break;
    FSceneInterface::UpdateAllPrimitiveSceneInfos
              (*(FSceneInterface **)
                ((longlong)TStack_e8.CurrentBitIndex * 0x20 + *(longlong *)param_1),param_2);
    TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
  }
  iVar3 = *(int *)((longlong)param_1 + 0x28);
  iVar13 = 0;
  iVar15 = 0;
  iVar10 = 0;
  if (iVar3 != 0) {
    pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar1;
    }
    uVar8 = *(uint *)(pTVar14->AllocatorInstance).InlineData;
    while (uVar8 == 0) {
      lVar11 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      iVar10 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14540c4a1;
      uVar8 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uStack_168 = -uVar8 & uVar8;
    uVar2 = (ulonglong)uStack_168 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = iVar15 + -1 + (int)lVar11;
    if (iVar3 < iVar10) {
      iVar10 = iVar3;
    }
  }
LAB_14540c4a1:
  uVar8 = *(uint *)((longlong)param_1 + 0x28);
  uVar16 = uVar8 & 0xffffffe0;
  TStack_b8._padding_ = CONCAT44(uStack_168,iVar13);
  TStack_b8.CurrentBitIndex = iVar10;
  TStack_b8.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar8 >> 5;
  TStack_b8._28_4_ = iVar9;
  TStack_b8.BaseBitIndex = iVar15;
  uStack_98 = CONCAT44(uStack_f4,
                       *(int *)((longlong)param_1 + 8) - *(int *)((longlong)param_1 + 0x34));
  plStack_c0 = param_1;
  TStack_b8.Array = pTVar1;
  if ((((int)uVar8 < 0) || (iVar3 < (int)uVar8)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = *(uint *)((longlong)param_1 + 0x28);
  if (uVar8 != uVar4) {
    pTVar14 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)param_1 + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar14 = pTVar1;
    }
    uVar8 = -1 << ((byte)uVar8 & 0x1f) &
            *(uint *)((pTVar14->AllocatorInstance).InlineData + (longlong)iVar13 * 4);
    while (uVar8 == 0) {
      lVar11 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar8 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_14540c5b1;
      uVar8 = *(uint *)((pTVar14->AllocatorInstance).InlineData + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar8 & uVar8) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar8 = (int)lVar11 + -1 + uVar16;
    if ((int)uVar4 < (int)uVar8) {
      uVar8 = uVar4;
    }
  }
LAB_14540c5b1:
  while( true ) {
    plVar6 = plStack_c0;
    if ((int)plStack_c0[1] - *(int *)((longlong)plStack_c0 + 0x34) != (int)uStack_98) {
      auStackX_20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FScene_*,TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStackX_20);
    }
    if (((TStack_b8.CurrentBitIndex == uVar8) && (TStack_b8.Array == pTVar1)) && (plVar6 == param_1)
       ) break;
    puVar12 = (undefined8 *)(*plVar6 + (longlong)TStack_b8.CurrentBitIndex * 0x20);
    ppFStack_88 = (FPrimitiveSceneInfo **)puVar12[1];
    iVar3 = *(int *)(puVar12 + 2);
    if ((iVar3 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    aTStack_78[0]._12_4_ = uStack_7c;
    aTStack_78[0].ArrayNum = iVar3;
    aTStack_78[0].DataPtr = ppFStack_88;
    iStack_80 = iVar3;
    FPrimitiveSceneInfo::UpdateStaticMeshes((FScene *)*puVar12,aTStack_78,AllCommands,false);
    TStack_b8.UnvisitedBitMask = TStack_b8.UnvisitedBitMask & ~TStack_b8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b8);
  }
  return;
}

// Call @ 145421980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdatePrimitiveInternal<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
  ::
  Enqueue<TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>::TPayloadBase<7,0>_>
            ((void *)(*(longlong *)param_1 + 0x4da0),
             *(FPrimitiveSceneInfo **)((longlong)param_1 + 8),
             (TPayloadBase<7,0> *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1454219a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<float,4,0>_>'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
  ::Enqueue<TSingleValuePrimitiveUpdatePayload<float,4,0>_>
            ((void *)(*(longlong *)param_1 + 0x4da0),
             *(FPrimitiveSceneInfo **)((longlong)param_1 + 8),
             (TSingleValuePrimitiveUpdatePayload<float,4,0> *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 1454219c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
  ::Enqueue<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24>_>
            ((void *)(*(longlong *)param_1 + 0x4da0),
             *(FPrimitiveSceneInfo **)((longlong)param_1 + 8),
             (TSingleValuePrimitiveUpdatePayload<UE::Math::TVector2<float>,5,24> *)
             ((longlong)param_1 + 0x10));
  return;
}

// Call @ 1454219e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
  ::Enqueue<TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8>_>
            ((void *)(*(longlong *)param_1 + 0x4da0),
             *(FPrimitiveSceneInfo **)((longlong)param_1 + 8),
             (TSingleValuePrimitiveUpdatePayload<UE::Math::TVector<float>,6,8> *)
             ((longlong)param_1 + 0x10));
  return;
}

// Call @ 145421a00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
  ::Enqueue<TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16>_>
            ((void *)(*(longlong *)param_1 + 0x4da0),
             *(FPrimitiveSceneInfo **)((longlong)param_1 + 8),
             (TSingleValuePrimitiveUpdatePayload<FCustomPrimitiveData,3,16> *)
             ((longlong)param_1 + 0x10));
  return;
}

// Call @ 145421a20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdatePrimitiveInternal<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
  ::Enqueue<TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0>_>
            ((void *)(*(longlong *)param_1 + 0x4da0),
             *(FPrimitiveSceneInfo **)((longlong)param_1 + 8),
             (TSingleValuePrimitiveUpdatePayload<FPrimitiveComponentId,2,0> *)
             ((longlong)param_1 + 0x10));
  return;
}

// Call @ 145421a40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdatePrimitiveInternal<FUpdateInstanceCommand>'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
  ::Enqueue<FUpdateInstanceCommand>
            ((void *)(*(longlong *)param_1 + 0x4da0),
             *(FPrimitiveSceneInfo **)((longlong)param_1 + 8),
             (FUpdateInstanceCommand *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 145421a60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdatePrimitiveInternal<FUpdateInstanceFromComputeCommand>'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TSceneUpdateCommandQueue<FPrimitiveSceneInfo,enum_EPrimitiveUpdateDirtyFlags,enum_EPrimitiveUpdateId>
  ::Enqueue<FUpdateInstanceFromComputeCommand>
            ((void *)(*(longlong *)param_1 + 0x4da0),
             *(FPrimitiveSceneInfo **)((longlong)param_1 + 8),
             (FUpdateInstanceFromComputeCommand *)((longlong)param_1 + 0x10));
  return;
}

// Call @ 145421a80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AddDecal'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  FScene::AddOrRemoveDecal_RenderThread
            (*(FScene **)param_1,*(FDeferredDecalProxy **)((longlong)param_1 + 8),true);
  return;
}

// Call @ 145421aa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AddInvisibleLight'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  FName *pFVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar9;
  FNameEntryId FVar10;
  FNameEntryId FVar11;
  undefined1 auStack_b8 [32];
  LARGE_INTEGER LStack_98;
  FName FStack_90;
  FStatMessage FStack_80;
  FLightSceneInfoCompact FStack_68;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FVar10.Value = 0;
  bVar4 = false;
  bVar6 = false;
  FStack_90.ComparisonIndex.Value = 0;
  FStack_90.Number = 0;
  pFVar2 = *(FName **)(*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x28) + 0x1f8);
  FVar9 = *pFVar2;
  FVar11 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar11.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStack_98.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&LStack_98.s,(char *)pFVar2[2]);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        LStack_98.s.LowPart = FVar11.Value;
        LStack_98.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStack_98.s,(wchar_t *)pFVar2[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                   ,0x934);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStack_98.s.LowPart = FVar11.Value;
      LStack_98.s.HighPart = uVar7;
      FStack_90 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar5 = true;
      FVar10.Value = FStack_90.ComparisonIndex.Value;
      goto LAB_14540ca0f;
    }
  }
  bVar5 = false;
  FVar9 = FStack_90;
LAB_14540ca0f:
  lVar3 = *(longlong *)param_1;
  FLightSceneInfoCompact::Init(&FStack_68,*(FLightSceneInfo **)((longlong)param_1 + 8));
  iVar8 = TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
          ::Add((TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
                 *)(lVar3 + 0x2ad0),&FStack_68);
  *(int *)(*(longlong *)((longlong)param_1 + 8) + 0x34) = iVar8;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      FStack_80.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      FStack_80.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&LStack_98);
      FStack_80.StatData.Pad[4] = '\0';
      FStack_80.StatData.Pad[5] = '\0';
      FStack_80.StatData.Pad[6] = '\0';
      FStack_80.StatData.Pad[7] = '\0';
      FStack_80.StatData.Pad[0] = LStack_98.s.LowPart._0_1_;
      FStack_80.StatData.Pad[1] = LStack_98.s.LowPart._1_1_;
      FStack_80.StatData.Pad[2] = LStack_98.s.LowPart._2_1_;
      FStack_80.StatData.Pad[3] = LStack_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&FStack_80);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// Call @ 145421ab0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AddLight'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar9;
  FNameEntryId FVar10;
  FColor_u_0 aFStackX_8 [2];
  FName FStackX_18;
  LARGE_INTEGER LStackX_20;
  FStatMessage FStack_28;
  
  if (!__CsvProfilerStat2322) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Scene_AddLight");
    __CsvProfilerStat2322 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Scene_AddLight","CSV_Scene_AddLight");
  bVar4 = false;
  bVar6 = false;
  pFVar2 = *(FName **)(*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x28) + 0x1f8);
  FVar9 = *pFVar2;
  FVar10 = FVar9.ComparisonIndex.Value;
  uVar8 = FVar9.Number;
  if ((FVar10.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&aFStackX_8[0]._s_0,(char *)pFVar2[2]);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        FStackX_18.ComparisonIndex.Value = FVar10.Value;
        FStackX_18.Number = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStackX_18,(wchar_t *)pFVar2[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                   ,0x913);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_20.s.LowPart = FVar10.Value;
      LStackX_20.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar5 = true;
      goto LAB_14540cc3b;
    }
  }
  bVar5 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_14540cc3b:
  if (*(int *)(*(longlong *)((longlong)param_1 + 8) + 0x34) != -1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("LightSceneInfo->Id == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                       ,0x916,L"");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::EnqueueAdd
            (*(void **)(*(longlong *)param_1 + 0x5070),*(FLightSceneInfo **)((longlong)param_1 + 8))
  ;
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      FStack_28.NameAndInfo.Index = FVar9.ComparisonIndex.Value;
      FStack_28.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStackX_20);
      FStack_28.StatData.Pad[4] = '\0';
      FStack_28.StatData.Pad[5] = '\0';
      FStack_28.StatData.Pad[6] = '\0';
      FStack_28.StatData.Pad[7] = '\0';
      FStack_28.StatData.Pad[0] = LStackX_20.s.LowPart._0_1_;
      FStack_28.StatData.Pad[1] = LStackX_20.s.LowPart._1_1_;
      FStack_28.StatData.Pad[2] = LStackX_20.s.LowPart._2_1_;
      FStack_28.StatData.Pad[3] = LStackX_20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&FStack_28);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  FCsvProfiler::EndExclusiveStat("Scene_AddLight");
  return;
}

// Call @ 145421ac0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AddReflectionCapture'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  ForAnyElementType *pFVar8;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  double dStack_10;
  
  pFVar1 = (FScriptContainerElement *)((longlong)param_1 + 8);
  if (*(char *)(*(longlong *)pFVar1 + 0xe0) != '\0') {
    LOCK();
    *(int *)(*(longlong *)param_1 + 0x49f8) = *(int *)(*(longlong *)param_1 + 0x49f8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(*(longlong *)param_1 + 0x2d00) = 1;
  lVar2 = *(longlong *)param_1;
  pFVar8 = (ForAnyElementType *)(lVar2 + 0x2d08);
  if ((pFVar8->Data <= pFVar1) && (pFVar1 < pFVar8->Data + (longlong)*(int *)(lVar2 + 0x2d14) * 8))
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = *(int *)(lVar2 + 0x2d10);
  if (iVar7 == *(int *)(lVar2 + 0x2d14)) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar8,(int *)(lVar2 + 0x2d14));
  }
  pFVar3 = pFVar8->Data;
  *(int *)(lVar2 + 0x2d10) = iVar7 + 1;
  *(longlong *)(pFVar3 + (longlong)iVar7 * 8) = *(longlong *)pFVar1;
  *(int *)(*(longlong *)pFVar1 + 8) = iVar7;
  lVar2 = *(longlong *)param_1;
  uStack_28 = *(undefined8 *)((longlong)param_1 + 0x10);
  uStack_20 = *(undefined8 *)((longlong)param_1 + 0x18);
  pFVar8 = (ForAnyElementType *)(lVar2 + 0x2d18);
  uStack_18 = *(undefined8 *)((longlong)param_1 + 0x20);
  dStack_10 = (double)*(float *)(*(longlong *)pFVar1 + 0x40);
  if (pFVar8->Data <= (FScriptContainerElement *)&uStack_28) {
    if ((FScriptContainerElement *)&uStack_28 <
        pFVar8->Data + (longlong)*(int *)(lVar2 + 0x2d24) * 0x20) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  iVar7 = *(int *)(lVar2 + 0x2d20);
  if (iVar7 == *(int *)(lVar2 + 0x2d24)) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,pFVar8,(int *)(lVar2 + 0x2d24));
  }
  *(int *)(lVar2 + 0x2d20) = iVar7 + 1;
  pFVar4 = pFVar8->Data;
  pFVar3 = pFVar4 + (longlong)iVar7 * 0x20;
  *(undefined8 *)pFVar3 = uStack_28;
  *(undefined8 *)(pFVar3 + 8) = uStack_20;
  pFVar4 = pFVar4 + (longlong)iVar7 * 0x20 + 0x10;
  *(undefined8 *)pFVar4 = uStack_18;
  *(double *)(pFVar4 + 8) = dStack_10;
  if (*(int *)(*(longlong *)param_1 + 8) < 2) {
    FReflectionCaptureProxy::UpdateMobileUniformBuffer
              (*(FReflectionCaptureProxy **)pFVar1,(FRHICommandListBase *)param_2);
  }
  return;
}

// Call @ 145421ad0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AddRuntimeVirtualTexture'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = TSparseArray<FRuntimeVirtualTextureSceneProxy_*,FDefaultSparseArrayAllocator>::Add
                    ((TSparseArray<FRuntimeVirtualTextureSceneProxy_*,FDefaultSparseArrayAllocator>
                      *)(*(longlong *)param_1 + 0x4b28),
                     (FRuntimeVirtualTextureSceneProxy **)((longlong)param_1 + 8));
  **(int **)((longlong)param_1 + 8) = iVar2;
  lVar1 = *(longlong *)param_1;
  UpdateRuntimeVirtualTextureHidePrimitiveMasks
            ((TSparseArray<FRuntimeVirtualTextureSceneProxy_*,FDefaultSparseArrayAllocator> *)
             (lVar1 + 0x4b28),(bool *)(lVar1 + 0x49f2),(bool *)(lVar1 + 0x49f3));
  return;
}

// Call @ 145421b30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AddSpeedTreeWind'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong *plVar1;
  UStaticMesh *pUVar2;
  longlong lVar3;
  FRHIResource *this;
  FRHIResource *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FSpeedTreeWind *pFVar8;
  FSpeedTreeWindComputation **ppFVar9;
  FShaderParametersMetadata *pFVar10;
  TRefCountPtr<FRHIUniformBuffer> TVar11;
  uint uVar12;
  longlong lVar13;
  TPairInitializer<UStaticMesh_const_*_const_&,FSpeedTreeWindComputation_*_const_&> TStackX_18;
  FRHIResource *pFStack_b48;
  longlong lStack_b40;
  longlong *plStack_b38;
  longlong *plStack_b30;
  FSpeedTreeWindComputation ***pppFStack_b28;
  undefined1 auStack_b20 [8];
  FSpeedTreeUniformParameters FStack_b18;
  undefined1 auStack_8b8 [2192];
  
  lStack_b40 = (longlong)param_1 + 0x10;
  plVar1 = (longlong *)((longlong)param_1 + 8);
  plStack_b38 = plVar1;
  TSet<TTuple<FVertexFactory_*,UStaticMesh_const_*>,TDefaultMapHashableKeyFuncs<FVertexFactory_*,UStaticMesh_const_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FVertexFactory_*_const_&,UStaticMesh_const_*_const_&>_>
            ((TSet<TTuple<FVertexFactory_*,UStaticMesh_const_*>,TDefaultMapHashableKeyFuncs<FVertexFactory_*,UStaticMesh_const_*,0>,FDefaultSetAllocator>
              *)(*(longlong *)param_1 + 0x47d8),
             (TPairInitializer<FVertexFactory_*_const_&,UStaticMesh_const_*_const_&> *)
             &stack0x00000008,(bool *)&lStack_b40);
  pUVar2 = (UStaticMesh *)*plVar1;
  lVar3 = *(longlong *)param_1;
  uVar12 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
           -0x7a143595;
  uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
  if (*(int *)(lVar3 + 0x4790) != *(int *)(lVar3 + 0x47bc)) {
    lVar13 = *(longlong *)(lVar3 + 0x47c8);
    if (*(longlong *)(lVar3 + 0x47c8) == 0) {
      lVar13 = lVar3 + 0x47c0;
    }
    iVar7 = *(int *)(lVar13 + (ulonglong)(*(int *)(lVar3 + 0x47d0) - 1U & (uVar12 >> 0x10 ^ uVar12))
                              * 4);
    if (iVar7 != -1) {
      lVar13 = *(longlong *)
                &(((TMapBase<UStaticMesh_const_*,FSpeedTreeWindComputation_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>_>
                    *)(lVar3 + 0x4788))->Pairs).Elements;
      do {
        if (*(UStaticMesh **)(lVar13 + (longlong)iVar7 * 0x18) == pUVar2) {
          ppFVar9 = TMapBase<UStaticMesh_const_*,FSpeedTreeWindComputation_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>_>
                    ::Find((TMapBase<UStaticMesh_const_*,FSpeedTreeWindComputation_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>_>
                            *)(lVar3 + 0x4788),pUVar2);
          (*ppFVar9)->ReferenceCount = (*ppFVar9)->ReferenceCount + 1;
          return;
        }
        iVar7 = *(int *)(lVar13 + 0x10 + (longlong)iVar7 * 0x18);
      } while (iVar7 != -1);
    }
  }
  pFVar8 = ::operator_new(0x8a0);
  if (pFVar8 == (FSpeedTreeWind *)0x0) {
    pFVar8 = (FSpeedTreeWind *)0x0;
  }
  else {
    FSpeedTreeWind::FSpeedTreeWind(pFVar8);
    pFVar8[1].m_sParams.m_fStrengthResponse = 0.0;
    pFVar8[1].m_sParams.m_fDirectionResponse = 0.0;
    pFVar8[1].m_sParams.m_fAnchorOffset = 1.4013e-45;
  }
  TStackX_18.Value = (FSpeedTreeWindComputation **)pFVar8;
  memcpy(auStack_8b8,*(void **)(*plVar1 + 0x210),0x890);
  memcpy(pFVar8,auStack_8b8,0x890);
  FSpeedTreeUniformParameters::FSpeedTreeUniformParameters
            ((FSpeedTreeUniformParameters *)(auStack_b20 + 8));
  memset(auStack_b20 + 8,0,0x260);
  pFVar10 = FSpeedTreeUniformParameters::GetStructMetadata();
  if (((pFVar10->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  TVar11 = RHICreateUniformBuffer
                     (&pFStack_b48,(FRHIUniformBufferLayout *)(auStack_b20 + 8),
                      (EUniformBufferUsage)(pFVar10->Layout).Reference,2);
  this = (FRHIResource *)(TVar11.Reference)->_padding_;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar10 = FSpeedTreeUniformParameters::GetStructMetadata();
    if (((pFVar10->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((FName)(pFVar10->Layout).Reference != this[2].OwnerName) {
      pFVar10 = FSpeedTreeUniformParameters::GetStructMetadata();
      if (((pFVar10->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x96,
                         L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  if (pFStack_b48 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFStack_b48);
  }
  pFVar8 = (FSpeedTreeWind *)((longlong)TStackX_18.Value + 0x890);
  if (pFVar8 != (FSpeedTreeWind *)auStack_b20) {
    pFVar4 = *(FRHIResource **)&pFVar8->m_sParams;
    *(FRHIResource **)&pFVar8->m_sParams = this;
    this = pFVar4;
  }
  if (this != (FRHIResource *)0x0) {
    FRHIResource::Release(this);
  }
  pppFStack_b28 = &TStackX_18.Value;
  plStack_b30 = plVar1;
  TSet<TTuple<UStaticMesh_const_*,FSpeedTreeWindComputation_*>,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UStaticMesh_const_*_const_&,FSpeedTreeWindComputation_*_const_&>_>
            ((TSet<TTuple<UStaticMesh_const_*,FSpeedTreeWindComputation_*>,TDefaultMapHashableKeyFuncs<UStaticMesh_const_*,FSpeedTreeWindComputation_*,0>,FDefaultSetAllocator>
              *)(*(longlong *)param_1 + 0x4788),&TStackX_18,(bool *)&plStack_b30);
  return;
}

// Call @ 145421b40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::BatchRemovePrimitives'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FUnregister_u_16 *pFVar1;
  int iVar2;
  FUnregister_u_16 FVar3;
  FUnregister_u_16 *pFVar4;
  undefined1 auStackX_8 [8];
  FUnregister FStack_38;
  
  pFVar4 = *(FUnregister_u_16 **)((longlong)param_1 + 8);
  iVar2 = *(int *)((longlong)param_1 + 0x10);
  pFVar1 = pFVar4 + iVar2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x10) != iVar2) {
      `TCheckedPointerIterator<FPrimitiveSceneProxy_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (pFVar4 == pFVar1) break;
    FVar3 = (FUnregister_u_16)pFVar4->SceneProxy_ForDebug;
    if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) {
      FStack_38.ObjectRegistrationIndex.Object =
           ((FVar3.SceneProxy_ForDebug)->SimpleStreamableAssetManagerIndex).Object;
      FStack_38.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController =
           ((FVar3.SceneProxy_ForDebug)->SimpleStreamableAssetManagerIndex).SharedReferenceCount.
           ReferenceController;
      if (FStack_38.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (FStack_38.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController)->
        SharedReferenceCount =
             (atomic<int>)
             ((int)(FStack_38.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      FStack_38.field1_0x10 = FVar3;
      FSimpleStreamableAssetManager::Unregister(&FStack_38);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_38.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController);
    }
    FScene::RemovePrimitiveSceneInfo_RenderThread
              (*(FScene **)param_1,(FVar3.SceneProxy_ForDebug)->PrimitiveSceneInfo);
    (**(code **)((FVar3.SceneProxy_ForDebug)->_padding_ + 0x120))(FVar3.ObjectKey);
    pFVar4 = pFVar4 + 1;
  }
  return;
}

// Call @ 145421b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::GetRelevantLights'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForAnyElementType *pFVar3;
  code *pcVar4;
  int iVar5;
  bool bVar6;
  int iVar7;
  ulonglong uVar8;
  ForAnyElementType FVar9;
  undefined1 auStackX_8 [8];
  undefined8 uStack_38;
  TArray<FLightSceneProxy_const_*,TSizedDefaultAllocator<32>_> TStack_30;
  
  TStack_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  TStack_30.ArrayNum = 0;
  TStack_30.ArrayMax = 0;
  FScene::GetRelevantLights_RenderThread
            (*(FScene **)param_1,*(FPrimitiveSceneProxy **)((longlong)param_1 + 8),&TStack_30);
  iVar5 = TStack_30.ArrayNum;
  uVar8 = (ulonglong)TStack_30.ArrayNum;
  pFVar2 = TStack_30.AllocatorInstance.Data + uVar8 * 8;
  FVar9.Data = TStack_30.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar8 != iVar5) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<FLightSceneProxy_const_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (FVar9.Data == pFVar2) break;
    pFVar3 = *(ForAnyElementType **)((longlong)param_1 + 0x10);
    uStack_38 = *(undefined8 *)(*(longlong *)FVar9.Data + 8);
    if ((pFVar3->Data <= (FScriptContainerElement *)&uStack_38) &&
       ((FScriptContainerElement *)&uStack_38 <
        pFVar3->Data + (longlong)*(int *)((longlong)&pFVar3[1].Data + 4) * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = *(int *)&pFVar3[1].Data;
    piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
    if (iVar7 == *piVar1) {
      iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,pFVar3,piVar1);
    }
    *(int *)&pFVar3[1].Data = iVar7 + 1;
    FVar9.Data = FVar9.Data + 8;
    *(undefined8 *)(pFVar3->Data + (longlong)iVar7 * 8) = uStack_38;
    uVar8 = TStack_30._8_8_ & 0xffffffff;
  }
  if (TStack_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(TStack_30.AllocatorInstance.Data);
  }
  return;
}

// Call @ 145421b60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::InvalidateRuntimeVirtualTexture'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRuntimeVirtualTextureSceneProxy::Dirty
            (*(FRuntimeVirtualTextureSceneProxy **)param_1,
             (TBoxSphereBounds<double,double> *)((longlong)param_1 + 8),
             *(EVTInvalidatePriority *)((longlong)param_1 + 0x40));
  return;
}

// Call @ 145421b80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::RemoveDecal'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  FScene::AddOrRemoveDecal_RenderThread
            (*(FScene **)param_1,*(FDeferredDecalProxy **)((longlong)param_1 + 8),false);
  return;
}

// Call @ 145421ba0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::RemoveLight'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  FName *pFVar2;
  FLightSceneInfo *pFVar3;
  void *this;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  TKeyValue<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType> *pTVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar12;
  FName FVar13;
  FNameEntryId FVar14;
  FColor_u_0 aFStackX_8 [2];
  uint uStackX_18;
  uint uStackX_1c;
  FName FStackX_20;
  LARGE_INTEGER LStack_50;
  FName FStack_48;
  FStatMessage FStack_38;
  
  bVar6 = false;
  bVar8 = false;
  FStack_48.ComparisonIndex.Value = 0;
  FStack_48.Number = 0;
  pFVar2 = *(FName **)(*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x28) + 0x1f8);
  FVar13 = *pFVar2;
  FVar14 = FVar13.ComparisonIndex.Value;
  uVar12 = FVar13.Number;
  if ((FVar14.Value != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      aFStackX_8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&aFStackX_8[0]._s_0,(char *)pFVar2[2]);
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        FStackX_20.ComparisonIndex.Value = FVar14.Value;
        FStackX_20.Number = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStackX_20,(wchar_t *)pFVar2[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                   ,0xe41);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      uStackX_18 = FVar14.Value;
      uStackX_1c = uVar12;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar7 = true;
      goto LAB_14540d5d7;
    }
  }
  bVar7 = false;
  FVar13 = FStack_48;
LAB_14540d5d7:
  pFVar3 = *(FLightSceneInfo **)((longlong)param_1 + 8);
  this = *(void **)(*(longlong *)param_1 + 0x5070);
  if (pFVar3->bVisible == 0) {
    uVar12 = ((uint)((ulonglong)pFVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar3 >> 4)) *
             -0x7a143595;
    uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
    Experimental::RobinHoodHashTable_Private::
    TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
    ::FindIdByHash((TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
                    *)((longlong)this + 0x210),(FHashType)(uint)&uStackX_18,
                   (FLightSceneInfo **)(ulonglong)((uVar12 >> 0x10 ^ uVar12) & 0x7fffffff));
    if (uStackX_18 != 0xffffffff) {
      pTVar11 = Experimental::RobinHoodHashTable_Private::
                TRobinHoodHashTable<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<FLightSceneInfo_*,0>,TSizedDefaultAllocator<32>_>
                ::FData::Get((FData *)((longlong)this + 0x210),uStackX_18);
      if (pTVar11 !=
          (TKeyValue<FLightSceneInfo_*,Experimental::RobinHoodHashTable_Private::FUnitType> *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!SceneLightInfoUpdates->HasCommand(LightSceneInfo)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                           ,0xe4c,L"");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
    ::RemoveAt((TSparseArray<FLightSceneInfoCompact,TAlignedSparseArrayAllocator<16,TAlignedHeapAllocator<16>,FDefaultBitArrayAllocator>_>
                *)(*(longlong *)param_1 + 0x2ad0),
               *(int *)(*(longlong *)((longlong)param_1 + 8) + 0x34),1);
    puVar4 = *(undefined8 **)(*(longlong *)((longlong)param_1 + 8) + 0x28);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    if (*(FLightSceneInfo **)((longlong)param_1 + 8) != (FLightSceneInfo *)0x0) {
      FLightSceneInfo::_scalar_deleting_destructor_(*(FLightSceneInfo **)((longlong)param_1 + 8),1);
    }
  }
  else {
    if (*(int *)((longlong)this + 0x288) != 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("RaceGuard == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneUpdateCommandQueue.h"
                         ,0x9e,L"");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar10 = TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
             GetOrAddCommandSlot(this,pFVar3);
    uVar12 = 0;
    if ((int)uVar10 < *(int *)((longlong)this + 0x208)) {
      uVar12 = ~uVar10 >> 0x1f;
    }
    if (uVar12 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(undefined1 *)(*(longlong *)((longlong)this + 0x200) + 0x18 + (longlong)(int)uVar10 * 0x50) = 1
    ;
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      FStack_38.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      FStack_38.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&LStack_50);
      FStack_38.StatData.Pad[4] = '\0';
      FStack_38.StatData.Pad[5] = '\0';
      FStack_38.StatData.Pad[6] = '\0';
      FStack_38.StatData.Pad[7] = '\0';
      FStack_38.StatData.Pad[0] = LStack_50.s.LowPart._0_1_;
      FStack_38.StatData.Pad[1] = LStack_50.s.LowPart._1_1_;
      FStack_38.StatData.Pad[2] = LStack_50.s.LowPart._2_1_;
      FStack_38.StatData.Pad[3] = LStack_50.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&FStack_38);
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
  return;
}

// Call @ 145421bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::RemoveReflectionCapture'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  
  if (*(char *)(*(longlong *)((longlong)param_1 + 8) + 0xe0) != '\0') {
    LOCK();
    *(int *)(*(longlong *)param_1 + 0x49f8) = *(int *)(*(longlong *)param_1 + 0x49f8) + -1;
    UNLOCK();
  }
  uVar7 = 0;
  *(undefined1 *)(*(longlong *)param_1 + 0x2d00) = 1;
  lVar10 = *(longlong *)param_1;
  if (0 < *(int *)(lVar10 + 0x2890)) {
    lVar9 = 0;
    do {
      uVar5 = 0;
      if ((int)uVar7 < *(int *)(lVar10 + 0x2890)) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FPrimitiveSceneInfo::RemoveCachedReflectionCaptures
                (*(FPrimitiveSceneInfo **)(lVar9 + *(longlong *)(lVar10 + 0x2888)));
      lVar10 = *(longlong *)param_1;
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar7 < *(int *)(lVar10 + 0x2890));
  }
  uVar7 = *(uint *)(*(longlong *)((longlong)param_1 + 8) + 8);
  lVar9 = (longlong)(int)uVar7;
  uVar8 = ~uVar7;
  uVar5 = 0;
  if ((int)uVar7 < *(int *)(lVar10 + 0x2d10)) {
    uVar5 = uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = ((ForAnyElementType *)(lVar10 + 0x2d08))->Data;
  iVar6 = *(int *)(lVar10 + 0x2d10) + uVar8;
  if (1 < iVar6) {
    iVar6 = 1;
  }
  if (iVar6 != 0) {
    memmove(pFVar1 + lVar9 * 8,pFVar1 + (longlong)(*(int *)(lVar10 + 0x2d10) - iVar6) * 8,
            (longlong)iVar6 << 3);
  }
  *(int *)(lVar10 + 0x2d10) = *(int *)(lVar10 + 0x2d10) + -1;
  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,(ForAnyElementType *)(lVar10 + 0x2d08),*(int *)(lVar10 + 0x2d10),
             (int *)(lVar10 + 0x2d14));
  lVar10 = *(longlong *)param_1;
  uVar5 = 0;
  if ((int)uVar7 < *(int *)(lVar10 + 0x2d20)) {
    uVar5 = uVar8 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar1 = ((ForAnyElementType *)(lVar10 + 0x2d18))->Data;
  iVar6 = *(int *)(lVar10 + 0x2d20) + uVar8;
  if (1 < iVar6) {
    iVar6 = 1;
  }
  if (iVar6 != 0) {
    memmove(pFVar1 + lVar9 * 0x20,pFVar1 + (longlong)(*(int *)(lVar10 + 0x2d20) - iVar6) * 0x20,
            (longlong)iVar6 << 5);
  }
  *(int *)(lVar10 + 0x2d20) = *(int *)(lVar10 + 0x2d20) + -1;
  ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,(ForAnyElementType *)(lVar10 + 0x2d18),*(int *)(lVar10 + 0x2d20),
             (int *)(lVar10 + 0x2d24));
  if ((-1 < (int)uVar7) && (lVar10 = *(longlong *)param_1, (int)uVar7 < *(int *)(lVar10 + 0x2d10)))
  {
    uVar5 = 0;
    if ((int)uVar7 < *(int *)(lVar10 + 0x2d10)) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(uint *)(*(longlong *)(*(longlong *)(lVar10 + 0x2d08) + lVar9 * 8) + 8) = uVar7;
  }
  pvVar2 = *(void **)((longlong)param_1 + 8);
  if (pvVar2 != (void *)0x0) {
    if (*(FRHIResource **)((longlong)pvVar2 + 0x10) != (FRHIResource *)0x0) {
      FRHIResource::Release(*(FRHIResource **)((longlong)pvVar2 + 0x10));
    }
    ::operator_delete(pvVar2,0xf0);
  }
  return;
}

// Call @ 145421bc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::RemoveRuntimeVirtualTexture'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRuntimeVirtualTextureSceneProxy *this;
  longlong lVar1;
  
  TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)(*(longlong *)param_1 + 0x4b28),
             **(int **)((longlong)param_1 + 8),1);
  this = *(FRuntimeVirtualTextureSceneProxy **)((longlong)param_1 + 8);
  if (this != (FRuntimeVirtualTextureSceneProxy *)0x0) {
    FRuntimeVirtualTextureSceneProxy::~FRuntimeVirtualTextureSceneProxy(this);
    ::operator_delete(this,400);
  }
  lVar1 = *(longlong *)param_1;
  UpdateRuntimeVirtualTextureHidePrimitiveMasks
            ((TSparseArray<FRuntimeVirtualTextureSceneProxy_*,FDefaultSparseArrayAllocator> *)
             (lVar1 + 0x4b28),(bool *)(lVar1 + 0x49f2),(bool *)(lVar1 + 0x49f3));
  return;
}

// Call @ 145421c40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::RemoveWindSource'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TArray<FWindSourceSceneProxy_*,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<FWindSourceSceneProxy_*,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0x4768),(FWindSourceSceneProxy **)((longlong)param_1 + 8));
  ::operator_delete(*(FWindSourceSceneProxy **)((longlong)param_1 + 8),0x48);
  return;
}

// Call @ 145421c80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::RequestPreloadRuntimeVirtualTexture'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRuntimeVirtualTextureSceneProxy::RequestPreload
            (*(FRuntimeVirtualTextureSceneProxy **)param_1,
             (TBoxSphereBounds<double,double> *)((longlong)param_1 + 8),
             *(int *)((longlong)param_1 + 0x40));
  return;
}

// Call @ 145421ca0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateDecalFadeInTime'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  if (0.0 < *(float *)((longlong)param_1 + 0x10)) {
    *(float *)(*(longlong *)param_1 + 0xb8) = __real_3f800000 / *(float *)((longlong)param_1 + 0x10)
    ;
    *(uint *)(*(longlong *)param_1 + 0xc0) =
         (uint)((*(float *)((longlong)param_1 + 0xc) + *(float *)((longlong)param_1 + 8)) *
               *(float *)(*(longlong *)param_1 + 0xb8)) ^ __xmm_80000000800000008000000080000000;
    return;
  }
  *(undefined4 *)(*(longlong *)param_1 + 0xb8) = 0x3f800000;
  *(undefined4 *)(*(longlong *)param_1 + 0xc0) = 0;
  return;
}

// Call @ 145421d10

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateDecalFadeOutTime'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  if (0.0 < *(float *)((longlong)param_1 + 0x10)) {
    *(float *)(*(longlong *)param_1 + 0xb4) = __real_3f800000 / *(float *)((longlong)param_1 + 0x10)
    ;
    *(float *)(*(longlong *)param_1 + 0xbc) =
         (*(float *)((longlong)param_1 + 0xc) + *(float *)((longlong)param_1 + 8) +
         *(float *)((longlong)param_1 + 0x10)) * *(float *)(*(longlong *)param_1 + 0xb4);
    return;
  }
  *(undefined4 *)(*(longlong *)param_1 + 0xb4) = 0xbf800000;
  *(undefined4 *)(*(longlong *)param_1 + 0xbc) = 0x3f800000;
  return;
}

// Call @ 145421d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateDecalTransform'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  undefined4 in_EAX;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  lVar14 = *(longlong *)param_1;
  dVar15 = *(double *)((longlong)param_1 + 0x40) - *(double *)(lVar14 + 0x40);
  dVar17 = *(double *)((longlong)param_1 + 0x48) - *(double *)(lVar14 + 0x48);
  dVar19 = *(double *)((longlong)param_1 + 0x30) - *(double *)(lVar14 + 0x30);
  dVar21 = *(double *)((longlong)param_1 + 0x38) - *(double *)(lVar14 + 0x38);
  lVar13 = -(ulonglong)
            (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar17,0) & _UNK_15061cc88));
  auVar1._8_4_ = (int)lVar13;
  auVar1._0_8_ = -(ulonglong)
                  (__real_3e45798ee0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar1._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  uVar10 = movmskpd((int)param_1,auVar1);
  lVar13 = -(ulonglong)
            (__real_3e45798ee0000000 <
            (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                             SUB84(dVar21,0) & _UNK_15061cc88));
  auVar6._8_4_ = (int)lVar13;
  auVar6._0_8_ = -(ulonglong)
                  (__real_3e45798ee0000000 <
                  (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                   __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                   SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff));
  auVar6._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
  iVar9 = movmskpd(in_EAX,auVar6);
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar16 = *(double *)((longlong)param_1 + 0x20) - *(double *)(lVar14 + 0x20);
    dVar18 = *(double *)((longlong)param_1 + 0x28) - *(double *)(lVar14 + 0x28);
    dVar19 = *(double *)((longlong)param_1 + 0x20) + *(double *)(lVar14 + 0x20);
    dVar21 = *(double *)((longlong)param_1 + 0x28) + *(double *)(lVar14 + 0x28);
    dVar20 = *(double *)((longlong)param_1 + 0x10) - *(double *)(lVar14 + 0x10);
    dVar22 = *(double *)((longlong)param_1 + 0x18) - *(double *)(lVar14 + 0x18);
    dVar15 = *(double *)((longlong)param_1 + 0x10) + *(double *)(lVar14 + 0x10);
    dVar17 = *(double *)((longlong)param_1 + 0x18) + *(double *)(lVar14 + 0x18);
    lVar13 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar18 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar18,0) & _UNK_15061cc88));
    auVar2._8_4_ = (int)lVar13;
    auVar2._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar16 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar2._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    iVar11 = movmskpd(0,auVar2);
    lVar13 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar22 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar22,0) & _UNK_15061cc88));
    auVar3._8_4_ = (int)lVar13;
    auVar3._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar20 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar20,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar3._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
    uVar10 = movmskpd(iVar9,auVar3);
    uVar12 = iVar11 << 2 | uVar10;
    if (uVar12 != 0) {
      lVar13 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar21,0) & _UNK_15061cc88));
      auVar4._8_4_ = (int)lVar13;
      auVar4._0_8_ = -(ulonglong)
                      (__real_3e45798ee0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar19,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar4._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar12 = movmskpd(uVar12,auVar4);
      lVar13 = -(ulonglong)
                (__real_3e45798ee0000000 <
                (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                                 SUB84(dVar17,0) & _UNK_15061cc88));
      auVar7._8_4_ = (int)lVar13;
      auVar7._0_8_ = -(ulonglong)
                      (__real_3e45798ee0000000 <
                      (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                       SUB84(dVar15,0) &
                                       (uint)__xmm_7fffffffffffffff7fffffffffffffff));
      auVar7._12_4_ = (int)((ulonglong)lVar13 >> 0x20);
      uVar10 = movmskpd(uVar10,auVar7);
      if ((uVar12 & 0x3fffffff) != 0 || uVar10 != 0) goto LAB_14540dc44;
    }
    dVar15 = *(double *)((longlong)param_1 + 0x60) - *(double *)(lVar14 + 0x60);
    dVar17 = *(double *)((longlong)param_1 + 0x68) - *(double *)(lVar14 + 0x68);
    dVar19 = *(double *)((longlong)param_1 + 0x50) - *(double *)(lVar14 + 0x50);
    dVar21 = *(double *)((longlong)param_1 + 0x58) - *(double *)(lVar14 + 0x58);
    lVar14 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar17 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar17,0) & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar14;
    auVar5._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar15 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar5._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    uVar12 = movmskpd(0,auVar5);
    lVar14 = -(ulonglong)
              (__real_3e45798ee0000000 <
              (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & _UNK_15061cc8c,
                               SUB84(dVar21,0) & _UNK_15061cc88));
    auVar8._8_4_ = (int)lVar14;
    auVar8._0_8_ = -(ulonglong)
                    (__real_3e45798ee0000000 <
                    (double)CONCAT44((uint)((ulonglong)dVar19 >> 0x20) &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     SUB84(dVar19,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)
                    );
    auVar8._12_4_ = (int)((ulonglong)lVar14 >> 0x20);
    iVar9 = movmskpd(uVar10,auVar8);
    if ((uVar12 & 0x3fffffff) == 0 && iVar9 == 0) goto LAB_14540dc59;
  }
LAB_14540dc44:
  (**(code **)(**(longlong **)((longlong)param_1 + 0xa8) + 0x240))
            (*(longlong **)((longlong)param_1 + 0xa8),1);
LAB_14540dc59:
  FDeferredDecalProxy::SetTransformIncludingDecalSize
            (*(FDeferredDecalProxy **)param_1,(TTransform<double> *)((longlong)param_1 + 0x10),
             (TBoxSphereBounds<double,double> *)((longlong)param_1 + 0x70));
  return;
}

// Call @ 145421d90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateLightProxy'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 local_res8;
  
  local_res8 = *(undefined8 *)((longlong)param_1 + 8);
  CheckCallable(*(void **)((longlong)param_1 + 0x10));
  pcVar1 = *(code **)((longlong)param_1 + 0x10);
  plVar3 = (longlong *)((longlong)param_1 + 0x20);
  if (*(longlong **)((longlong)param_1 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)param_1 + 0x38);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,&local_res8);
  FScene::
  UpdateLightInternal_RenderThread<TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::TPayloadBase<0,0>_>
            (*(FScene **)param_1,*(FLightSceneProxy **)((longlong)param_1 + 8),
             (TPayloadBase<0,0> *)&local_res8);
  return;
}

// Call @ 145421e00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdatePrimitiveTransforms'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  FName *pFVar5;
  FUpdate_u_72 FVar6;
  undefined8 *puVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar13;
  FNameEntryId FVar14;
  int iVar15;
  TMatrix<double> *pTVar16;
  uint uVar17;
  longlong lVar18;
  FColor_u_0 aFStackX_18 [4];
  FName FStack_e8;
  uint uStack_e0;
  uint uStack_dc;
  longlong lStack_d8;
  FName FStack_d0;
  LARGE_INTEGER LStack_c0;
  FStatMessage FStack_b8;
  FUpdate FStack_a8;
  
  uVar17 = 0;
  iVar15 = *(int *)(*(longlong *)param_1 + 8);
  if (*(int *)(*(longlong *)param_1 + 0x18) < *(int *)(*(longlong *)param_1 + 8)) {
    iVar15 = *(int *)(*(longlong *)param_1 + 0x18);
  }
  lStack_d8 = (longlong)iVar15;
  if (0 < iVar15) {
    lVar18 = 0;
    do {
      lVar4 = *(longlong *)param_1;
      uVar12 = 0;
      if ((int)uVar17 < *(int *)(lVar4 + 0x18)) {
        uVar12 = ~uVar17 >> 0x1f;
      }
      if (uVar12 == 0) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar11) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      lVar4 = *(longlong *)(lVar4 + 0x10);
      bVar9 = false;
      bVar11 = false;
      FStack_d0.ComparisonIndex.Value = 0;
      FStack_d0.Number = 0;
      pFVar5 = *(FName **)(*(longlong *)(lVar4 + 8 + lVar18) + 0x70);
      FVar13 = *pFVar5;
      FVar14 = FVar13.ComparisonIndex.Value;
      uVar12 = FVar13.Number;
      if ((FVar14.Value == 0) && (uVar12 == 0)) {
LAB_14540ddfb:
        bVar10 = false;
        FVar13 = FStack_d0;
      }
      else {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          aFStackX_18[0].Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent((FColor *)&aFStackX_18[0]._s_0,(char *)pFVar5[2]);
          bVar9 = false;
          bVar11 = true;
          if (-1 < CpuChannel->Enabled) {
            FStack_e8.ComparisonIndex.Value = FVar14.Value;
            FStack_e8.Number = uVar12;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&FStack_e8,(wchar_t *)pFVar5[1],
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                       ,0x6ad);
            bVar9 = true;
            bVar11 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable == false) goto LAB_14540ddfb;
        uStack_e0 = FVar14.Value;
        uStack_dc = uVar12;
        FStack_d0 = FVar13;
        FThreadStats::AddMessage(FVar13,CycleScopeStart);
        bVar9 = false;
        bVar10 = true;
      }
      lVar2 = lVar4 + lVar18;
      pTVar16 = (TMatrix<double> *)(lVar18 + 0x80 + lVar4);
      FScene::UpdatePrimitiveTransform_RenderThread
                (*(FScene **)(lVar4 + lVar18),*(FPrimitiveSceneProxy **)(lVar4 + 8 + lVar18),
                 (TBoxSphereBounds<double,double> *)(lVar2 + 0x10),
                 (TBoxSphereBounds<double,double> *)(lVar18 + 0x48 + lVar4),pTVar16,
                 (TVector<double> *)(lVar18 + 0x170 + lVar4),
                 (TOptional<UE::Math::TTransform<double>_> *)(lVar18 + 0x100 + lVar4));
      if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) {
        FVar6 = (FUpdate_u_72)((FUpdate_u_72 *)(lVar4 + 8 + lVar18))->SceneProxy_ForDebug;
        FStack_a8.StreamingScaleFactor =
             FSimpleStreamableAssetManager::GetStreamingScaleFactor<FPrimitiveSceneProxy>
                       (FVar6.SceneProxy_ForDebug,pTVar16);
        FStack_a8.MinDistance = (FVar6.SceneProxy_ForDebug)->MinDrawDistance;
        FStack_a8.MaxDistance = (FVar6.SceneProxy_ForDebug)->MaxDrawDistance;
        FStack_a8.ObjectRegistrationIndex.Object =
             ((FVar6.SceneProxy_ForDebug)->SimpleStreamableAssetManagerIndex).Object;
        FStack_a8.LastRenderedTime =
             (FVar6.SceneProxy_ForDebug)->PrimitiveSceneInfo->SceneData->LastRenderTimeOnScreen;
        bVar3 = *(byte *)(FVar6.ObjectKey + 0x86);
        FStack_a8.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController =
             ((FVar6.SceneProxy_ForDebug)->SimpleStreamableAssetManagerIndex).SharedReferenceCount.
             ReferenceController;
        if (FStack_a8.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FStack_a8.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController)->
          SharedReferenceCount =
               (atomic<int>)
               ((int)(FStack_a8.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
          UNLOCK();
        }
        FStack_a8.ObjectBounds.Origin.field0_0x0._s_0.X = *(double *)(lVar2 + 0x10);
        FStack_a8.ObjectBounds.Origin.field0_0x0._s_0.Y = *(double *)(lVar2 + 0x18);
        FStack_a8.ObjectBounds.Origin.field0_0x0._s_0.Z = *(double *)(lVar2 + 0x20);
        FStack_a8.ObjectBounds.BoxExtent.field0_0x0._s_0.X = *(double *)(lVar2 + 0x28);
        FStack_a8.bForceMipStreaming = bVar3 >> 5;
        FStack_a8.ObjectBounds.BoxExtent.field0_0x0._s_0.Y = *(double *)(lVar2 + 0x30);
        FStack_a8.ObjectBounds.BoxExtent.field0_0x0._s_0.Z = *(double *)(lVar2 + 0x38);
        FStack_a8.ObjectBounds.SphereRadius = *(double *)(lVar2 + 0x40);
        FStack_a8.field2_0x48 = FVar6;
        FSimpleStreamableAssetManager::Update(&FStack_a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_a8.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController);
      }
      if (bVar11) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar9) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((bVar10) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false))
         && (FThreadStats::TlsSlot != 0xffffffff)) {
        this = TlsGetValue(FThreadStats::TlsSlot);
        if (this == (FThreadStats *)0x0) {
          this_00 = FThreadStatsPool::Get();
          this = FThreadStatsPool::GetFromPool(this_00);
        }
        if (this->bWaitForExplicitFlush < this->ScopeCount) {
          FStack_b8.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
          FStack_b8.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
          QueryPerformanceCounter(&LStack_c0);
          FStack_b8.StatData.Pad[4] = '\0';
          FStack_b8.StatData.Pad[5] = '\0';
          FStack_b8.StatData.Pad[6] = '\0';
          FStack_b8.StatData.Pad[7] = '\0';
          FStack_b8.StatData.Pad[0] = LStack_c0.s.LowPart._0_1_;
          FStack_b8.StatData.Pad[1] = LStack_c0.s.LowPart._1_1_;
          FStack_b8.StatData.Pad[2] = LStack_c0.s.LowPart._2_1_;
          FStack_b8.StatData.Pad[3] = LStack_c0.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(this,&FStack_b8);
          piVar1 = &this->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(this,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(this,false,false);
          }
        }
      }
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 400;
      lStack_d8 = lStack_d8 + -1;
    } while (lStack_d8 != 0);
    lStack_d8 = 0;
  }
  puVar7 = *(undefined8 **)param_1;
  if (puVar7 != (undefined8 *)0x0) {
    (**(code **)*puVar7)(puVar7,1);
  }
  return;
}

// Call @ 145421e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateReflectionCaptureTransform'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  if (*(char *)(*(longlong *)((longlong)param_1 + 8) + 0xe0) != '\0') {
    LOCK();
    *(int *)(*(longlong *)param_1 + 0x49f8) = *(int *)(*(longlong *)param_1 + 0x49f8) + -1;
    UNLOCK();
  }
  *(undefined1 *)(*(longlong *)((longlong)param_1 + 8) + 0xe0) =
       *(undefined1 *)((longlong)param_1 + 0x90);
  if (*(char *)(*(longlong *)((longlong)param_1 + 8) + 0xe0) != '\0') {
    LOCK();
    *(int *)(*(longlong *)param_1 + 0x49f8) = *(int *)(*(longlong *)param_1 + 0x49f8) + 1;
    UNLOCK();
  }
  *(undefined1 *)(*(longlong *)param_1 + 0x2d00) = 1;
  FReflectionCaptureProxy::SetTransform
            (*(FReflectionCaptureProxy **)((longlong)param_1 + 8),
             (TMatrix<double> *)((longlong)param_1 + 0x10));
  if (*(int *)(*(longlong *)param_1 + 8) < 2) {
    FReflectionCaptureProxy::UpdateMobileUniformBuffer
              (*(FReflectionCaptureProxy **)((longlong)param_1 + 8),(FRHICommandListBase *)param_2);
  }
  return;
}

// Call @ 145421e20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateWindSource'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  TArray<FWindSourceSceneProxy_*,TSizedDefaultAllocator<32>_>::Remove
            ((TArray<FWindSourceSceneProxy_*,TSizedDefaultAllocator<32>_> *)
             (*(longlong *)param_1 + 0x4768),(FWindSourceSceneProxy **)((longlong)param_1 + 8));
  ::operator_delete(*(FWindSourceSceneProxy **)((longlong)param_1 + 8),0x48);
  return;
}

// Call @ 145421e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateLightInternal<FUpdateLightColorParameters>'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  FName *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar7;
  FNameEntryId FVar8;
  FNameEntryId FVar9;
  LARGE_INTEGER LStackX_8;
  FStatMessage FStack_28;
  
  FVar8.Value = 0;
  bVar3 = false;
  bVar5 = false;
  pFVar2 = *(FName **)(*(longlong *)((longlong)param_1 + 0x10) + 0x1f8);
  FVar7 = *pFVar2;
  FVar9 = FVar7.ComparisonIndex.Value;
  uVar6 = FVar7.Number;
  if ((FVar9.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&LStackX_8.s,(char *)pFVar2[2]);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar9.Value;
        LStackX_8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)pFVar2[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                   ,0xda5);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_8.s.LowPart = FVar9.Value;
      LStackX_8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar7,CycleScopeStart);
      bVar4 = true;
      FVar8.Value = FVar9.Value;
      goto LAB_14540e1c6;
    }
  }
  bVar4 = false;
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
LAB_14540e1c6:
  TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
  Enqueue<FUpdateLightColorParameters>
            (*(void **)(*(longlong *)param_1 + 0x5070),*(FLightSceneInfo **)((longlong)param_1 + 8),
             (FUpdateLightColorParameters *)((longlong)param_1 + 0x18));
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar7 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      FStack_28.NameAndInfo.Number = FVar7.Number & 0xffff6fff | 0x6000;
      FStack_28.NameAndInfo.Index.Value = FVar8.Value;
      QueryPerformanceCounter(&LStackX_8);
      FStack_28.StatData.Pad[4] = '\0';
      FStack_28.StatData.Pad[5] = '\0';
      FStack_28.StatData.Pad[6] = '\0';
      FStack_28.StatData.Pad[7] = '\0';
      FStack_28.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      FStack_28.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      FStack_28.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      FStack_28.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&FStack_28);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// Call @ 145421e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateLightInternal<FUpdateLightTransformParameters>'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  FName *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar7;
  FNameEntryId FVar8;
  FNameEntryId FVar9;
  LARGE_INTEGER LStackX_8;
  FStatMessage FStack_28;
  
  FVar8.Value = 0;
  bVar3 = false;
  bVar5 = false;
  pFVar2 = *(FName **)(*(longlong *)((longlong)param_1 + 0x10) + 0x1f8);
  FVar7 = *pFVar2;
  FVar9 = FVar7.ComparisonIndex.Value;
  uVar6 = FVar7.Number;
  if ((FVar9.Value != 0) || (uVar6 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&LStackX_8.s,(char *)pFVar2[2]);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar9.Value;
        LStackX_8.s.HighPart = uVar6;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)pFVar2[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                   ,0xda5);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_8.s.LowPart = FVar9.Value;
      LStackX_8.s.HighPart = uVar6;
      FThreadStats::AddMessage(FVar7,CycleScopeStart);
      bVar4 = true;
      FVar8.Value = FVar9.Value;
      goto LAB_14540e3a6;
    }
  }
  bVar4 = false;
  FVar7.ComparisonIndex.Value = 0;
  FVar7.Number = 0;
LAB_14540e3a6:
  TSceneUpdateCommandQueue<FLightSceneInfo,enum_ELightDirtyFlags,enum_ELightUpdateId>::
  Enqueue<FUpdateLightTransformParameters>
            (*(void **)(*(longlong *)param_1 + 0x5070),*(FLightSceneInfo **)((longlong)param_1 + 8),
             (FUpdateLightTransformParameters *)((longlong)param_1 + 0x20));
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar7 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      FStack_28.NameAndInfo.Number = FVar7.Number & 0xffff6fff | 0x6000;
      FStack_28.NameAndInfo.Index.Value = FVar8.Value;
      QueryPerformanceCounter(&LStackX_8);
      FStack_28.StatData.Pad[4] = '\0';
      FStack_28.StatData.Pad[5] = '\0';
      FStack_28.StatData.Pad[6] = '\0';
      FStack_28.StatData.Pad[7] = '\0';
      FStack_28.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      FStack_28.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      FStack_28.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      FStack_28.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&FStack_28);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// Call @ 145421e80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::ReleaseReflectionCubemap'::__l10::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FCaptureComponentSceneState *pFVar5;
  int iVar6;
  longlong lVar7;
  
  iVar6 = -1;
  pFVar5 = FReflectionCaptureCache::Find
                     ((FReflectionCaptureCache *)(*(longlong *)((longlong)param_1 + 8) + 0x2d58),
                      *(UReflectionCaptureComponent **)param_1);
  if (pFVar5 != (FCaptureComponentSceneState *)0x0) {
    if (pFVar5->CubemapIndex == -1) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComponentStatePtr->CubemapIndex != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                         ,0xb4d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    iVar6 = pFVar5->CubemapIndex;
  }
  bVar4 = FReflectionCaptureCache::Remove
                    ((FReflectionCaptureCache *)(*(longlong *)((longlong)param_1 + 8) + 0x2d58),
                     *(UReflectionCaptureComponent **)param_1);
  if ((bVar4) && (iVar6 != -1)) {
    lVar2 = *(longlong *)((longlong)param_1 + 8);
    if ((iVar6 < 0) || (*(int *)(lVar2 + 0x2e10) <= iVar6)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    lVar7 = *(longlong *)(lVar2 + 0x2e08);
    if (*(longlong *)(lVar2 + 0x2e08) == 0) {
      lVar7 = lVar2 + 0x2df8;
    }
    puVar1 = (uint *)(lVar7 + (longlong)((int)(iVar6 + (iVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
    *puVar1 = *puVar1 & ~(1 << ((byte)iVar6 & 0x1f));
  }
  return;
}

// Call @ 145421e90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdatePrimitiveTransformInternal<FPrimitiveSceneDesc>'::__l49::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  byte bVar2;
  FName *pFVar3;
  FUpdate_u_72 FVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar9;
  FNameEntryId FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER LStackX_8;
  FStatMessage FStack_a8;
  FUpdate FStack_98;
  
  FVar11.Value = 0;
  bVar5 = false;
  bVar7 = false;
  pFVar3 = *(FName **)(*(longlong *)((longlong)param_1 + 8) + 0x70);
  FVar9 = *pFVar3;
  FVar10 = FVar9.ComparisonIndex.Value;
  uVar8 = FVar9.Number;
  if ((FVar10.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&LStackX_8.s,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar10.Value;
        LStackX_8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                   ,0x670);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_8.s.LowPart = FVar10.Value;
      LStackX_8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar6 = true;
      FVar11.Value = FVar10.Value;
      goto LAB_14540e8a7;
    }
  }
  bVar6 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_14540e8a7:
  FScene::UpdatePrimitiveTransform_RenderThread
            (*(FScene **)param_1,*(FPrimitiveSceneProxy **)((longlong)param_1 + 8),
             (TBoxSphereBounds<double,double> *)((longlong)param_1 + 0x10),
             (TBoxSphereBounds<double,double> *)((longlong)param_1 + 0x48),
             (TMatrix<double> *)((longlong)param_1 + 0x80),
             (TVector<double> *)((longlong)param_1 + 0x170),
             (TOptional<UE::Math::TTransform<double>_> *)((longlong)param_1 + 0x100));
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) {
    FVar4 = (FUpdate_u_72)((FUpdate_u_72 *)((longlong)param_1 + 8))->SceneProxy_ForDebug;
    FStack_98.StreamingScaleFactor =
         FSimpleStreamableAssetManager::GetStreamingScaleFactor<FPrimitiveSceneProxy>
                   (FVar4.SceneProxy_ForDebug,(TMatrix<double> *)((longlong)param_1 + 0x80));
    FStack_98.MinDistance = (FVar4.SceneProxy_ForDebug)->MinDrawDistance;
    FStack_98.MaxDistance = (FVar4.SceneProxy_ForDebug)->MaxDrawDistance;
    FStack_98.ObjectRegistrationIndex.Object =
         ((FVar4.SceneProxy_ForDebug)->SimpleStreamableAssetManagerIndex).Object;
    FStack_98.LastRenderedTime =
         (FVar4.SceneProxy_ForDebug)->PrimitiveSceneInfo->SceneData->LastRenderTimeOnScreen;
    bVar2 = *(byte *)(FVar4.ObjectKey + 0x86);
    FStack_98.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController =
         ((FVar4.SceneProxy_ForDebug)->SimpleStreamableAssetManagerIndex).SharedReferenceCount.
         ReferenceController;
    if (FStack_98.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_98.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(FStack_98.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FStack_98.ObjectBounds.Origin.field0_0x0._s_0.X =
         (((TBoxSphereBounds<double,double> *)((longlong)param_1 + 0x10))->Origin).field0_0x0._s_0.X
    ;
    FStack_98.ObjectBounds.Origin.field0_0x0._s_0.Y = *(double *)((longlong)param_1 + 0x18);
    FStack_98.ObjectBounds.Origin.field0_0x0._s_0.Z = *(double *)((longlong)param_1 + 0x20);
    FStack_98.ObjectBounds.BoxExtent.field0_0x0._s_0.X = *(double *)((longlong)param_1 + 0x28);
    FStack_98.bForceMipStreaming = bVar2 >> 5;
    FStack_98.ObjectBounds.BoxExtent.field0_0x0._s_0.Y = *(double *)((longlong)param_1 + 0x30);
    FStack_98.ObjectBounds.BoxExtent.field0_0x0._s_0.Z = *(double *)((longlong)param_1 + 0x38);
    FStack_98.ObjectBounds.SphereRadius = *(double *)((longlong)param_1 + 0x40);
    FStack_98.field2_0x48 = FVar4;
    FSimpleStreamableAssetManager::Update(&FStack_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_98.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      FStack_a8.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      FStack_a8.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&LStackX_8);
      FStack_a8.StatData.Pad[4] = '\0';
      FStack_a8.StatData.Pad[5] = '\0';
      FStack_a8.StatData.Pad[6] = '\0';
      FStack_a8.StatData.Pad[7] = '\0';
      FStack_a8.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      FStack_a8.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      FStack_a8.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      FStack_a8.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&FStack_a8);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// Call @ 145421ea0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdatePrimitiveTransformInternal<UPrimitiveComponent>'::__l49::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  byte bVar2;
  FName *pFVar3;
  FUpdate_u_72 FVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar9;
  FNameEntryId FVar10;
  FNameEntryId FVar11;
  LARGE_INTEGER LStackX_8;
  FStatMessage FStack_a8;
  FUpdate FStack_98;
  
  FVar11.Value = 0;
  bVar5 = false;
  bVar7 = false;
  pFVar3 = *(FName **)(*(longlong *)((longlong)param_1 + 8) + 0x70);
  FVar9 = *pFVar3;
  FVar10 = FVar9.ComparisonIndex.Value;
  uVar8 = FVar9.Number;
  if ((FVar10.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      LStackX_8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&LStackX_8.s,(char *)pFVar3[2]);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        LStackX_8.s.LowPart = FVar10.Value;
        LStackX_8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&LStackX_8.s,(wchar_t *)pFVar3[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                   ,0x670);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      LStackX_8.s.LowPart = FVar10.Value;
      LStackX_8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar6 = true;
      FVar11.Value = FVar10.Value;
      goto LAB_14540eb67;
    }
  }
  bVar6 = false;
  FVar9.ComparisonIndex.Value = 0;
  FVar9.Number = 0;
LAB_14540eb67:
  FScene::UpdatePrimitiveTransform_RenderThread
            (*(FScene **)param_1,*(FPrimitiveSceneProxy **)((longlong)param_1 + 8),
             (TBoxSphereBounds<double,double> *)((longlong)param_1 + 0x10),
             (TBoxSphereBounds<double,double> *)((longlong)param_1 + 0x48),
             (TMatrix<double> *)((longlong)param_1 + 0x80),
             (TVector<double> *)((longlong)param_1 + 0x170),
             (TOptional<UE::Math::TTransform<double>_> *)((longlong)param_1 + 0x100));
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) {
    FVar4 = (FUpdate_u_72)((FUpdate_u_72 *)((longlong)param_1 + 8))->SceneProxy_ForDebug;
    FStack_98.StreamingScaleFactor =
         FSimpleStreamableAssetManager::GetStreamingScaleFactor<FPrimitiveSceneProxy>
                   (FVar4.SceneProxy_ForDebug,(TMatrix<double> *)((longlong)param_1 + 0x80));
    FStack_98.MinDistance = (FVar4.SceneProxy_ForDebug)->MinDrawDistance;
    FStack_98.MaxDistance = (FVar4.SceneProxy_ForDebug)->MaxDrawDistance;
    FStack_98.ObjectRegistrationIndex.Object =
         ((FVar4.SceneProxy_ForDebug)->SimpleStreamableAssetManagerIndex).Object;
    FStack_98.LastRenderedTime =
         (FVar4.SceneProxy_ForDebug)->PrimitiveSceneInfo->SceneData->LastRenderTimeOnScreen;
    bVar2 = *(byte *)(FVar4.ObjectKey + 0x86);
    FStack_98.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController =
         ((FVar4.SceneProxy_ForDebug)->SimpleStreamableAssetManagerIndex).SharedReferenceCount.
         ReferenceController;
    if (FStack_98.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FStack_98.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(FStack_98.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController)->
                 SharedReferenceCount + 1);
      UNLOCK();
    }
    FStack_98.ObjectBounds.Origin.field0_0x0._s_0.X =
         (((TBoxSphereBounds<double,double> *)((longlong)param_1 + 0x10))->Origin).field0_0x0._s_0.X
    ;
    FStack_98.ObjectBounds.Origin.field0_0x0._s_0.Y = *(double *)((longlong)param_1 + 0x18);
    FStack_98.ObjectBounds.Origin.field0_0x0._s_0.Z = *(double *)((longlong)param_1 + 0x20);
    FStack_98.ObjectBounds.BoxExtent.field0_0x0._s_0.X = *(double *)((longlong)param_1 + 0x28);
    FStack_98.bForceMipStreaming = bVar2 >> 5;
    FStack_98.ObjectBounds.BoxExtent.field0_0x0._s_0.Y = *(double *)((longlong)param_1 + 0x30);
    FStack_98.ObjectBounds.BoxExtent.field0_0x0._s_0.Z = *(double *)((longlong)param_1 + 0x38);
    FStack_98.ObjectBounds.SphereRadius = *(double *)((longlong)param_1 + 0x40);
    FStack_98.field2_0x48 = FVar4;
    FSimpleStreamableAssetManager::Update(&FStack_98);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_98.ObjectRegistrationIndex.SharedReferenceCount.ReferenceController);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      FStack_a8.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      FStack_a8.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&LStackX_8);
      FStack_a8.StatData.Pad[4] = '\0';
      FStack_a8.StatData.Pad[5] = '\0';
      FStack_a8.StatData.Pad[6] = '\0';
      FStack_a8.StatData.Pad[7] = '\0';
      FStack_a8.StatData.Pad[0] = LStackX_8.s.LowPart._0_1_;
      FStack_a8.StatData.Pad[1] = LStackX_8.s.LowPart._1_1_;
      FStack_a8.StatData.Pad[2] = LStackX_8.s.LowPart._2_1_;
      FStack_a8.StatData.Pad[3] = LStackX_8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&FStack_a8);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// Call @ 145421eb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>'::__l72::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar8;
  FNameEntryId FVar9;
  FNameEntryId FVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  FColor_u_0 aFStackX_8 [2];
  FRHICommandListBase *pFStackX_10;
  FName FStackX_18;
  uint uStackX_20;
  uint uStackX_24;
  LARGE_INTEGER LStack_98;
  FName FStack_90;
  FStatMessage FStack_80;
  TVector<double>_u_0 TStack_68;
  
  iVar2 = *(int *)((longlong)param_1 + 0x10);
  puVar12 = *(undefined8 **)((longlong)param_1 + 8);
  puVar11 = puVar12 + (longlong)iVar2 * 0x32;
  pFStackX_10 = (FRHICommandListBase *)param_2;
LAB_14540ed90:
  do {
    if (*(int *)((longlong)param_1 + 0x10) != iVar2) {
      `TCheckedPointerIterator<`FScene::BatchAddPrimitivesInternal<FPrimitiveSceneDesc>'::__l2::FCreateCommand_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(aFStackX_8);
    }
    if (puVar12 == puVar11) {
      return;
    }
    FVar9.Value = 0;
    bVar5 = false;
    bVar4 = false;
    FStack_90.ComparisonIndex.Value = 0;
    FStack_90.Number = 0;
    pFVar3 = *(FName **)(puVar12[1] + 0x70);
    FVar8 = *pFVar3;
    FVar10 = FVar8.ComparisonIndex.Value;
    uVar7 = FVar8.Number;
    if ((FVar10.Value == 0) && (uVar7 == 0)) {
LAB_14540ee7d:
      bVar6 = false;
      FVar8 = FStack_90;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        aFStackX_8[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent((FColor *)&aFStackX_8[0]._s_0,(char *)pFVar3[2]);
        bVar5 = false;
        bVar4 = true;
        if (-1 < CpuChannel->Enabled) {
          FStackX_18.ComparisonIndex.Value = FVar10.Value;
          FStackX_18.Number = uVar7;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&FStackX_18,(wchar_t *)pFVar3[1],
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                     ,0x5bb);
          bVar5 = true;
          bVar4 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14540ee7d;
      uStackX_20 = FVar10.Value;
      uStackX_24 = uVar7;
      FStack_90 = FVar8;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      bVar5 = false;
      bVar6 = true;
      FVar9.Value = FStack_90.ComparisonIndex.Value;
    }
    TStack_68._s_0.X = (double)puVar12[0x27];
    TStack_68._s_0.Y = (double)puVar12[0x28];
    TStack_68._s_0.Z = (double)puVar12[0x29];
    FPrimitiveSceneProxy::SetTransform
              ((FPrimitiveSceneProxy *)puVar12[1],pFStackX_10,(TMatrix<double> *)(puVar12 + 0x10),
               (TBoxSphereBounds<double,double> *)(puVar12 + 0x20),
               (TBoxSphereBounds<double,double> *)(puVar12 + 0x2a),
               (TVector<double> *)&TStack_68._s_0);
    (**(code **)(*(longlong *)puVar12[1] + 0x118))((longlong *)puVar12[1],pFStackX_10);
    FScene::AddPrimitiveSceneInfo_RenderThread
              (*(FScene **)param_1,(FPrimitiveSceneInfo *)*puVar12,
               (TOptional<UE::Math::TTransform<double>_> *)(puVar12 + 2));
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar6) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      if (this->bWaitForExplicitFlush < this->ScopeCount) {
        FStack_80.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        FStack_80.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&LStack_98);
        FStack_80.StatData.Pad[4] = '\0';
        FStack_80.StatData.Pad[5] = '\0';
        FStack_80.StatData.Pad[6] = '\0';
        FStack_80.StatData.Pad[7] = '\0';
        FStack_80.StatData.Pad[0] = LStack_98.s.LowPart._0_1_;
        FStack_80.StatData.Pad[1] = LStack_98.s.LowPart._1_1_;
        FStack_80.StatData.Pad[2] = LStack_98.s.LowPart._2_1_;
        FStack_80.StatData.Pad[3] = LStack_98.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this,&FStack_80);
        piVar1 = &this->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this,false,false);
          puVar12 = puVar12 + 0x32;
          goto LAB_14540ed90;
        }
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this,false,false);
        }
      }
    }
    puVar12 = puVar12 + 0x32;
  } while( true );
}

// Call @ 145421ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>'::__l72::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  int iVar2;
  FName *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar8;
  FNameEntryId FVar9;
  FNameEntryId FVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  FColor_u_0 aFStackX_8 [2];
  FRHICommandListBase *pFStackX_10;
  FName FStackX_18;
  uint uStackX_20;
  uint uStackX_24;
  LARGE_INTEGER LStack_98;
  FName FStack_90;
  FStatMessage FStack_80;
  TVector<double>_u_0 TStack_68;
  
  iVar2 = *(int *)((longlong)param_1 + 0x10);
  puVar12 = *(undefined8 **)((longlong)param_1 + 8);
  puVar11 = puVar12 + (longlong)iVar2 * 0x32;
  pFStackX_10 = (FRHICommandListBase *)param_2;
LAB_14540f060:
  do {
    if (*(int *)((longlong)param_1 + 0x10) != iVar2) {
      `TCheckedPointerIterator<`FScene::BatchAddPrimitivesInternal<UPrimitiveComponent>'::__l2::FCreateCommand_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(aFStackX_8);
    }
    if (puVar12 == puVar11) {
      return;
    }
    FVar9.Value = 0;
    bVar5 = false;
    bVar4 = false;
    FStack_90.ComparisonIndex.Value = 0;
    FStack_90.Number = 0;
    pFVar3 = *(FName **)(puVar12[1] + 0x70);
    FVar8 = *pFVar3;
    FVar10 = FVar8.ComparisonIndex.Value;
    uVar7 = FVar8.Number;
    if ((FVar10.Value == 0) && (uVar7 == 0)) {
LAB_14540f14d:
      bVar6 = false;
      FVar8 = FStack_90;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        aFStackX_8[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent((FColor *)&aFStackX_8[0]._s_0,(char *)pFVar3[2]);
        bVar5 = false;
        bVar4 = true;
        if (-1 < CpuChannel->Enabled) {
          FStackX_18.ComparisonIndex.Value = FVar10.Value;
          FStackX_18.Number = uVar7;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&FStackX_18,(wchar_t *)pFVar3[1],
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RendererScene.cpp"
                     ,0x5bb);
          bVar5 = true;
          bVar4 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_14540f14d;
      uStackX_20 = FVar10.Value;
      uStackX_24 = uVar7;
      FStack_90 = FVar8;
      FThreadStats::AddMessage(FVar8,CycleScopeStart);
      bVar5 = false;
      bVar6 = true;
      FVar9.Value = FStack_90.ComparisonIndex.Value;
    }
    TStack_68._s_0.X = (double)puVar12[0x27];
    TStack_68._s_0.Y = (double)puVar12[0x28];
    TStack_68._s_0.Z = (double)puVar12[0x29];
    FPrimitiveSceneProxy::SetTransform
              ((FPrimitiveSceneProxy *)puVar12[1],pFStackX_10,(TMatrix<double> *)(puVar12 + 0x10),
               (TBoxSphereBounds<double,double> *)(puVar12 + 0x20),
               (TBoxSphereBounds<double,double> *)(puVar12 + 0x2a),
               (TVector<double> *)&TStack_68._s_0);
    (**(code **)(*(longlong *)puVar12[1] + 0x118))((longlong *)puVar12[1],pFStackX_10);
    FScene::AddPrimitiveSceneInfo_RenderThread
              (*(FScene **)param_1,(FPrimitiveSceneInfo *)*puVar12,
               (TOptional<UE::Math::TTransform<double>_> *)(puVar12 + 2));
    if (bVar4) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar6) && (FVar8 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      if (this->bWaitForExplicitFlush < this->ScopeCount) {
        FStack_80.NameAndInfo.Number = FVar8.Number & 0xffff6fff | 0x6000;
        FStack_80.NameAndInfo.Index.Value = FVar9.Value;
        QueryPerformanceCounter(&LStack_98);
        FStack_80.StatData.Pad[4] = '\0';
        FStack_80.StatData.Pad[5] = '\0';
        FStack_80.StatData.Pad[6] = '\0';
        FStack_80.StatData.Pad[7] = '\0';
        FStack_80.StatData.Pad[0] = LStack_98.s.LowPart._0_1_;
        FStack_80.StatData.Pad[1] = LStack_98.s.LowPart._1_1_;
        FStack_80.StatData.Pad[2] = LStack_98.s.LowPart._2_1_;
        FStack_80.StatData.Pad[3] = LStack_98.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(this,&FStack_80);
        piVar1 = &this->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(this,false,false);
          puVar12 = puVar12 + 0x32;
          goto LAB_14540f060;
        }
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this,false,false);
        }
      }
    }
    puVar12 = puVar12 + 0x32;
  } while( true );
}

// Call @ 145421ed0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::InvalidateLumenSurfaceCache_GameThread'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FPrimitiveSceneInfo *pFVar1;
  
  if ((*(longlong *)((longlong)param_1 + 8) != 0) &&
     (pFVar1 = *(FPrimitiveSceneInfo **)(*(longlong *)((longlong)param_1 + 8) + 0x228),
     pFVar1 != (FPrimitiveSceneInfo *)0x0)) {
    FScene::LumenInvalidateSurfaceCacheForPrimitive(*(FScene **)param_1,pFVar1);
    return;
  }
  return;
}

// Call @ 145421f00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>'::__l15::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined1 auStackX_8 [8];
  
  iVar2 = *(int *)((longlong)param_1 + 0x10);
  puVar4 = *(undefined8 **)((longlong)param_1 + 8);
  puVar1 = puVar4 + (longlong)iVar2 * 3;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x10) != iVar2) {
      `TCheckedPointerIterator<`FScene::BatchRemovePrimitivesInternal<FPrimitiveSceneDesc>'::__l2::FDetachCommand_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (puVar4 == puVar1) break;
    FScene::RemovePrimitiveSceneInfo_RenderThread
              (*(FScene **)param_1,(FPrimitiveSceneInfo *)*puVar4);
    (**(code **)(*(longlong *)puVar4[1] + 0x120))();
    piVar3 = (int *)puVar4[2];
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
    }
    puVar4 = puVar4 + 3;
  }
  return;
}

// Call @ 145421f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>'::__l15::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int *piVar3;
  undefined8 *puVar4;
  undefined1 auStackX_8 [8];
  
  iVar2 = *(int *)((longlong)param_1 + 0x10);
  puVar4 = *(undefined8 **)((longlong)param_1 + 8);
  puVar1 = puVar4 + (longlong)iVar2 * 3;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x10) != iVar2) {
      `TCheckedPointerIterator<`FScene::BatchRemovePrimitivesInternal<UPrimitiveComponent>'::__l2::FDetachCommand_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(auStackX_8);
    }
    if (puVar4 == puVar1) break;
    FScene::RemovePrimitiveSceneInfo_RenderThread
              (*(FScene **)param_1,(FPrimitiveSceneInfo *)*puVar4);
    (**(code **)(*(longlong *)puVar4[1] + 0x120))();
    piVar3 = (int *)puVar4[2];
    if (piVar3 != (int *)0x0) {
      LOCK();
      *piVar3 = *piVar3 + -1;
      UNLOCK();
    }
    puVar4 = puVar4 + 3;
  }
  return;
}

// Call @ 145421f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::Release'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  EShaderPlatform EVar3;
  FRDGEventName *pFVar4;
  longlong *plVar5;
  undefined1 auStackY_888 [32];
  FRDGEventName FStack_858;
  undefined1 auStack_838 [72];
  longlong *plStack_7f0;
  FRDGBuilder FStack_7e8;
  ulonglong uStack_18;
  
  EVar3 = GMaxRHIShaderPlatform;
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_888;
  auStack_838._0_8_ = (FViewSceneChangeSet *)0x0;
  auStack_838._8_4_ = None;
  auStack_838._16_8_ = (FTaskBase *)0x0;
  auStack_838._32_8_ = 0;
  plStack_7f0 = (longlong *)0x0;
  auStack_838[0x18] = true;
  pFVar4 = FRDGEventName::FRDGEventName(&FStack_858,L"UpdateAllPrimitiveSceneInfos");
  FRDGBuilder::FRDGBuilder(&FStack_7e8,param_2,pFVar4,None,EVar3);
  FScene::Update(*(FScene **)param_1,&FStack_7e8,(FUpdateParameters *)auStack_838);
  FRDGBuilder::Execute(&FStack_7e8);
  FRDGBuilder::~FRDGBuilder(&FStack_7e8);
  FRDGBuilder::WaitForAsyncDeleteTask();
  plVar5 = *(longlong **)param_1;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x538))(plVar5,1);
  }
  if (auStack_838._32_8_ != 0) {
    plVar5 = (longlong *)(auStack_838 + 0x30);
    if (plStack_7f0 != (longlong *)0x0) {
      plVar5 = plStack_7f0;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  if ((FTaskBase *)auStack_838._16_8_ != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = (atomic<unsigned_int> *)(auStack_838._16_8_ + 0x30);
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (*(code *)**(undefined8 **)auStack_838._16_8_)(auStack_838._16_8_,1);
    }
  }
  return;
}

// Call @ 145421f30

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AddRuntimeVirtualTexture'::__l7::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRuntimeVirtualTextureSceneProxy *this;
  longlong lVar1;
  int iVar2;
  
  TSparseArrayBase<8,8,FDefaultSparseArrayAllocator>::RemoveAtUninitialized
            ((TSparseArrayBase<8,8,FDefaultSparseArrayAllocator> *)(*(longlong *)param_1 + 0x4b28),
             **(int **)((longlong)param_1 + 0x10),1);
  this = *(FRuntimeVirtualTextureSceneProxy **)((longlong)param_1 + 0x10);
  if (this != (FRuntimeVirtualTextureSceneProxy *)0x0) {
    FRuntimeVirtualTextureSceneProxy::~FRuntimeVirtualTextureSceneProxy(this);
    ::operator_delete(this,400);
  }
  iVar2 = TSparseArray<FRuntimeVirtualTextureSceneProxy_*,FDefaultSparseArrayAllocator>::Add
                    ((TSparseArray<FRuntimeVirtualTextureSceneProxy_*,FDefaultSparseArrayAllocator>
                      *)(*(longlong *)param_1 + 0x4b28),
                     (FRuntimeVirtualTextureSceneProxy **)((longlong)param_1 + 8));
  **(int **)((longlong)param_1 + 8) = iVar2;
  lVar1 = *(longlong *)param_1;
  UpdateRuntimeVirtualTextureHidePrimitiveMasks
            ((TSparseArray<FRuntimeVirtualTextureSceneProxy_*,FDefaultSparseArrayAllocator> *)
             (lVar1 + 0x4b28),(bool *)(lVar1 + 0x49f2),(bool *)(lVar1 + 0x49f3));
  return;
}

// Call @ 145421f40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateWindSource'::__l8::<lambda_2>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForAnyElementType *pFVar6;
  
  lVar2 = *(longlong *)param_1;
  pFVar1 = (FScriptContainerElement *)((longlong)param_1 + 8);
  pFVar6 = (ForAnyElementType *)(lVar2 + 0x4768);
  if ((pFVar6->Data <= pFVar1) && (pFVar1 < pFVar6->Data + (longlong)*(int *)(lVar2 + 0x4774) * 8))
  {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(lVar2 + 0x4770);
  if (iVar5 == *(int *)(lVar2 + 0x4774)) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar6,(int *)(lVar2 + 0x4774));
  }
  *(int *)(lVar2 + 0x4770) = iVar5 + 1;
  *(undefined8 *)(pFVar6->Data + (longlong)iVar5 * 8) = *(undefined8 *)pFVar1;
  return;
}

// Call @ 145498ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FSceneRenderProcessor::Execute'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  bool bVar6;
  undefined1 auStackX_8 [8];
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId928,"FSceneRenderProcessor::DeleteSceneRenderers",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
               ,0x3a0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId928);
  }
  lVar3 = *(longlong *)param_1;
  plVar5 = *(longlong **)(lVar3 + 8);
  iVar2 = *(int *)(lVar3 + 0x10);
  plVar1 = plVar5 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x10) != iVar2) {
      `TCheckedPointerIterator<FSceneRenderer_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (auStackX_8);
    }
    if (plVar5 == plVar1) break;
    puVar4 = (undefined8 *)*plVar5;
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    plVar5 = plVar5 + 1;
  }
  if (*(FSceneRenderProcessor **)param_1 != (FSceneRenderProcessor *)0x0) {
    FSceneRenderProcessor::_scalar_deleting_destructor_(*(FSceneRenderProcessor **)param_1,1);
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 145498cf0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneViewState::Destroy'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong *plVar1;
  
  (**(code **)(*(longlong *)(*(longlong *)param_1 + 0x10) + 0x20))();
  plVar1 = *(longlong **)param_1;
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145498d1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x128))(plVar1,1);
    return;
  }
  return;
}

// Call @ 145498d30

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneRenderProcessor::Cleanup'::__l5::<lambda_1>,void>::Call(void *param_1)

{
  CleanupSceneRenderer(*(FSceneRenderer **)param_1);
  return;
}

// Call @ 145498d40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UpdateSceneCaptureContent_RenderThread'::__l8::<lambda_1>,void,FRHICommandList_&,int>
::Call(void *param_1,FRHICommandList *param_2,int *param_3)

{
  `UpdateSceneCaptureContent_RenderThread'::__l8::<lambda_1>::operator()(param_1,param_2,*param_3);
  return;
}

// Call @ 145498d50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateSceneCaptureContents'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong *plVar3;
  int iVar4;
  FRenderResource *this;
  uint *puVar5;
  FTextureRenderTargetResource *this_00;
  uint uVar6;
  FRHIGPUMask FVar8;
  undefined1 auStackX_8 [8];
  int iVar7;
  
  this = (FRenderResource *)(**(code **)(**(longlong **)param_1 + 0xa0))();
  uVar1 = *(uint *)((longlong)param_1 + 0xc);
  uVar2 = *(uint *)((longlong)param_1 + 8);
  uVar6 = 1;
  if (*(char *)((longlong)param_1 + 0x10) != '\0') {
    uVar6 = uVar1;
    if ((int)uVar1 < (int)uVar2) {
      uVar6 = uVar2;
    }
    iVar4 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    iVar7 = 0;
    if (uVar6 != 0) {
      iVar7 = iVar4;
    }
    uVar6 = iVar7 + 1;
  }
  if (((this[6].OwnerName.Number != uVar2) || (this[6].ResourceName.ComparisonIndex.Value != uVar1))
     || (this[6].ResourceName.Number != uVar6)) {
    this[6].ResourceName.Number = uVar6;
    this[6].OwnerName.Number = uVar2;
    this[6].ResourceName.ComparisonIndex.Value = uVar1;
    FRenderResource::UpdateRHI(this,(FRHICommandListBase *)param_2);
  }
  plVar3 = *(longlong **)((longlong)param_1 + 0x18);
  if (plVar3 == (longlong *)0x0) {
    this_00 = *(FTextureRenderTargetResource **)param_1;
    FVar8.GPUMask = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) - 1;
  }
  else {
    this_00 = *(FTextureRenderTargetResource **)param_1;
    puVar5 = (uint *)(**(code **)(*plVar3 + 0x78))(plVar3,auStackX_8,param_2);
    FVar8.GPUMask = *puVar5;
  }
  FTextureRenderTargetResource::SetActiveGPUMask(this_00,FVar8);
  return;
}

// Call @ 145498d60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneRenderProcessor::Execute'::__l21::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined8 *)(*(longlong *)param_1 + 0x88) = *(undefined8 *)((longlong)param_1 + 8);
  FSceneRenderProcessor::FGroupEvent::Begin
            ((FGroupEvent *)(*(longlong *)param_1 + 0x90),*(FGroupNode **)((longlong)param_1 + 8),
             (FRHICommandList *)param_2,GroupCommand);
  iVar1 = *(int *)(*(longlong *)((longlong)param_1 + 8) + 0x28);
  iVar2 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  ::FString::AppendChars
            ((FString *)(*(longlong *)param_1 + 0xb8),
             *(wchar_t **)(*(longlong *)((longlong)param_1 + 8) + 0x20),iVar2);
  return;
}

// Call @ 145498dd0

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
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateSceneCaptureContents'::__l30::<lambda_2>,bool,FRDGBuilder_&,FSceneRenderFunctionInputs_const_&>
::Call(void *param_1,FRDGBuilder *param_2,FSceneRenderFunctionInputs *param_3)

{
  FTexture *pFVar1;
  bool bVar2;
  FRenderTarget *pFVar3;
  TArrayView<FRHICopyTextureInfo_const_,int> TStack_98;
  undefined8 uStack_88;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  int iStack_74;
  undefined8 uStack_70;
  int iStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  TIntVector3<int>_u_0 aTStack_48 [2];
  undefined1 auStack_30 [32];
  uint uStack_10;
  
  iStack_80 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  iStack_74 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  iStack_68 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  uStack_60 = *(int *)((longlong)param_1 + 8);
  uStack_88 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uStack_7c = (undefined4)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uStack_78 = (undefined4)
              ((ulonglong)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ >> 0x20);
  uStack_70 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  uStack_64 = 0;
  uStack_5c = 1;
  uStack_58 = 0;
  uStack_54 = 0;
  if ((*(char *)((longlong)param_1 + 0xc) == '\0') || (uStack_60 != 5)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  pFVar1 = *(FTexture **)param_1;
  TStack_98.DataPtr = (FRHICopyTextureInfo *)aTStack_48;
  aTStack_48._8_8_ = CONCAT44(uStack_7c,UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z);
  aTStack_48[1]._4_8_ = CONCAT44(UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z,uStack_78);
  pFVar3 = (FRenderTarget *)&pFVar1[1]._padding_;
  if (pFVar1 == (FTexture *)0x0) {
    pFVar3 = (FRenderTarget *)0x0;
  }
  aTStack_48[0]._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  TStack_98._12_4_ = TStack_98._12_4_;
  TStack_98.ArrayNum = 1;
  auStack_30._8_8_ = ZEXT48((uint)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z);
  auStack_30._16_8_ = CONCAT44(1,uStack_60);
  auStack_30._0_8_ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  auStack_30._24_8_ = 0;
  uStack_10 = 1;
  UpdateSceneCaptureContent_RenderThread
            (param_2,param_3->Renderer,param_3->SceneUpdateInputs,pFVar3,pFVar1,&TStack_98,bVar2,
             (FGenerateMipsParams *)((longlong)param_1 + 0x10),true,false);
  return true;
}

// Call @ 145498de0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateSceneCaptureContents'::__l12::<lambda_2>,bool,FRDGBuilder_&,FSceneRenderFunctionInputs_const_&>
::Call(void *param_1,FRDGBuilder *param_2,FSceneRenderFunctionInputs *param_3)

{
  uint uVar1;
  FTexture *pFVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  bool bVar5;
  FRenderTarget *pFVar6;
  FAtlasTextureInvalidationScope aFStackX_8 [8];
  TArrayView<FRHICopyTextureInfo_const_,int> TStack_a8;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  TIntVector3<int>_u_0 aTStack_58 [2];
  TIntVector3<int>_u_0 aTStack_40 [2];
  undefined8 uStack_28;
  uint uStack_20;
  
  iStack_98 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X;
  iStack_94 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y;
  iStack_90 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  iStack_8c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X;
  iStack_88 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y;
  iStack_84 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  iStack_80 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X;
  iStack_7c = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y;
  iStack_78 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 1;
  uStack_68 = 0;
  uStack_64 = 0;
  if (*(char *)((longlong)param_1 + 0x2c) != '\0') {
    uVar3 = (**(code **)(**(longlong **)param_1 + 0x30))();
    uVar1 = *(uint *)((longlong)param_1 + 0x30);
    uVar4 = (**(code **)(**(longlong **)param_1 + 0x38))();
    iStack_98 = (int)((uVar3 & 0xffffffff) / (ulonglong)uVar1);
    iStack_94 = (int)((uVar4 & 0xffffffff) / (ulonglong)*(uint *)((longlong)param_1 + 0x34));
    iStack_80 = iStack_98 *
                (*(int *)((longlong)param_1 + 0x38) % *(int *)((longlong)param_1 + 0x30));
    iStack_7c = iStack_94 *
                (*(int *)((longlong)param_1 + 0x38) / *(int *)((longlong)param_1 + 0x30));
  }
  RectLightAtlas::FAtlasTextureInvalidationScope::FAtlasTextureInvalidationScope
            (aFStackX_8,*(UTexture **)((longlong)param_1 + 8));
  if ((*(char *)((longlong)param_1 + 0x2d) == '\0') && (*(char *)((longlong)param_1 + 0x2c) == '\0')
     ) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  pFVar2 = *(FTexture **)param_1;
  TStack_a8.DataPtr = (FRHICopyTextureInfo *)aTStack_58;
  aTStack_58[0]._0_8_ = CONCAT44(iStack_94,iStack_98);
  aTStack_58._8_8_ = CONCAT44(iStack_8c,iStack_90);
  aTStack_58[1]._4_8_ = CONCAT44(iStack_84,iStack_88);
  aTStack_40[0]._0_8_ = CONCAT44(iStack_7c,iStack_80);
  pFVar6 = (FRenderTarget *)&pFVar2[1]._padding_;
  if (pFVar2 == (FTexture *)0x0) {
    pFVar6 = (FRenderTarget *)0x0;
  }
  TStack_a8.ArrayNum = 1;
  aTStack_40._8_8_ = CONCAT44(uStack_74,iStack_78);
  aTStack_40[1]._4_8_ = CONCAT44(uStack_6c,uStack_70);
  uStack_28 = CONCAT44(uStack_64,uStack_68);
  uStack_20 = 1;
  UpdateSceneCaptureContent_RenderThread
            (param_2,param_3->Renderer,param_3->SceneUpdateInputs,pFVar6,pFVar2,&TStack_a8,
             *(bool *)((longlong)param_1 + 0x18),(FGenerateMipsParams *)((longlong)param_1 + 0x1c),
             bVar5,*(bool *)((longlong)param_1 + 0x2e));
  RectLightAtlas::FAtlasTextureInvalidationScope::~FAtlasTextureInvalidationScope(aFStackX_8);
  return true;
}

// Call @ 145498df0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneRenderProcessor::Execute'::__l28::<lambda_3>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)param_1;
  if ((RenderCommandsChannel->Enabled < 0) && (*(char *)(lVar1 + 0xb0) != '\0')) {
    FRHIBreadcrumbEventManual::End
              ((FRHIBreadcrumbEventManual *)(lVar1 + 0x90),(FRHIComputeCommandList *)param_2);
    if (*(char *)(lVar1 + 0xb0) != '\0') {
      if ((((FRHIBreadcrumbEventManual *)(lVar1 + 0x90))->Node).Node != (FRHIBreadcrumbNode *)0x0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Node",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                           ,0x10a,L"Manual breadcrumb was destructed before it was ended.");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<1> **)(lVar1 + 0xa0));
      *(undefined1 *)(lVar1 + 0xb0) = 0;
    }
  }
  *(undefined8 *)(*(longlong *)param_1 + 0x88) = 0;
  ::FString::Reset((FString *)(*(longlong *)param_1 + 0xb8),0);
  return;
}

// Call @ 145498e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ESamplerAddressMode": Some values do not have unique names */

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::UpdateSceneCaptureContents'::__l32::<lambda_3>,bool,FRDGBuilder_&,FSceneRenderFunctionInputs_const_&>
::Call(void *param_1,FRDGBuilder *param_2,FSceneRenderFunctionInputs *param_3)

{
  FRHICommandListBase *pFVar1;
  FRHIResource *this;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  FRHITextureDesc *pFVar7;
  TIntVector3<int>_u_0 *pTVar8;
  longlong lVar9;
  undefined1 auStackY_278 [32];
  undefined4 uStack_21c;
  TArrayView<FRHICopyTextureInfo_const_,int> TStack_218;
  TIntVector3<int>_u_0 TStack_208;
  undefined8 uStack_1fc;
  TIntVector3<int>_u_0 TStack_1f0;
  undefined4 uStack_1e0;
  int iStack_1cc;
  int iStack_1c8;
  int iStack_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1a4;
  int iStack_190;
  int iStack_18c;
  int iStack_184;
  undefined4 uStack_180;
  undefined4 uStack_168;
  int iStack_154;
  int iStack_150;
  undefined4 uStack_148;
  int iStack_144;
  undefined4 uStack_12c;
  int iStack_118;
  int iStack_114;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_f0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d0;
  int iStack_cc;
  undefined4 uStack_b4;
  undefined1 auStack_98 [80];
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  lVar9 = *(longlong *)param_1;
  pFVar1 = (FRHICommandListBase *)param_2->_padding_;
  puVar5 = (undefined8 *)(**(code **)(*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x60) + 0x10))();
  lVar6 = (**(code **)(*(longlong *)*puVar5 + 0x20))();
  *(undefined1 *)(lVar9 + 0x40) = *(undefined1 *)(lVar6 + 0x33);
  pFVar7 = (FRHITextureDesc *)
           ::Translate((FRDGTextureDesc *)auStack_98,(FPooledRenderTargetDesc *)(lVar9 + 0x18));
  FRenderTargetPool::FindFreeElement
            ((FRenderTargetPool *)&GRenderTargetPool,pFVar1,pFVar7,
             (TRefCountPtr<IPooledRenderTarget> *)(lVar9 + 0x78),L"SceneCaptureTarget");
  if ((void *)auStack_98._64_8_ != (void *)0x0) {
    FMemory::Free((void *)auStack_98._64_8_);
  }
  if (*(longlong *)(lVar9 + 0x78) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("RenderTarget",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneCaptureRendering.cpp"
                       ,0x77c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  this = *(FRHIResource **)(lVar9 + 0x80);
  this_00 = *(FRHIResource **)(*(longlong *)(lVar9 + 0x78) + 8);
  if (this != this_00) {
    *(FRHIResource **)(lVar9 + 0x80) = this_00;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_00);
    }
    if (this != (FRHIResource *)0x0) {
      FRHIResource::Release(this);
    }
  }
  pTVar8 = &TStack_1f0;
  lVar9 = 6;
  do {
    *(int *)(pTVar8 + -2) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_4_;
    *(undefined4 *)((longlong)(pTVar8 + -2) + 4) =
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._4_4_;
    *(int *)(pTVar8 + -1) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_4_;
    *(undefined4 *)((longlong)(pTVar8 + -1) + 4) =
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._4_4_;
    *(int *)pTVar8 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_4_;
    *(undefined4 *)((longlong)pTVar8 + 4) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._4_4_;
    pTVar8[-2]._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    pTVar8[-1]._s_0.Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    (pTVar8->_s_0).Z = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    *(undefined8 *)(pTVar8 + 1) = 0;
    *(undefined8 *)&pTVar8[1]._s_0.Z = 1;
    pTVar8[2]._s_0.Y = 0;
    pTVar8[2]._s_0.Z = 1;
    pTVar8 = pTVar8 + 5;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  TStack_208._s_0.X = *(int *)((longlong)param_1 + 0x10);
  TStack_208._s_0.Y = *(int *)((longlong)param_1 + 0x14);
  iStack_184 = TStack_208._s_0.X * 2;
  TStack_218.DataPtr = (FRHICopyTextureInfo *)&TStack_208;
  uStack_1fc = 0;
  uStack_1e0 = 0;
  uStack_1bc = 0;
  uStack_180 = 0;
  uStack_148 = 0;
  TStack_218._12_4_ = uStack_21c;
  TStack_218.ArrayNum = 6;
  uStack_1a4 = 1;
  uStack_168 = 2;
  uStack_12c = 3;
  uStack_f0 = 4;
  uStack_b4 = 5;
  iStack_1cc = TStack_208._s_0.X;
  iStack_1c8 = TStack_208._s_0.Y;
  iStack_1c0 = TStack_208._s_0.X;
  iStack_190 = TStack_208._s_0.X;
  iStack_18c = TStack_208._s_0.Y;
  iStack_154 = TStack_208._s_0.X;
  iStack_150 = TStack_208._s_0.Y;
  iStack_144 = TStack_208._s_0.Y;
  iStack_118 = TStack_208._s_0.X;
  iStack_114 = TStack_208._s_0.Y;
  iStack_10c = TStack_208._s_0.X;
  iStack_108 = TStack_208._s_0.Y;
  iStack_dc = TStack_208._s_0.X;
  iStack_d8 = TStack_208._s_0.Y;
  iStack_d0 = iStack_184;
  iStack_cc = TStack_208._s_0.Y;
  UpdateSceneCaptureContent_RenderThread
            (param_2,param_3->Renderer,param_3->SceneUpdateInputs,*(FRenderTarget **)param_1,
             *(FTexture **)((longlong)param_1 + 8),&TStack_218,*(bool *)((longlong)param_1 + 0x18),
             (FGenerateMipsParams *)((longlong)param_1 + 0x1c),true,false);
  return true;
}

// Call @ 145498e10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneRenderProcessor::Execute'::__l30::<lambda_4>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  FSceneRenderer *pFVar7;
  undefined8 *puVar8;
  code *pcVar9;
  TRefCountPtr<FBaseGraphTask> TVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  EShaderPlatform EVar14;
  uint uVar15;
  FRHIBreadcrumbAllocator *pFVar16;
  TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17,FString>_> *pTVar17;
  FRHIBreadcrumbNode *pFVar18;
  FRDGEventName *pFVar19;
  undefined8 uVar20;
  TRefCountPtr<FBaseGraphTask> TVar21;
  longlong *plVar22;
  uint uVar23;
  ulonglong uVar24;
  wchar_t *pwVar25;
  uint uVar26;
  undefined1 auStackY_9e8 [32];
  FLLMScope aFStack_9b8 [2];
  undefined8 uStack_9b0;
  int iStack_9a8;
  undefined4 uStack_9a4;
  undefined8 *puStack_9a0;
  FMemScope aFStack_998 [2];
  EShaderPlatform aEStack_988 [4];
  longlong lStack_980;
  undefined8 uStack_978;
  FGlobalShaderMap *pFStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined4 uStack_938;
  undefined4 uStack_934;
  char cStack_930;
  FSceneRenderer *pFStack_928;
  EShaderPlatform *pEStack_920;
  wchar_t *pwStack_918;
  wchar_t *pwStack_910;
  FRHIBreadcrumbScope FStack_908;
  char cStack_8f8;
  FRHIBreadcrumbScope FStack_8f0;
  char cStack_8e0;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> tStack_8d8;
  FRDGEventName FStack_8c8;
  code *apcStack_8a8 [2];
  undefined **ppuStack_898;
  FSceneRenderer *pFStack_890;
  undefined8 uStack_880;
  uint uStack_86c;
  undefined4 uStack_868;
  undefined4 uStack_864;
  uint uStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  FRDGEventName FStack_838;
  FRDGBuilder FStack_818;
  ulonglong uStack_48;
  
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_9e8;
  FLLMScope::FLLMScope(aFStack_9b8,SceneRender,false,None,Default,true);
  FMemScope::FMemScope(aFStack_998,SceneRender,true);
  FSceneRenderProcessor::FGroupEvent::Begin
            ((FGroupEvent *)(*(longlong *)param_1 + 0x90),
             *(FGroupNode **)(*(longlong *)param_1 + 0x88),(FRHICommandList *)param_2,
             SceneRenderCommand);
  lVar5 = *(longlong *)((longlong)param_1 + 8);
  lVar6 = *(longlong *)param_1;
  uVar24 = (ulonglong)_tls_index;
  cStack_8e0 = '\0';
  if (1 < *(int *)(lVar5 + 0x20)) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      uStack_868 = 0;
      uStack_864 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_86c);
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_SceneRender;
      ::Desc._padding_ = (longlong)u_SceneRender____;
      ::Desc._padding_._0_4_ = 0x347;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FSceneRenderProcessor::Execute'::__l30::<lambda_4>::operator()'::__l7::<lambda_2>::
             operator()<FString_&>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar16 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_2);
    pTVar17 = FRHIBreadcrumbAllocator::
              Alloc<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17,FString>_>,FRHIBreadcrumbAllocator_&,UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<17,FString>_const_&,FString_&>
                        (pFVar16,pFVar16,&::Desc,(FString *)(lVar5 + 0x18));
    FRHIBreadcrumbScope::FRHIBreadcrumbScope
              (&FStack_8f0,(FRHIComputeCommandList *)param_2,(FRHIBreadcrumbNode *)pTVar17);
    cStack_8e0 = '\x01';
  }
  cStack_8f8 = '\0';
  if (*(int *)(*(longlong *)((longlong)param_1 + 8) + 0x20) < 2) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar24 * 8) + 0x9d4c) <
         ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      uStack_848 = 0;
      uStack_844 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_84c);
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_SceneRender;
      ::Desc._padding_._0_4_ = 0x348;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FSceneRenderProcessor::Execute'::__l30::<lambda_4>::operator()'::__l12::<lambda_3>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    tStack_8d8._Myfirst._Val = &::Desc;
    pFVar16 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_2);
    pFVar18 = FRHIBreadcrumbAllocator::
              AllocBreadcrumb<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_>
                        (pFVar16,&tStack_8d8);
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&FStack_908,(FRHIComputeCommandList *)param_2,pFVar18);
    cStack_8f8 = '\x01';
  }
  pFVar7 = *(FSceneRenderer **)(*(longlong *)((longlong)param_1 + 8) + 0x10);
  FDeferredUpdateResource::UpdateResources(param_2);
  uVar26 = 0;
  if (1 < *(int *)(*(longlong *)((longlong)param_1 + 8) + 0x20)) {
    ::FString::AppendChars((FString *)(*(longlong *)param_1 + 0xb8),L"/",1);
    iVar3 = *(int *)(*(longlong *)((longlong)param_1 + 8) + 0x20);
    uVar15 = iVar3 - 1;
    if (iVar3 == 0) {
      uVar15 = uVar26;
    }
    ::FString::AppendChars
              ((FString *)(*(longlong *)param_1 + 0xb8),
               *(wchar_t **)(*(longlong *)((longlong)param_1 + 8) + 0x18),uVar15);
  }
  if (((*(int *)(*(longlong *)param_1 + 0x20) != 0) && (*(int *)(*(longlong *)param_1 + 0x20) < 1))
     && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
        bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar3 = *(int *)(*(longlong *)param_1 + 0x20);
  if (iVar3 != 0) {
    uVar15 = 0;
    if ((int)(iVar3 - 1U) < iVar3) {
      uVar15 = ~(iVar3 - 1U) >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  cStack_930 = '\0';
  pwVar25 = L"";
  if ((((pFVar7->ViewFamily)._padding_ & 0x200000) != 0) &&
     (plVar22 = *(longlong **)param_1, (char)plVar22[0x19] == '\0')) {
    cStack_930 = '\x01';
    aEStack_988[1] = 0;
    uStack_934 = 0;
    lStack_980 = *plVar22;
    uStack_978 = *(undefined8 *)(*plVar22 + 0x18);
    aEStack_988._4_4_ = *(undefined4 *)(*plVar22 + 8);
    aEStack_988[0] = FSceneInterface::GetShaderPlatform((FSceneInterface *)*plVar22);
    if ((cStack_930 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((cStack_930 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFStack_970 = GetGlobalShaderMap(aEStack_988[0]);
    if ((cStack_930 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uStack_9b0 = *(undefined8 *)(*(longlong *)param_1 + 0x18);
    iVar3 = *(int *)(*(longlong *)param_1 + 0x20);
    if ((iVar3 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iStack_9a8 = iVar3;
    if ((cStack_930 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uStack_960 = CONCAT44(uStack_9a4,iStack_9a8);
    uStack_968 = uStack_9b0;
    uStack_9b0 = *(undefined8 *)(*(longlong *)param_1 + 0x28);
    iVar3 = *(int *)(*(longlong *)param_1 + 0x30);
    if ((iVar3 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iStack_9a8 = iVar3;
    if ((cStack_930 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uStack_950 = CONCAT44(uStack_9a4,iStack_9a8);
    uStack_958 = uStack_9b0;
    uStack_9b0 = *(undefined8 *)(*(longlong *)param_1 + 0x38);
    iVar3 = *(int *)(*(longlong *)param_1 + 0x40);
    if ((iVar3 < 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iStack_9a8 = iVar3;
    if ((cStack_930 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uStack_940 = CONCAT44(uStack_9a4,iStack_9a8);
    uStack_948 = uStack_9b0;
    uStack_938 = *(undefined4 *)(*(longlong *)param_1 + 0x80);
    if ((cStack_930 == '\0') &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  puVar8 = *(undefined8 **)param_1;
  if (*(int *)(puVar8 + 0x18) == 0) {
    pwStack_910 = L"";
  }
  else {
    pwStack_910 = (wchar_t *)puVar8[0x17];
  }
  if (*(int *)(*(longlong *)((longlong)param_1 + 8) + 0x20) != 0) {
    pwVar25 = *(wchar_t **)(*(longlong *)((longlong)param_1 + 8) + 0x18);
  }
  pEStack_920 = aEStack_988;
  if (cStack_930 == '\0') {
    pEStack_920 = (EShaderPlatform *)0x0;
  }
  pFStack_928 = pFVar7;
  pwStack_918 = pwVar25;
  EVar14 = FSceneInterface::GetShaderPlatform((FSceneInterface *)*puVar8);
  pFVar19 = FRDGEventName::FRDGEventName(&FStack_838,L"%s");
  FStack_8c8.EventFormat = pFVar19->EventFormat;
  ::FString::FString(&FStack_8c8.FormattedEventName,&pFVar19->FormattedEventName);
  FRDGBuilder::FRDGBuilder(&FStack_818,param_2,&FStack_8c8,AllowParallelExecute,EVar14);
  if (FStack_838.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_838.FormattedEventName.Data.AllocatorInstance.Data);
  }
  FSceneRendererBase::SetActiveInstance(&FStack_818,(FSceneRendererBase *)pFVar7);
  if (*(char *)((longlong)&(pFVar7->ViewFamily)._padding_ + 5) != '\0') {
    FStack_818.bForceCopyCrossGPU = true;
  }
  if (((pFVar7->ViewFamily)._padding_ & 0x2000000000000000) == 0) {
    if ((*(int *)&pFVar7->field_0x18 < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    bVar11 = *(bool *)(*(longlong *)&pFVar7->field_0x10 + 0x11e8);
    if ((*(int *)&pFVar7->field_0x18 < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar15 = FSceneView::GetViewKey(*(FSceneView **)&pFVar7->field_0x10);
    FVisualizeTexture::BeginViewRenderThread
              ((FVisualizeTexture *)&GVisualizeTexture,*(Type *)(**(longlong **)param_1 + 8),uVar15,
               pwStack_910,bVar11);
  }
  bVar13 = 0;
  if (((pFVar7->ViewFamily)._padding_ & 0x200000) != 0) {
    lVar5 = *(longlong *)((longlong)param_1 + 8);
    CheckCallable(*(void **)(lVar5 + 0x30));
    pcVar9 = *(code **)(lVar5 + 0x30);
    plVar22 = (longlong *)(lVar5 + 0x40);
    if (*(longlong **)(lVar5 + 0x58) != (longlong *)0x0) {
      plVar22 = *(longlong **)(lVar5 + 0x58);
    }
    uVar20 = (**(code **)(*plVar22 + 8))();
    bVar13 = (*pcVar9)(uVar20,&FStack_818);
  }
  if (cStack_930 != '\0') {
    *(byte *)(*(longlong *)param_1 + 200) = *(byte *)(*(longlong *)param_1 + 200) | bVar13;
  }
  if (((pFVar7->ViewFamily)._padding_ & 0x2000000000000000) == 0) {
    FVisualizeTexture::EndViewRenderThread((FVisualizeTexture *)&GVisualizeTexture);
  }
  iVar3 = *(int *)(*(longlong *)((longlong)param_1 + 8) + 0x20);
  if (1 < iVar3) {
    iVar4 = *(int *)(*(longlong *)param_1 + 0xc0);
    uVar15 = iVar4 - 1;
    if (iVar4 == 0) {
      uVar15 = 0;
    }
    if ((int)(uVar15 - iVar3) < (int)uVar15) {
      uVar15 = uVar15 - iVar3;
    }
    uVar23 = uVar26;
    if (0 < (int)uVar15) {
      uVar23 = uVar15;
    }
    ::FString::RemoveAt((FString *)(*(longlong *)param_1 + 0xb8),uVar23,iVar3,No);
  }
  lVar5 = *(longlong *)param_1;
  uVar15 = *(int *)(lVar5 + 0x10) - 1;
  if ((int)uVar15 < *(int *)(lVar5 + 0x10)) {
    uVar26 = ~uVar15 >> 0x1f;
  }
  if ((uVar26 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if (*(longlong *)(*(longlong *)((longlong)param_1 + 8) + 0x10) ==
      *(longlong *)(*(longlong *)(lVar5 + 8) + -8 + (longlong)*(int *)(lVar5 + 0x10) * 8)) {
    FRDGBuilder::SetFlushResourcesRHI(&FStack_818);
  }
  FRDGBuilder::Execute(&FStack_818);
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId721,"Cleanup",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRenderBuilder.cpp"
               ,0x2d1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId721);
  }
  FUniformExpressionCacheAsyncUpdateScope::WaitForTask();
  if ((GIsRunningRHIInSeparateThread_InternalUseOnly == false) || (GSceneRenderCleanUpMode != 1)) {
    FSceneRenderProcessor::WaitForAsyncDeleteTask();
    FRHICommandListImmediate::ImmediateFlush(param_2,WaitForOutstandingTasksOnly,None);
    ViewSnapshotCache::Deallocate();
    CleanupSceneRenderer(pFVar7);
  }
  else {
    FGPUSceneDynamicContext::Release(&pFVar7->GPUSceneDynamicContext);
    if (FSceneRenderProcessor::AsyncTasks.Cleanup.Reference != (FBaseGraphTask *)0x0) {
      FBaseGraphTask::Wait
                (FSceneRenderProcessor::AsyncTasks.Cleanup.Reference,
                 (Type)ENamedThreads::FRenderThreadStatics::RenderThread_Local);
    }
    ViewSnapshotCache::Deallocate();
    uStack_880 = 0;
    ppuStack_898 = &TFunction_OwnedObject<`FSceneRenderProcessor::Cleanup'::`5'::<lambda_1>,1,0>::
                    _vftable_;
    apcStack_8a8[0] =
         TFunctionRefCaller<`FSceneRenderProcessor::Cleanup'::__l5::<lambda_1>,void>::Call;
    pFStack_890 = pFVar7;
    TVar21 = FFunctionGraphTask::CreateAndDispatchWhenReady
                       ((TUniqueFunction<void___cdecl(void)> *)&puStack_9a0,
                        (TStatIdData *)apcStack_8a8,
                        (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                         *)&TStatId::TStatId_NAME_None,0x54be5e98);
    TVar10 = FSceneRenderProcessor::AsyncTasks.Cleanup;
    if (TVar21.Reference != (FBaseGraphTask *)&FSceneRenderProcessor::AsyncTasks) {
                    /* WARNING: Load size is inaccurate */
      FSceneRenderProcessor::AsyncTasks.Cleanup.Reference = *TVar21.Reference;
      *(undefined8 *)TVar21.Reference = 0;
      if (TVar10.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &(TVar10.Reference)->field_0x30;
        iVar3 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)**(undefined8 **)TVar10.Reference)(TVar10.Reference,1);
        }
      }
    }
    if (puStack_9a0 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puStack_9a0 + 6);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar3 == 1) && (puStack_9a0 != (undefined8 *)0x0)) {
        (**(code **)*puStack_9a0)(puStack_9a0,1);
      }
    }
  }
  GlobalDynamicBuffer::GarbageCollect();
  FPrimitiveIdVertexBufferPool::DiscardAll
            ((FPrimitiveIdVertexBufferPool *)&GPrimitiveIdVertexBufferPool);
  FGraphicsMinimalPipelineStateId::ResetLocalPipelineIdTableSize();
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FRDGBuilder::~FRDGBuilder(&FStack_818);
  if (cStack_8f8 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&FStack_908);
  }
  if (cStack_8e0 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&FStack_8f0);
  }
  if (((-1 < RenderCommandsChannel->Enabled) && (*(char *)(lVar6 + 0xb0) != '\0')) &&
     (FRHIBreadcrumbEventManual::End
                ((FRHIBreadcrumbEventManual *)(lVar6 + 0x90),(FRHIComputeCommandList *)param_2),
     *(char *)(lVar6 + 0xb0) != '\0')) {
    if (((((FRHIBreadcrumbEventManual *)(lVar6 + 0x90))->Node).Node != (FRHIBreadcrumbNode *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Node",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                            ,0x10a,L"Manual breadcrumb was destructed before it was ended."), bVar11
       )) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(lVar6 + 0xa0));
    *(undefined1 *)(lVar6 + 0xb0) = 0;
  }
  FMemScope::~FMemScope(aFStack_998);
  FLLMScope::~FLLMScope(aFStack_9b8);
  return;
}

// Call @ 145498e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneRenderProcessor::Execute'::__l2::<lambda_5>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  code *pcVar3;
  TRefCountPtr<FBaseGraphTask> TVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar7;
  longlong lVar8;
  TRefCountPtr<FBaseGraphTask> TVar9;
  undefined1 auStack_d8 [32];
  FAsyncTasks *pFStack_b8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FStack_b0;
  longlong lStack_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  code *apcStack_78 [2];
  undefined **ppuStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined1 auStack_48 [40];
  int iStack_20;
  int iStack_1c;
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  uStack_88 = *(undefined8 *)param_1;
  if ((GIsRunningRHIInSeparateThread_InternalUseOnly) && (GSceneRenderCleanUpMode == 1)) {
    auStack_48._32_8_ = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    iStack_20 = 0;
    iStack_1c = 4;
    iVar6 = 0;
    if ((auStack_48 <
         (undefined1 *)((longlong)&FSceneRenderProcessor::AsyncTasks.Cleanup.Reference + 1)) &&
       (&FSceneRenderProcessor::AsyncTasks < (FAsyncTasks *)(auStack_48 + 0x20))) {
      uStack_98 = 8;
      FStack_b0 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48;
      lStack_a0 = 0;
      lStack_a8 = 4;
      pFStack_b8 = &FSceneRenderProcessor::AsyncTasks;
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = iStack_20;
      if (iStack_20 == iStack_1c) {
        iVar6 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                          (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)auStack_48,
                           &iStack_1c);
      }
    }
    iStack_20 = iVar6 + 1;
    FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48;
    if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48._32_8_ !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48._32_8_;
    }
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar7 + (longlong)iVar6 * 8))->Reference =
         (FBaseGraphTask *)0x0;
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar7 + (longlong)iVar6 * 8))->Reference =
         FSceneRenderProcessor::AsyncTasks.Cleanup.Reference;
    if (FSceneRenderProcessor::AsyncTasks.Cleanup.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(FSceneRenderProcessor::AsyncTasks.Cleanup.Reference)->field_0x30 =
           *(int *)&(FSceneRenderProcessor::AsyncTasks.Cleanup.Reference)->field_0x30 + 1;
      UNLOCK();
    }
    FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48;
    if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48._32_8_ !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48._32_8_;
    }
    if ((ulonglong)FVar7 < 0x1551301c9) {
      FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48;
      if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48._32_8_ !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48._32_8_;
      }
      if (&FSceneRenderProcessor::AsyncTasks.Delete <
          (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar7 + (longlong)iStack_1c * 8)) {
        lStack_a0 = (longlong)iStack_20;
        uStack_98 = 8;
        FStack_b0 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48;
        if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48._32_8_ !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FStack_b0 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48._32_8_;
        }
        pFStack_b8 = (FAsyncTasks *)0x1551301c8;
        lStack_a8 = (longlong)iStack_1c;
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    if (iStack_20 == iStack_1c) {
      iStack_20 = ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                            (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)auStack_48,
                             &iStack_1c);
    }
    FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48;
    if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48._32_8_ !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48._32_8_;
    }
    lVar8 = (longlong)iStack_20;
    iStack_20 = iStack_20 + 1;
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar7 + lVar8 * 8))->Reference =
         (FBaseGraphTask *)0x0;
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar7 + lVar8 * 8))->Reference =
         FSceneRenderProcessor::AsyncTasks.Delete.Reference;
    if (FSceneRenderProcessor::AsyncTasks.Delete.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(FSceneRenderProcessor::AsyncTasks.Delete.Reference)->field_0x30 =
           *(int *)&(FSceneRenderProcessor::AsyncTasks.Delete.Reference)->field_0x30 + 1;
      UNLOCK();
    }
    uStack_50 = 0;
    ppuStack_68 = &TFunction_OwnedObject<``FSceneRenderProcessor::Execute'::`2'::<lambda_5>::operator()'::`2'::<lambda_1>,1,0>
                   ::_vftable_;
    uStack_60 = uStack_88;
    pFStack_b8 = (FAsyncTasks *)CONCAT44(pFStack_b8._4_4_,0xff);
    apcStack_78[0] =
         TFunctionRefCaller<``FSceneRenderProcessor::Execute'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>,void>
         ::Call;
    TVar9 = FFunctionGraphTask::CreateAndDispatchWhenReady
                      ((TUniqueFunction<void___cdecl(void)> *)&puStack_80,(TStatIdData *)apcStack_78
                       ,(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                         *)&TStatId::TStatId_NAME_None,(Type)auStack_48);
    TVar4 = FSceneRenderProcessor::AsyncTasks.Delete;
    if (TVar9.Reference != (FBaseGraphTask *)&FSceneRenderProcessor::AsyncTasks.Delete) {
                    /* WARNING: Load size is inaccurate */
      FSceneRenderProcessor::AsyncTasks.Delete.Reference = *TVar9.Reference;
      *(undefined8 *)TVar9.Reference = 0;
      if (TVar4.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &(TVar4.Reference)->field_0x30;
        iVar6 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (*(code *)**(undefined8 **)TVar4.Reference)(TVar4.Reference,1);
        }
      }
    }
    if (puStack_80 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(puStack_80 + 6);
      iVar6 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar6 == 1) && (puStack_80 != (undefined8 *)0x0)) {
        (**(code **)*puStack_80)(puStack_80,1);
      }
    }
    FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48;
    if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48._32_8_ !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48._32_8_;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar7,iStack_20)
    ;
    if ((ForElementType<TRefCountPtr<FBaseGraphTask>_>)auStack_48._32_8_ !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)auStack_48._32_8_);
    }
  }
  else {
    ``FSceneRenderProcessor::Execute'::__l2::<lambda_5>::operator()'::__l2::<lambda_1>::operator()
              (&uStack_88);
  }
  return;
}

// Call @ 1454e39f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FRHICommandList_&),void,FRHICommandListImmediate_&>::Call
          (void *param_1,FRHICommandListImmediate *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001454e39f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2);
  return;
}

// Call @ 1454e3a00

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

bool __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<bool_(__cdecl*)(FRDGBuilder_&,FSceneRenderFunctionInputs_const_&),bool,FRDGBuilder_&,FSceneRenderFunctionInputs_const_&>
::Call(void *param_1,FRDGBuilder *param_2,FSceneRenderFunctionInputs *param_3)

{
  undefined1 uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001454e3a0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)param_1)(param_2,param_3);
  return (bool)uVar1;
}

// Call @ 1454e3a20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRendererModule::PostRenderAllViewports'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  if (*(FCoarseMeshStreamingManager **)param_1 != (FCoarseMeshStreamingManager *)0x0) {
    Nanite::FCoarseMeshStreamingManager::UpdateResourceStates
              (*(FCoarseMeshStreamingManager **)param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001454e3a48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*GRayTracingGeometryManager + 0x68))(GRayTracingGeometryManager,param_2);
  return;
}

// Call @ 1454e3a60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneViewState::SystemMemoryMirrorBackup'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  
  SystemMemoryForEachTexture
            (param_2,(FSceneViewStateSystemMemoryMirror *)**(undefined8 **)param_1,
             *(FSceneViewState **)((longlong)param_1 + 8),SystemMemoryBackupTextureBegin);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_2);
  FRHICommandListImmediate::FlushResources(param_2);
  lVar1 = **(longlong **)param_1;
  if (*(int *)(lVar1 + 0x5c) < 0) {
    DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
              (*(TRefCountPtr<IPooledRenderTarget> **)(lVar1 + 0x50),*(int *)(lVar1 + 0x58));
    *(undefined4 *)(lVar1 + 0x58) = 0;
    if (*(int *)(lVar1 + 0x5c) != 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(lVar1 + 0x50),0,(int *)(lVar1 + 0x5c));
    }
  }
  else {
    DestructItems<TRefCountPtr<IPooledRenderTarget>,int>
              (*(TRefCountPtr<IPooledRenderTarget> **)(lVar1 + 0x50),*(int *)(lVar1 + 0x58));
    *(undefined4 *)(lVar1 + 0x58) = 0;
  }
  SystemMemoryForEachTexture
            (param_2,(FSceneViewStateSystemMemoryMirror *)**(undefined8 **)param_1,
             *(FSceneViewState **)((longlong)param_1 + 8),SystemMemoryBackupTextureEnd);
  return;
}

// Call @ 1454e3a70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneViewState::SystemMemoryMirrorRestore'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  SystemMemoryForEachTexture
            (param_2,(FSceneViewStateSystemMemoryMirror *)**(undefined8 **)param_1,
             *(FSceneViewState **)((longlong)param_1 + 8),SystemMemoryRestoreTexture);
  return;
}

// Call @ 1454e3aa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneViewState::AddLumenSceneData'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  lVar2 = *(longlong *)param_1;
  puVar1 = (undefined8 *)((longlong)param_1 + 8);
  if ((*(undefined8 **)(lVar2 + 0x20) <= puVar1) &&
     (puVar1 < *(undefined8 **)(lVar2 + 0x20) + *(int *)(lVar2 + 0x2c))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = *(int *)(lVar2 + 0x28);
  if (iVar5 == *(int *)(lVar2 + 0x2c)) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar2 + 0x20),(int *)(lVar2 + 0x2c));
  }
  *(int *)(lVar2 + 0x28) = iVar5 + 1;
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + (longlong)iVar5 * 8) = *puVar1;
  return;
}

// Call @ 1454e3ab0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneViewState::RemoveLumenSceneData'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FLumenSceneData *this;
  longlong lVar1;
  code *pcVar2;
  FLumenSceneDataKey FVar3;
  bool bVar4;
  uint uVar5;
  FLumenSceneData **ppFVar6;
  uint uVar7;
  uint uVar8;
  FLumenSceneDataKey FStackX_8;
  
  uVar5 = (**(code **)(**(longlong **)param_1 + 0x70))();
  FStackX_8.GPUIndex = 0xffffffff;
  FStackX_8.ViewUniqueId = uVar5;
  FVar3 = FStackX_8;
  ppFVar6 = TMapBase<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
            ::Find((TMapBase<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
                    *)(*(longlong *)(*(longlong *)param_1 + 0x38) + 0x4508),FStackX_8);
  if (ppFVar6 == (FLumenSceneData **)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneViewState.cpp"
                       ,0x237,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this = *ppFVar6;
  if (this != (FLumenSceneData *)0x0) {
    FLumenSceneData::~FLumenSceneData(this);
    ::operator_delete(this,0xe68);
  }
  lVar1 = *(longlong *)(*(longlong *)param_1 + 0x38);
  if (*(int *)(lVar1 + 0x4510) != *(int *)(lVar1 + 0x453c)) {
    uVar8 = uVar5 + 1 ^ 0x7ffff;
    uVar5 = 0x9e3779ba - uVar8 ^ uVar8 << 8;
    uVar7 = (-1 - uVar8) - uVar5 ^ uVar5 >> 0xd;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar7 >> 0xc;
    uVar5 = (uVar5 - uVar8) - uVar7 ^ uVar8 << 0x10;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar5 >> 5;
    uVar8 = (uVar8 - uVar7) - uVar5 ^ uVar7 >> 3;
    uVar5 = (uVar5 - uVar8) - uVar7 ^ uVar8 << 10;
    FStackX_8 = FVar3;
    TSet<TTuple<FLumenSceneDataKey,FLumenSceneData_*>,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FLumenSceneDataKey>
              ((TSet<TTuple<FLumenSceneDataKey,FLumenSceneData_*>,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x4508),uVar5 >> 0xf ^ (uVar7 - uVar5) - uVar8,&FStackX_8);
  }
  return;
}

// Call @ 1454e3ac0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneRenderer::OnRenderBegin'::__l2::<lambda_2>,void,UE::Tasks::Private::FTaskHandle_const_&>
::Call(void *param_1,FTaskHandle *param_2)

{
  uint *puVar1;
  atomic<unsigned_int> *paVar2;
  int *piVar3;
  undefined8 *puVar4;
  atomic<bool> aVar5;
  atomic<unsigned_int> aVar6;
  int iVar7;
  FRDGScopeState *pFVar8;
  FName FVar9;
  longlong lVar10;
  FTaskBase *pFVar11;
  FTaskBase *this;
  code *pcVar12;
  float fVar13;
  int iVar14;
  int iVar15;
  FRDGTexture *pFVar16;
  bool bVar17;
  double dVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  FRDGScope *pFVar22;
  FName *pFVar23;
  FThreadSafeStaticStat<FStat_STAT_FDeferredShadingSceneRenderer_ViewExtensionPreRenderView> FVar24;
  FLensDistortionLUT *pFVar25;
  IVisibilityTaskData *pIVar26;
  undefined8 *puVar27;
  ulonglong uVar28;
  FLensDistortionLUT *pFVar29;
  undefined8 *puVar30;
  FViewInfo *pFVar31;
  undefined8 *puVar32;
  FViewInfo *pFVar33;
  undefined1 auStackX_18 [8];
  undefined1 auStackX_20 [8];
  bool abStack_1c8 [8];
  undefined1 auStack_1c0 [4];
  FColor_u_0 FStack_1bc;
  uint uStack_1b8;
  FName FStack_1b0;
  FName FStack_1a8;
  FName FStack_1a0;
  longlong lStack_190;
  FRDGScope *pFStack_188;
  FRDGScopeState *pFStack_180;
  FPaniniProjectionConfig FStack_178;
  undefined8 *puStack_170;
  FHairStrandsBookmarkParameters FStack_168;
  <lambda_1> <Stack_b8;
  FViewInfo **ppFStack_a8;
  int iStack_a0;
  undefined4 uStack_9c;
  FName aFStack_98 [2];
  TArrayView<FViewInfo_*_const,int> TStack_88;
  FLensDistortionLUT FStack_78;
  
  if ((FTaskBase *)**(undefined8 **)param_1 != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait((FTaskBase *)**(undefined8 **)param_1);
  }
  if ((FSceneRenderUpdateInputs *)**(undefined8 **)((longlong)param_1 + 8) !=
      (FSceneRenderUpdateInputs *)0x0) {
    RayTracing::OnRenderBegin((FSceneRenderUpdateInputs *)**(undefined8 **)((longlong)param_1 + 8));
    puVar27 = *(undefined8 **)(**(longlong **)((longlong)param_1 + 8) + 0x20);
    puVar32 = puVar27 + *(int *)(**(longlong **)((longlong)param_1 + 8) + 0x28);
    for (; puVar27 != puVar32; puVar27 = puVar27 + 1) {
      (**(code **)(*(longlong *)*puVar27 + 0x90))();
    }
  }
  if (*(int *)(*(longlong *)((longlong)param_1 + 0x10) + 0x1a8) == 0) goto LAB_1454dbe4b;
  pFVar8 = *(FRDGScopeState **)((longlong)param_1 + 0x18);
  pFStack_180 = pFVar8;
  pFVar22 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                      (&(pFVar8->Allocators).Root,(FRDGScope **)pFVar8);
  (pFVar8->ScopeState).Current = pFVar22;
  uVar28 = (ulonglong)(pFVar22->Impl).Impl.TypeIndex;
  pFStack_188 = pFVar22;
  if ((3 < uVar28) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar21)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar28])(&pFVar22->Impl);
  (pFVar22->Impl).Impl._padding_ = (longlong)"PreRender";
  FCsvProfiler::BeginExclusiveStat("PreRender",(char *)0x0);
  (pFVar22->Impl).Impl.TypeIndex = '\x03';
  if ((pFVar8->ScopeState).bImmediate != false) {
    FRDGScope::BeginCPU(pFVar22,(FRHIComputeCommandList *)pFVar8->RHICmdList,false);
    FRDGScope::BeginGPU(pFVar22,(FRHIComputeCommandList *)pFVar8->RHICmdList);
  }
  FVar24 = StatPtr_STAT_FDeferredShadingSceneRenderer_ViewExtensionPreRenderView;
  if (StatPtr_STAT_FDeferredShadingSceneRenderer_ViewExtensionPreRenderView ==
      (FThreadSafeStaticStat<FStat_STAT_FDeferredShadingSceneRenderer_ViewExtensionPreRenderView>)
      0x0) {
    pFVar23 = ::FName::FName(aFStack_98,
                             "STAT_FDeferredShadingSceneRenderer_ViewExtensionPreRenderView");
    FVar24 = (FThreadSafeStaticStat<FStat_STAT_FDeferredShadingSceneRenderer_ViewExtensionPreRenderView>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FDeferredShadingSceneRenderer_ViewExtensionPreRenderView,
                          *pFVar23,L"DeferredShadingSceneRenderer ViewExtensionPreRenderView",
                          "STATGROUP_SceneRendering","STATCAT_Advanced",L"Scene Rendering",true,true
                          ,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar24;
  bVar17 = false;
  bVar21 = false;
  FStack_1a0.ComparisonIndex.Value = 0;
  FStack_1a0.Number = 0;
  bVar20 = false;
  bVar19 = false;
  if ((FVar9.ComparisonIndex.Value.Value == 0) && (FVar9.Number == 0)) {
LAB_1454dbceb:
    bVar17 = bVar20;
    bVar21 = bVar19;
    bVar19 = false;
    FStack_1a8 = FStack_1a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      FStack_1bc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&FStack_1bc._s_0,(char *)*(FName *)((longlong)FVar24 + 0x10));
      bVar17 = false;
      bVar21 = true;
      bVar20 = false;
      bVar19 = true;
      if (-1 < CpuChannel->Enabled) {
        FStack_1b0.ComparisonIndex.Value = FVar9.ComparisonIndex.Value.Value;
        FStack_1b0.Number = FVar9.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&FStack_1b0,(wchar_t *)*(FName *)((longlong)FVar24 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneRendering.cpp"
                   ,0xfa2);
        bVar17 = true;
        bVar21 = true;
        bVar20 = true;
        bVar19 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1454dbceb;
    FStack_1a8 = FVar9;
    FThreadStats::AddMessage(FVar9,CycleScopeStart);
    bVar19 = true;
  }
  lStack_190 = *(longlong *)((longlong)param_1 + 0x10);
  uStack_1b8 = *(uint *)(lStack_190 + 0x1a8);
  uVar28 = (ulonglong)(int)uStack_1b8;
  puVar32 = *(undefined8 **)(lStack_190 + 0x1a0);
  puVar27 = puVar32 + uVar28 * 2;
  while( true ) {
    if (*(int *)(lStack_190 + 0x1a8) != (int)uVar28) {
      auStackX_18[0] = 0;
      `TCheckedPointerIterator<TSharedRef<ISceneViewExtension,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(auStackX_18);
    }
    FVar9 = FStack_1a8;
    if (puVar32 == puVar27) break;
    (**(code **)(*(longlong *)*puVar32 + 0x30))
              ((longlong *)*puVar32,*(undefined8 *)((longlong)param_1 + 0x18),
               *(longlong *)((longlong)param_1 + 0x10) + 0xb8);
    lVar10 = *(longlong *)((longlong)param_1 + 0x10);
    puVar30 = *(undefined8 **)(lVar10 + 0x3f0);
    iVar7 = *(int *)(lVar10 + 0x3f8);
    puVar4 = puVar30 + iVar7;
    while( true ) {
      if (*(int *)(lVar10 + 0x3f8) != iVar7) {
        auStackX_20[0] = 0;
        `TCheckedPointerIterator<FViewInfo_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStackX_20);
      }
      if (puVar30 == puVar4) break;
      (**(code **)(*(longlong *)*puVar32 + 0x38))
                ((longlong *)*puVar32,*(undefined8 *)((longlong)param_1 + 0x18),*puVar30);
      puVar30 = puVar30 + 1;
    }
    puVar32 = puVar32 + 2;
    uVar28 = (ulonglong)uStack_1b8;
  }
  if (bVar21) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar17) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(FVar9,CycleScopeEnd);
  }
  pFVar8 = pFStack_180;
  pFVar22 = pFStack_188;
  if (pFStack_188 != (FRDGScope *)0x0) {
    if ((pFStack_180->ScopeState).bImmediate != false) {
      FRDGScope::EndGPU(pFStack_188,(FRHIComputeCommandList *)pFStack_180->RHICmdList);
      <Stack_b8.RHICmdList = (FRHIComputeCommandList *)pFVar8->RHICmdList;
      <Stack_b8.bPreScope = abStack_1c8;
      abStack_1c8[0] = false;
      FRDGScope::TStorage<FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
      Dispatch<_FRDGScope::EndCPU_::__l2::<lambda_1>_>(&pFVar22->Impl,&<Stack_b8);
    }
    FRDGScope::ImmediateEnd(pFVar22,pFVar8);
    puVar1 = &(pFVar8->ScopeState).Mask;
    *puVar1 = *puVar1 & 0xfffffff7;
    (pFVar8->ScopeState).Current = ((pFVar8->ScopeState).Current)->Parent;
  }
LAB_1454dbe4b:
  lVar10 = **(longlong **)((longlong)param_1 + 8);
  if (lVar10 != 0) {
    puVar27 = *(undefined8 **)(lVar10 + 0x20);
    puVar32 = puVar27 + *(int *)(lVar10 + 0x28);
    for (; puVar27 != puVar32; puVar27 = puVar27 + 1) {
      FSceneRenderer::PrepareViewStateForVisibility
                ((FSceneRenderer *)*puVar27,
                 &(((FSceneRenderer *)*puVar27)->ViewFamily).SceneTexturesConfig);
    }
  }
  if (((*(uint *)(*(longlong *)((longlong)param_1 + 0x10) + 0x100) & 0x2000) != 0) &&
     (bVar21 = FPaniniProjectionConfig::IsEnabledByCVars(), bVar21)) {
    FStack_178 = FPaniniProjectionConfig::ReadCVars();
    dVar18 = __real_3ff0000000000000;
    lVar10 = *(longlong *)((longlong)param_1 + 0x10);
    pFVar31 = *(FViewInfo **)(lVar10 + 0x10);
    iVar7 = *(int *)(lVar10 + 0x18);
    pFVar29 = &pFVar31->LensDistortionLUT;
    pFVar33 = pFVar31 + iVar7;
    while( true ) {
      if (*(int *)(lVar10 + 0x18) != iVar7) {
        auStack_1c0[0] = 0;
        `TCheckedPointerIterator<FViewInfo,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (auStack_1c0);
      }
      if (pFVar31 == pFVar33) break;
      if (*(double *)((longlong)(pFVar29 + -0x117) + 8) <= dVar18 &&
          dVar18 != *(double *)((longlong)(pFVar29 + -0x117) + 8)) {
        pFVar25 = FPaniniProjectionConfig::GenerateLUTPasses
                            (&FStack_178,&FStack_78,*(FRDGBuilder **)((longlong)param_1 + 0x18),
                             pFVar31);
        pFVar16 = pFVar25->UndistortingDisplacementTexture;
        pFVar29->DistortingDisplacementTexture = pFVar25->DistortingDisplacementTexture;
        pFVar29->UndistortingDisplacementTexture = pFVar16;
        fVar13 = pFVar25->DistortionOverscan;
        iVar14 = (pFVar25->DistortionGridDimensions).field0_0x0._s_0.X;
        iVar15 = (pFVar25->DistortionGridDimensions).field0_0x0._s_0.Y;
        pFVar29->ResolutionFraction = pFVar25->ResolutionFraction;
        pFVar29->DistortionOverscan = fVar13;
        (pFVar29->DistortionGridDimensions).field0_0x0._s_0.X = iVar14;
        (pFVar29->DistortionGridDimensions).field0_0x0._s_0.Y = iVar15;
      }
      pFVar31 = pFVar31 + 1;
      pFVar29 = (FLensDistortionLUT *)((longlong)(pFVar29 + 0x14b) + 0x10);
    }
  }
  bVar21 = IsGroomEnabled();
  if (((bVar21) && (lVar10 = *(longlong *)((longlong)param_1 + 0x10), 0 < *(int *)(lVar10 + 0x18)))
     && ((*(uint *)(lVar10 + 0x10c) & 0x20000000) == 0)) {
    FStack_168.ViewUniqueID = 0xffffffff;
    FStack_168.ShaderPrintData = (FShaderPrintData *)0x0;
    FStack_168.ShaderMap = (FGlobalShaderMap *)0x0;
    FStack_168.Instances = (TArray<FHairStrandsInstance_*,TSizedDefaultAllocator<32>_> *)0x0;
    FStack_168.View = (FSceneView *)0x0;
    FStack_168.Scene = (FSceneInterface *)0x0;
    FStack_168.AllViews.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_168.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    FStack_168.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    FStack_168.CullingResults.VisibleInAnyViews_Strands.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    FStack_168.CullingResults.VisibleInAnyViews_Strands.ArrayNum = 0;
    FStack_168.CullingResults.VisibleInAnyViews_Strands.ArrayMax = 0;
    FStack_168.CullingResults.VisibleInAnyViews_CardsOrMeshes_Primary.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    FStack_168.CullingResults.VisibleInAnyViews_CardsOrMeshes_Primary.ArrayNum = 0;
    FStack_168.CullingResults.VisibleInAnyViews_CardsOrMeshes_Primary.ArrayMax = 0;
    FStack_168.CullingResults.VisibleInAnyViews_CardsOrMeshes_Shadow.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    FStack_168.CullingResults.VisibleInAnyViews_CardsOrMeshes_Shadow.ArrayNum = 0;
    FStack_168.CullingResults.VisibleInAnyViews_CardsOrMeshes_Shadow.ArrayMax = 0;
    FStack_168.CullingResults.InstancesVisibilityType.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    FStack_168.CullingResults.InstancesVisibilityType.ArrayNum = 0;
    FStack_168.CullingResults.InstancesVisibilityType.ArrayMax = 0;
    FStack_168.TransientResources = (FHairTransientResources *)0x0;
    FStack_168.AllViews.ArrayNum = 0;
    FStack_168.AllViews.ArrayMax = 0;
    FStack_168.SceneColorTexture = (FRDGTexture *)0x0;
    FStack_168.SceneDepthTexture = (FRDGTexture *)0x0;
    ppFStack_a8 = *(FViewInfo ***)(lVar10 + 0x3f0);
    iVar7 = *(int *)(lVar10 + 0x3f8);
    if ((iVar7 < 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar21)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    TStack_88._12_4_ = uStack_9c;
    TStack_88.ArrayNum = iVar7;
    TStack_88.DataPtr = ppFStack_a8;
    iStack_a0 = iVar7;
    CreateHairStrandsBookmarkParameters
              (*(FScene **)(*(longlong *)((longlong)param_1 + 0x10) + 8),
               (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)
               (*(longlong *)((longlong)param_1 + 0x10) + 0x10),&TStack_88,&FStack_168,false);
    if ((FStack_168.Instances != (TArray<FHairStrandsInstance_*,TSizedDefaultAllocator<32>_> *)0x0)
       && (0 < (FStack_168.Instances)->ArrayNum)) {
      RunHairStrandsBookmark
                (*(FRDGBuilder **)((longlong)param_1 + 0x18),ProcessLODSelection,&FStack_168);
    }
    if (FStack_168.AllViews.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_168.AllViews.AllocatorInstance.Data);
    }
    if (FStack_168.CullingResults.InstancesVisibilityType.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_168.CullingResults.InstancesVisibilityType.AllocatorInstance.Data);
    }
    if (FStack_168.CullingResults.VisibleInAnyViews_CardsOrMeshes_Shadow.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_168.CullingResults.VisibleInAnyViews_CardsOrMeshes_Shadow.
                    AllocatorInstance.Data);
    }
    if (FStack_168.CullingResults.VisibleInAnyViews_CardsOrMeshes_Primary.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_168.CullingResults.VisibleInAnyViews_CardsOrMeshes_Primary.
                    AllocatorInstance.Data);
    }
    if (FStack_168.CullingResults.VisibleInAnyViews_Strands.AllocatorInstance.Data !=
        (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_168.CullingResults.VisibleInAnyViews_Strands.AllocatorInstance.Data);
    }
  }
  lVar10 = *(longlong *)((longlong)param_1 + 0x10);
  if ((*(int *)(lVar10 + 0x18) < 1) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar21)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  if ((*(char *)(*(longlong *)(lVar10 + 0x10) + 0x11e8) == '\0') ||
     (((*(int *)(lVar10 + 0x184) != 4 && (*(int *)(lVar10 + 0x184) != 5)) ||
      (GSceneCaptureDepthPrepassOptimization == 0)))) {
    lVar10 = *(longlong *)((longlong)param_1 + 0x10);
    LightFunctionAtlas::OnRenderBegin
              ((FLightFunctionAtlas *)(lVar10 + 0x990),*(FScene **)(lVar10 + 8),
               (TArray<FViewInfo,TSizedDefaultAllocator<32>_> *)(lVar10 + 0x10),
               (FViewFamilyInfo *)(lVar10 + 0xb8));
  }
  pIVar26 = LaunchVisibilityTasks
                      (*(FRHICommandListImmediate **)
                        (*(longlong *)((longlong)param_1 + 0x18) + 0xc0),
                       *(FSceneRenderer **)((longlong)param_1 + 0x10),param_2);
  **(undefined8 **)((longlong)param_1 + 0x20) = pIVar26;
  if (*(char *)(*(longlong *)((longlong)param_1 + 0x18) + 0x550) != '\0') {
    puVar32 = *(undefined8 **)((longlong)param_1 + 0x28);
    puVar27 = (undefined8 *)
              (**(code **)(*(longlong *)**(undefined8 **)((longlong)param_1 + 0x20) + 0x38))
                        ((longlong *)**(undefined8 **)((longlong)param_1 + 0x20),&puStack_170);
    pFVar11 = (FTaskBase *)*puVar32;
    this = (FTaskBase *)*puVar27;
    if (this != (FTaskBase *)0x0) {
      if (((pFVar11->NumLocks == (atomic<unsigned_int>)0x0) ||
          (0x7fffffff < (uint)pFVar11->NumLocks)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumLocks.load(std::memory_order_relaxed) >= NumInitialLocks && NumLocks.load(std::memory_order_relaxed) < ExecutionFlag"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                              ,0xe3,L"Prerequisites can be added only before the task is launched"),
         bVar21)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      LOCK();
      paVar2 = &pFVar11->NumLocks;
      aVar6 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + 1);
      UNLOCK();
      if ((0x7fffffff < (int)aVar6 + 1U) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("PrevNumLocks + 1 < ExecutionFlag",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                              ,0xea,L"Max number of task prerequisites reached: %d"), bVar21)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      bVar21 = Tasks::Private::FTaskBase::AddSubsequent(this,pFVar11);
      if (bVar21) {
        LOCK();
        this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
        UNLOCK();
        Tasks::Private::FTaskBase::
        FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                  (&pFVar11->Prerequisites,this);
      }
      else {
        LOCK();
        pFVar11->NumLocks = (atomic<unsigned_int>)((int)pFVar11->NumLocks + -1);
        UNLOCK();
      }
    }
    if (puStack_170 != (undefined8 *)0x0) {
      LOCK();
      piVar3 = (int *)(puStack_170 + 6);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)*puStack_170)(puStack_170,1);
      }
    }
  }
  lVar10 = **(longlong **)((longlong)param_1 + 0x28);
  if ((lVar10 != 0) && (*(char *)(lVar10 + 0xd0) == '\0')) {
    pFVar11 = (FTaskBase *)**(longlong **)((longlong)param_1 + 0x28);
    LOCK();
    aVar5 = pFVar11->TaskTriggered;
    pFVar11->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar5 == (atomic<bool>)0x0) {
      LOCK();
      pFVar11->RefCount = (atomic<unsigned_int>)((int)pFVar11->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(pFVar11,0xd8);
    }
  }
  return;
}

// Call @ 1454e3ad0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneViewState::AddLumenSceneData'::__l18::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *pcVar1;
  FLumenSceneDataKey FVar2;
  bool bVar3;
  FLumenSceneData **ppFVar4;
  uint auStackX_18 [4];
  uint *puStack_18;
  undefined8 *puStack_10;
  
  FLumenSceneData::CopyInitialData
            (*(FLumenSceneData **)((longlong)param_1 + 8),
             *(FLumenSceneData **)(*(longlong *)(*(longlong *)param_1 + 0x38) + 0x4500));
  auStackX_18[0] = (**(code **)(**(longlong **)param_1 + 0x70))();
  auStackX_18[1] = 0xffffffff;
  FVar2.GPUIndex = 0xffffffff;
  FVar2.ViewUniqueId = auStackX_18[0];
  ppFVar4 = TMapBase<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
            ::Find((TMapBase<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
                    *)(*(longlong *)(*(longlong *)param_1 + 0x38) + 0x4508),FVar2);
  if (ppFVar4 != (FLumenSceneData **)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Scene->PerViewOrGPULumenSceneData.Find(ByViewKey) == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneViewState.cpp"
                       ,0x213,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  puStack_18 = auStackX_18;
  puStack_10 = (undefined8 *)((longlong)param_1 + 8);
  TSet<TTuple<FLumenSceneDataKey,FLumenSceneData_*>,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FLumenSceneDataKey_&,FLumenSceneData_*_const_&>_>
            ((TSet<TTuple<FLumenSceneDataKey,FLumenSceneData_*>,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>,FDefaultSetAllocator>
              *)(*(longlong *)(*(longlong *)param_1 + 0x38) + 0x4508),
             (TPairInitializer<FLumenSceneDataKey_&,FLumenSceneData_*_const_&> *)&stack0x00000008,
             (bool *)&puStack_18);
  return;
}

// Call @ 1454e3ae0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneViewState::AddLumenSceneData'::__l22::<lambda_3>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  code *pcVar1;
  FLumenSceneDataKey FVar2;
  bool bVar3;
  uint uVar4;
  FLumenSceneData **ppFVar5;
  float fVar6;
  
  uVar4 = (**(code **)(**(longlong **)param_1 + 0x70))();
  FVar2.GPUIndex = 0xffffffff;
  FVar2.ViewUniqueId = uVar4;
  ppFVar5 = TMapBase<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
            ::Find((TMapBase<FLumenSceneDataKey,FLumenSceneData_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FLumenSceneDataKey,FLumenSceneData_*,0>_>
                    *)(*(longlong *)(*(longlong *)param_1 + 0x38) + 0x4508),FVar2);
  if (ppFVar5 == (FLumenSceneData **)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneViewState.cpp"
                       ,0x222,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar6 = *(float *)((longlong)param_1 + 8);
  if (__real_3f800000 <= *(float *)((longlong)param_1 + 8)) {
    fVar6 = __real_3f800000;
  }
  if (fVar6 <= __real_3f000000) {
    fVar6 = __real_3f000000;
  }
  (*ppFVar5)->SurfaceCacheResolution = fVar6;
  return;
}

// Call @ 1454e3af0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRendererModule::BeginRenderingViewFamilies'::__l94::<lambda_3>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  double dVar1;
  LARGE_INTEGER aLStackX_8 [4];
  
  QueryPerformanceCounter(aLStackX_8);
  dVar1 = (double)(ulonglong)(aLStackX_8[0].QuadPart - *(longlong *)param_1) *
          FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000;
  if (__CsvProfilerStat5163 == false) {
    FCsvProfilerTrace::OutputInlineStat("DrawSceneCommand_StartDelay",0);
    __CsvProfilerStat5163 = true;
  }
  FCsvProfiler::RecordCustomStat("DrawSceneCommand_StartDelay",0,(float)dVar1,Set);
  return;
}

// Call @ 1454e3b00

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRendererModule::BeginRenderingViewFamilies'::__l94::<lambda_5>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int iVar1;
  FSceneRenderer **ppFVar2;
  code *pcVar3;
  bool bVar4;
  undefined4 uStack_1c;
  TArrayView<FSceneRenderer_*_const,int> local_18;
  
  ppFVar2 = *(FSceneRenderer ***)param_1;
  iVar1 = *(int *)((longlong)param_1 + 8);
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
  local_18._12_4_ = uStack_1c;
  local_18.ArrayNum = iVar1;
  local_18.DataPtr = ppFVar2;
  CleanupViewFamilies_RenderThread(param_2,&local_18);
  return;
}

// Call @ 1454e3b70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneRenderer::OnRenderFinish'::__l2::<lambda_6>,void>::Call(void *param_1)

{
  if (GDumpMeshDrawCommandMemoryStats != 0) {
    GDumpMeshDrawCommandMemoryStats = 0;
    FScene::DumpMeshDrawCommandMemoryStats(*(FScene **)(*(longlong *)param_1 + 8));
    return;
  }
  return;
}

// Call @ 1454e3ba0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneRenderer::OnRenderFinish'::__l2::<lambda_7>,void>::Call(void *param_1)

{
  FRayTracingScene::Reset((FRayTracingScene *)(*(longlong *)(*(longlong *)param_1 + 8) + 0x3920));
  return;
}

// Call @ 14552af70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FDynamicMeshElementContext::LaunchRenderThreadTask'::__l2::<lambda_1>,void>::
Call(void *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  FDynamicMeshElementContext *this;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  undefined1 auStackX_8 [8];
  
  puVar7 = *(uint **)((longlong)param_1 + 8);
  iVar2 = *(int *)((longlong)param_1 + 0x10);
  puVar1 = puVar7 + iVar2;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x10) != iVar2) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<FDynamicPrimitiveIndex_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (puVar7 == puVar1) break;
    uVar3 = *puVar7;
    this = *(FDynamicMeshElementContext **)param_1;
    uVar6 = uVar3 & 0xffffff;
    if ((this->Primitives).ArrayNum <= (int)uVar6) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FDynamicMeshElementContext::GatherDynamicMeshElementsForPrimitive
              (this,(this->Primitives).DataPtr[uVar6],(uchar)(uVar3 >> 0x18));
    puVar7 = puVar7 + 1;
  }
  return;
}

// Call @ 14552af80

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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVisibilityTaskData::LaunchVisibilityTasks'::__l19::<lambda_1>,void,FDynamicPrimitiveIndexList_&&>
::Call(void *param_1,FDynamicPrimitiveIndexList *param_2)

{
  FVisibilityTaskData::GatherDynamicMeshElements(*(FVisibilityTaskData **)param_1,param_2);
  return;
}

// Call @ 14552af90

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FComputeAndMarkRelevance::Finalize'::__l12::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FComputeAndMarkRelevance::Finalize'::__l12::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14552afa0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_1>,void,FPrimitiveRange_&&>
::Call(void *param_1,FPrimitiveRange *param_2)

{
  `FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14552afb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVisibilityTaskData::LaunchVisibilityTasks'::__l19::<lambda_2>,void>::Call
          (void *param_1)

{
  atomic<bool> aVar1;
  FTaskBase *pFVar2;
  longlong lVar3;
  
  pFVar2 = *(FTaskBase **)(*(longlong *)param_1 + 0x20a0);
  if (pFVar2->ExtendedPriority == TaskEvent) {
    LOCK();
    pFVar2->RefCount = (atomic<unsigned_int>)((int)pFVar2->RefCount + 1);
    UNLOCK();
  }
  Tasks::Private::FTaskBase::TryLaunch(pFVar2,0);
  lVar3 = *(longlong *)(*(longlong *)param_1 + 0x20e0);
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0xd0) == '\0')) {
    pFVar2 = *(FTaskBase **)(*(longlong *)param_1 + 0x20e0);
    LOCK();
    aVar1 = pFVar2->TaskTriggered;
    pFVar2->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar1 == (atomic<bool>)0x0) {
      LOCK();
      pFVar2->RefCount = (atomic<unsigned_int>)((int)pFVar2->RefCount + 1);
      UNLOCK();
      Tasks::Private::FTaskBase::TryLaunch(pFVar2,0xd8);
      return;
    }
  }
  return;
}

// Call @ 14552b030

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_2>,void>::Call
          (void *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<bool> aVar2;
  atomic<unsigned_int> aVar3;
  ETaskPriority EVar4;
  longlong lVar5;
  FTaskBase *pFVar6;
  
  lVar5 = *(longlong *)param_1;
  if (*(FGPUOcclusionParallel **)(lVar5 + 0x68) == (FGPUOcclusionParallel *)0x0) {
    TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::
    ReleaseNumCommands((TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                        *)(lVar5 + 0x140),1);
    lVar5 = *(longlong *)(*(longlong *)param_1 + 0x210);
    if ((lVar5 != 0) && (*(char *)(lVar5 + 0xd0) == '\0')) {
      pFVar6 = *(FTaskBase **)(*(longlong *)param_1 + 0x210);
      LOCK();
      aVar2 = pFVar6->TaskTriggered;
      pFVar6->TaskTriggered = (atomic<bool>)0x1;
      UNLOCK();
      if (aVar2 == (atomic<bool>)0x0) {
        LOCK();
        pFVar6->RefCount = (atomic<unsigned_int>)((int)pFVar6->RefCount + 1);
        UNLOCK();
        Tasks::Private::FTaskBase::TryLaunch(pFVar6,0xd8);
      }
    }
  }
  else {
    FGPUOcclusionParallel::Finish
              (*(FGPUOcclusionParallel **)(lVar5 + 0x68),(FTaskEvent *)(lVar5 + 0x210));
    lVar5 = *(longlong *)param_1;
    EVar4 = *(ETaskPriority *)(*(longlong *)(lVar5 + 8) + 0x39);
    pFVar6 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                         *)&Tasks::Private::SmallTaskAllocator);
    if (pFVar6 == (FTaskBase *)0x0) {
      pFVar6 = (FTaskBase *)0x0;
    }
    else {
      Tasks::Private::FTaskBase::FTaskBase(pFVar6,2,true);
      pFVar6->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTaskBase<``FVisibilityViewPacket::FVisibilityViewPacket'::`13'::<lambda_2>::operator()'::`5'::<lambda_1>,void,void>
            ::_vftable_;
      Tasks::Private::FTaskBase::Init
                (pFVar6,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp(3732)"
                 ,EVar4,None,None);
      pFVar6[1]._padding_ = lVar5;
      pFVar6->_padding_ =
           (longlong)
           &Tasks::Private::
            TExecutableTask<``FVisibilityViewPacket::FVisibilityViewPacket'::`13'::<lambda_2>::operator()'::`5'::<lambda_1>_>
            ::_vftable_;
    }
    if (*(FTaskBase **)(lVar5 + 0x210) != (FTaskBase *)0x0) {
      Tasks::Private::FTaskBase::AddPrerequisites(pFVar6,*(FTaskBase **)(lVar5 + 0x210));
    }
    Tasks::Private::FTaskBase::TryLaunch(pFVar6,0x100);
    if (pFVar6 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar6->RefCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014552419c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)pFVar6->_padding_)(pFVar6,1);
        return;
      }
    }
  }
  return;
}

// Call @ 14552b040

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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_3>,void,TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&&>
::Call(void *param_1,
      TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *param_2)

{
  FComputeAndMarkRelevance::AddPrimitives
            (*(FComputeAndMarkRelevance **)(*(longlong *)param_1 + 0x130),param_2);
  return;
}

// Call @ 14552b060

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVisibilityViewPacket::BeginInitVisibility'::__l43::<lambda_4>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FVisibilityViewPacket::BeginInitVisibility'::__l43::<lambda_4>::operator()(param_1,*param_2);
  return;
}

// Call @ 14552b070

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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVisibilityViewPacket::FVisibilityViewPacket'::__l13::<lambda_4>,void>::Call
          (void *param_1)

{
  FComputeAndMarkRelevance::Finish
            (*(FComputeAndMarkRelevance **)(*(longlong *)param_1 + 0x130),
             (FTaskEvent *)(*(longlong *)param_1 + 0x218));
  if (*(TCommandPipe<FDynamicPrimitiveIndexList> **)(**(longlong **)param_1 + 0x58) !=
      (TCommandPipe<FDynamicPrimitiveIndexList> *)0x0) {
    TCommandPipe<FDynamicPrimitiveIndexList>::ReleaseNumCommands
              (*(TCommandPipe<FDynamicPrimitiveIndexList> **)(**(longlong **)param_1 + 0x58),1);
    return;
  }
  return;
}

// Call @ 14552b0c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVisibilityViewPacket::BeginInitVisibility'::__l43::<lambda_5>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FVisibilityViewPacket::BeginInitVisibility'::__l43::<lambda_5>::operator()(param_1,*param_2);
  return;
}

// Call @ 145583900

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FProjectedShadowInfo::RenderDepth'::__l27::<lambda_2>::operator()'::__l2::<lambda_1>,void,FRHICommandList_&>
::Call(void *param_1,FRHICommandList *param_2)

{
  FProjectedShadowInfo::SetStateForView
            (*(FProjectedShadowInfo **)param_1,param_2,*(bool *)((longlong)param_1 + 8));
  return;
}

// Call @ 145583920

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``RenderShadowDepthAtlasNanite'::__l2::<lambda_1>::operator()'::__l5::<lambda_1>,void,TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
::Call(void *param_1,
      TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
      *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  FProjectedShadowInfo *this;
  FLightSceneInfo *pFVar6;
  undefined1 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  float fVar10;
  TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar11;
  undefined8 *puVar12;
  FPackedView *pFVar13;
  bool bVar14;
  uint uVar15;
  int iVar16;
  FViewMatrices *_Src;
  int *piVar17;
  FPackedView *pFVar18;
  FPackedView *pFVar19;
  FPackedView *pFVar20;
  ulonglong uVar21;
  undefined1 *puVar22;
  longlong lVar23;
  undefined8 *puVar24;
  int *_Src_00;
  int iVar25;
  uint uVar26;
  bool bVar27;
  undefined1 auStackY_22e8 [32];
  undefined1 auStack_2297 [3];
  uint uStack_2294;
  FPersistentShadowStateKey FStack_2290;
  void *pvStack_2280;
  uint uStack_2278;
  uint uStack_2274;
  int iStack_2270;
  int iStack_226c;
  int iStack_2268;
  int iStack_2264;
  int iStack_2260;
  int iStack_225c;
  TRefCountPtr<IPooledRenderTarget> TStack_2258;
  TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTStack_2250;
  longlong *plStack_2248;
  undefined8 *puStack_2240;
  FPackedView FStack_2238;
  FPackedViewParams FStack_1e68;
  FPackedView FStack_ca8;
  FViewMatrices FStack_8d8;
  ulonglong uStack_58;
  
  uStack_58 = __security_cookie.value ^ (ulonglong)auStackY_22e8;
  bVar27 = -1 < CpuChannel->Enabled;
  pvStack_2280 = param_1;
  pTStack_2250 = param_2;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1413,"CreateShadowDepthAtlasNanitePackedViews",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowDepthRendering.cpp"
               ,0x585);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1413);
  }
  fVar10 = __real_3f800000;
  plStack_2248 = *(longlong **)param_1;
  uStack_2294 = *(uint *)(plStack_2248 + 1);
  uVar21 = (ulonglong)(int)uStack_2294;
  puVar24 = (undefined8 *)*plStack_2248;
  puStack_2240 = puVar24 + uVar21;
  do {
    puVar12 = puStack_2240;
    if ((int)plStack_2248[1] != (int)uVar21) {
      auStack_2297[0] = 0;
      `TCheckedPointerIterator<FProjectedShadowInfo_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStack_2297);
    }
    if (puVar24 == puVar12) {
      if (bVar27) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    this = (FProjectedShadowInfo *)*puVar24;
    FViewMatrices::FViewMatrices(&FStack_1e68.ViewMatrices);
    FViewMatrices::FViewMatrices(&FStack_1e68.PrevViewMatrices);
    FStack_1e68.StreamingPriorityCategory = 0;
    FStack_1e68.MinBoundsRadius = 0.0;
    FStack_1e68.ViewRect.field0_0x0._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    FStack_1e68.ViewRect.field0_0x0._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    FStack_1e68.HZBTestViewRect.field0_0x0._s_0.Min.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    FStack_1e68.HZBTestViewRect.field0_0x0._s_0.Max.field0_0x0 =
         (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
    FStack_1e68.LODScaleFactor = 1.0;
    FStack_1e68.ViewLODDistanceFactor = 1.0;
    FStack_1e68.CullingViewOrigin.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    FStack_1e68.CullingViewOrigin.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    FStack_1e68.Flags = 2;
    FStack_1e68.CullingViewOrigin.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    FStack_1e68.GlobalClippingPlane._padding_ = 0;
    FStack_1e68.GlobalClippingPlane._padding_ = 0;
    FStack_1e68.TargetLayerIndex = -1;
    FStack_1e68.PrevTargetLayerIndex = -1;
    FStack_1e68.TargetMipLevel = 0;
    FStack_1e68.TargetMipCount = 1;
    FStack_1e68.RangeBasedCullingDistance = 0.0;
    FStack_1e68.MaxPixelsPerEdgeMultipler = 1.0;
    FStack_1e68.bUseCullingViewOverrides = false;
    FStack_1e68.CullingViewScreenMultipleSq = 0.0;
    FStack_1e68.CullingViewMinRadiusTestFactorSq = 0.0;
    FStack_1e68.GlobalClippingPlane._padding_ = 0;
    FStack_1e68.GlobalClippingPlane.W = 0.0;
    FStack_1e68.InstanceOcclusionQueryMask = 0;
    FStack_1e68.LightingChannelMask = 7;
    FStack_1e68.bUseLightingChannelMask = false;
    FStack_1e68.bUseCurrentPreTranslationForHZB = false;
    FStack_1e68.SceneRendererPrimaryViewId = -1;
    FStack_1e68.DynamicDepthCullRange.field0_0x0._s_0.X = 0.0;
    FStack_1e68.DynamicDepthCullRange.field0_0x0._s_0.Y = 3.4028235e+38;
    _Src = FProjectedShadowInfo::GetShadowDepthRenderingViewMatrices(this,&FStack_8d8,-1,false);
    memcpy(&FStack_1e68,_Src,0x880);
    uVar26 = this->X;
    uVar15 = this->Y;
    FStack_1e68.ViewRect.field0_0x0._0_4_ = this->X;
    FStack_1e68.ViewRect.field0_0x0._4_4_ = this->Y;
    uVar1 = this->ResolutionX;
    uVar2 = this->BorderSize;
    uVar3 = this->ResolutionY;
    iStack_2270 = uVar1 + uVar26 + uVar2 * 2;
    iStack_226c = uVar3 + uVar15 + uVar2 * 2;
    FStack_1e68.ViewRect.field0_0x0._12_4_ = iStack_226c;
    FStack_1e68.ViewRect.field0_0x0._8_4_ = iStack_2270;
    FStack_1e68.RasterContextSize.field0_0x0 = *(TIntPoint<int>_u_0 *)((longlong)pvStack_2280 + 8);
    uStack_2278 = uVar26;
    uStack_2274 = uVar15;
    memcpy(&FStack_1e68.PrevViewMatrices,&FStack_1e68,0x880);
    iStack_2268 = uVar2 + uVar26;
    iStack_2264 = uVar2 + uVar15;
    iStack_2260 = uVar2 + uVar1 + uVar26;
    iStack_225c = uVar3 + uVar2 + uVar15;
    FStack_1e68.HZBTestViewRect.field0_0x0._4_4_ = iStack_2264;
    FStack_1e68.HZBTestViewRect.field0_0x0._0_4_ = iStack_2268;
    FStack_1e68.HZBTestViewRect.field0_0x0._12_4_ = iStack_225c;
    FStack_1e68.HZBTestViewRect.field0_0x0._8_4_ = iStack_2260;
    FStack_1e68.MaxPixelsPerEdgeMultipler =
         FShadowSceneRenderer::ComputeNaniteShadowsLODScaleFactor();
    FStack_1e68.MaxPixelsPerEdgeMultipler = fVar10 / FStack_1e68.MaxPixelsPerEdgeMultipler;
    if (((((char)(this->bWholeSceneShadow << 7) < '\0') &&
         (-1 < (this->CascadeSettings).ShadowSplitIndex)) && (this->bDirectionalLight != 0)) ||
       ((this->bPreShadow != 0 && (this->bDirectionalLight != 0)))) {
      FStack_1e68.Flags = 0;
      uVar26 = 1;
    }
    else {
      FStack_1e68.Flags = 2;
      uVar26 = 3;
    }
    pFVar6 = this->LightSceneInfo;
    if (pFVar6->Proxy != (FLightSceneProxy *)0x0) {
      FStack_1e68.bUseLightingChannelMask = true;
      FStack_1e68.LightingChannelMask = (uint)pFVar6->Proxy->LightingChannelMask;
    }
    iVar16 = this->ProjectionIndex;
    iVar4 = this->SubjectPrimitiveComponentIndex;
    iVar5 = *(int *)((longlong)pvStack_2280 + 0x10);
    FStack_2290.AtlasIndex = iVar5;
    FStack_2290.ProjectionId = iVar16;
    FStack_2290.SubjectPrimitiveComponentIndex = iVar4;
    uVar15 = ::GetTypeHash(&FStack_2290);
    if (*(int *)&(pFVar6->PrevPersistentShadows).field_0x8 !=
        *(int *)&(pFVar6->PrevPersistentShadows).field_0x34) {
      puVar7 = *(undefined1 **)&(pFVar6->PrevPersistentShadows).field_0x40;
      puVar22 = &(pFVar6->PrevPersistentShadows).field_0x38;
      if (puVar7 != (undefined1 *)0x0) {
        puVar22 = puVar7;
      }
      iVar25 = *(int *)(puVar22 +
                       (ulonglong)
                       (*(int *)&(pFVar6->PrevPersistentShadows).field_0x48 - 1U & uVar15) * 4);
      if (iVar25 != -1) {
        do {
          piVar17 = (int *)((longlong)iVar25 * 0x8c0 + *(longlong *)&pFVar6->PrevPersistentShadows);
          if (((*piVar17 == iVar5) && (piVar17[1] == iVar16)) && (piVar17[2] == iVar4)) {
            if (iVar25 != -1) {
              _Src_00 = piVar17 + 4;
              if (piVar17 == (int *)0x0) {
                _Src_00 = (int *)0x0;
              }
              if (_Src_00 != (int *)0x0) {
                memcpy(&FStack_1e68.PrevViewMatrices,_Src_00,0x880);
                FStack_1e68.HZBTestViewRect.field0_0x0._s_0.Min.field0_0x0 =
                     (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(_Src_00 + 0x220);
                FStack_1e68.HZBTestViewRect.field0_0x0._s_0.Max.field0_0x0 =
                     (TIntPoint<int>)*(TIntPoint<int>_u_0 *)(_Src_00 + 0x222);
                FStack_1e68.Flags = uVar26;
              }
            }
            break;
          }
          iVar25 = piVar17[0x22c];
        } while (iVar25 != -1);
      }
    }
    TStack_2258.Reference = (IPooledRenderTarget *)0x0;
    UpdateCurrentFrameHZB(pFVar6,&FStack_2290,this,&TStack_2258,-1);
    Nanite::SetCullingViewOverrides(this->ShadowDepthView,&FStack_1e68);
    pFVar18 = Nanite::CreatePackedView(&FStack_2238,&FStack_1e68);
    pTVar11 = pTStack_2250;
    lVar23 = 7;
    pFVar13 = &FStack_ca8;
    do {
      pFVar20 = pFVar13;
      pFVar19 = pFVar18;
      uVar9 = *(undefined8 *)((pFVar19->SVPositionToTranslatedWorld).M[0] + 2);
      *(undefined8 *)(pFVar20->SVPositionToTranslatedWorld).M[0] =
           *(undefined8 *)(pFVar19->SVPositionToTranslatedWorld).M[0];
      *(undefined8 *)((pFVar20->SVPositionToTranslatedWorld).M[0] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar19->SVPositionToTranslatedWorld).M[1] + 2);
      *(undefined8 *)(pFVar20->SVPositionToTranslatedWorld).M[1] =
           *(undefined8 *)(pFVar19->SVPositionToTranslatedWorld).M[1];
      *(undefined8 *)((pFVar20->SVPositionToTranslatedWorld).M[1] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar19->SVPositionToTranslatedWorld).M[2] + 2);
      *(undefined8 *)(pFVar20->SVPositionToTranslatedWorld).M[2] =
           *(undefined8 *)(pFVar19->SVPositionToTranslatedWorld).M[2];
      *(undefined8 *)((pFVar20->SVPositionToTranslatedWorld).M[2] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar19->SVPositionToTranslatedWorld).M[3] + 2);
      *(undefined8 *)(pFVar20->SVPositionToTranslatedWorld).M[3] =
           *(undefined8 *)(pFVar19->SVPositionToTranslatedWorld).M[3];
      *(undefined8 *)((pFVar20->SVPositionToTranslatedWorld).M[3] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar19->ViewToTranslatedWorld).M[0] + 2);
      *(undefined8 *)(pFVar20->ViewToTranslatedWorld).M[0] =
           *(undefined8 *)(pFVar19->ViewToTranslatedWorld).M[0];
      *(undefined8 *)((pFVar20->ViewToTranslatedWorld).M[0] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar19->ViewToTranslatedWorld).M[1] + 2);
      *(undefined8 *)(pFVar20->ViewToTranslatedWorld).M[1] =
           *(undefined8 *)(pFVar19->ViewToTranslatedWorld).M[1];
      *(undefined8 *)((pFVar20->ViewToTranslatedWorld).M[1] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar19->ViewToTranslatedWorld).M[2] + 2);
      *(undefined8 *)(pFVar20->ViewToTranslatedWorld).M[2] =
           *(undefined8 *)(pFVar19->ViewToTranslatedWorld).M[2];
      *(undefined8 *)((pFVar20->ViewToTranslatedWorld).M[2] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar19->ViewToTranslatedWorld).M[3] + 2);
      *(undefined8 *)(pFVar20->ViewToTranslatedWorld).M[3] =
           *(undefined8 *)(pFVar19->ViewToTranslatedWorld).M[3];
      *(undefined8 *)((pFVar20->ViewToTranslatedWorld).M[3] + 2) = uVar9;
      lVar23 = lVar23 + -1;
      pFVar18 = (FPackedView *)&pFVar19->TranslatedWorldToView;
      pFVar13 = (FPackedView *)&pFVar20->TranslatedWorldToView;
    } while (lVar23 != 0);
    uVar9 = *(undefined8 *)((pFVar19->TranslatedWorldToView).M[0] + 2);
    *(undefined8 *)(pFVar20->TranslatedWorldToView).M[0] =
         *(undefined8 *)(pFVar19->TranslatedWorldToView).M[0];
    *(undefined8 *)((pFVar20->TranslatedWorldToView).M[0] + 2) = uVar9;
    uVar9 = *(undefined8 *)((pFVar19->TranslatedWorldToView).M[1] + 2);
    *(undefined8 *)(pFVar20->TranslatedWorldToView).M[1] =
         *(undefined8 *)(pFVar19->TranslatedWorldToView).M[1];
    *(undefined8 *)((pFVar20->TranslatedWorldToView).M[1] + 2) = uVar9;
    uVar9 = *(undefined8 *)((pFVar19->TranslatedWorldToView).M[2] + 2);
    *(undefined8 *)(pFVar20->TranslatedWorldToView).M[2] =
         *(undefined8 *)(pFVar19->TranslatedWorldToView).M[2];
    *(undefined8 *)((pFVar20->TranslatedWorldToView).M[2] + 2) = uVar9;
    uVar9 = *(undefined8 *)((pFVar19->TranslatedWorldToView).M[3] + 2);
    *(undefined8 *)(pFVar20->TranslatedWorldToView).M[3] =
         *(undefined8 *)(pFVar19->TranslatedWorldToView).M[3];
    *(undefined8 *)((pFVar20->TranslatedWorldToView).M[3] + 2) = uVar9;
    uVar9 = *(undefined8 *)((pFVar19->TranslatedWorldToClip).M[0] + 2);
    *(undefined8 *)(pFVar20->TranslatedWorldToClip).M[0] =
         *(undefined8 *)(pFVar19->TranslatedWorldToClip).M[0];
    *(undefined8 *)((pFVar20->TranslatedWorldToClip).M[0] + 2) = uVar9;
    pFVar18 = (pTStack_2250->AllocatorInstance).Data;
    if (((pFVar18 <= &FStack_ca8) && (&FStack_ca8 < pFVar18 + pTStack_2250->ArrayMax)) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar16 = pTVar11->ArrayNum;
    if (iVar16 == pTVar11->ArrayMax) {
      iVar16 = ReallocGrow1_DoAlloc<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<Nanite::FPackedView>_>
                         (0x3d0,0x10,&pTVar11->AllocatorInstance,&pTVar11->ArrayMax);
    }
    pTVar11->ArrayNum = iVar16 + 1;
    lVar23 = 7;
    pFVar18 = &FStack_ca8;
    pFVar13 = (pTVar11->AllocatorInstance).Data + iVar16;
    do {
      pFVar20 = pFVar13;
      pFVar19 = pFVar18;
      uVar9 = *(undefined8 *)((pFVar19->SVPositionToTranslatedWorld).M[0] + 2);
      *(undefined8 *)(pFVar20->SVPositionToTranslatedWorld).M[0] =
           *(undefined8 *)(pFVar19->SVPositionToTranslatedWorld).M[0];
      *(undefined8 *)((pFVar20->SVPositionToTranslatedWorld).M[0] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar19->SVPositionToTranslatedWorld).M[1] + 2);
      *(undefined8 *)(pFVar20->SVPositionToTranslatedWorld).M[1] =
           *(undefined8 *)(pFVar19->SVPositionToTranslatedWorld).M[1];
      *(undefined8 *)((pFVar20->SVPositionToTranslatedWorld).M[1] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar19->SVPositionToTranslatedWorld).M[2] + 2);
      *(undefined8 *)(pFVar20->SVPositionToTranslatedWorld).M[2] =
           *(undefined8 *)(pFVar19->SVPositionToTranslatedWorld).M[2];
      *(undefined8 *)((pFVar20->SVPositionToTranslatedWorld).M[2] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar19->SVPositionToTranslatedWorld).M[3] + 2);
      *(undefined8 *)(pFVar20->SVPositionToTranslatedWorld).M[3] =
           *(undefined8 *)(pFVar19->SVPositionToTranslatedWorld).M[3];
      *(undefined8 *)((pFVar20->SVPositionToTranslatedWorld).M[3] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar19->ViewToTranslatedWorld).M[0] + 2);
      *(undefined8 *)(pFVar20->ViewToTranslatedWorld).M[0] =
           *(undefined8 *)(pFVar19->ViewToTranslatedWorld).M[0];
      *(undefined8 *)((pFVar20->ViewToTranslatedWorld).M[0] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar19->ViewToTranslatedWorld).M[1] + 2);
      *(undefined8 *)(pFVar20->ViewToTranslatedWorld).M[1] =
           *(undefined8 *)(pFVar19->ViewToTranslatedWorld).M[1];
      *(undefined8 *)((pFVar20->ViewToTranslatedWorld).M[1] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar19->ViewToTranslatedWorld).M[2] + 2);
      *(undefined8 *)(pFVar20->ViewToTranslatedWorld).M[2] =
           *(undefined8 *)(pFVar19->ViewToTranslatedWorld).M[2];
      *(undefined8 *)((pFVar20->ViewToTranslatedWorld).M[2] + 2) = uVar9;
      uVar9 = *(undefined8 *)((pFVar19->ViewToTranslatedWorld).M[3] + 2);
      *(undefined8 *)(pFVar20->ViewToTranslatedWorld).M[3] =
           *(undefined8 *)(pFVar19->ViewToTranslatedWorld).M[3];
      *(undefined8 *)((pFVar20->ViewToTranslatedWorld).M[3] + 2) = uVar9;
      lVar23 = lVar23 + -1;
      pFVar18 = (FPackedView *)&pFVar19->TranslatedWorldToView;
      pFVar13 = (FPackedView *)&pFVar20->TranslatedWorldToView;
    } while (lVar23 != 0);
    uVar9 = *(undefined8 *)((pFVar19->TranslatedWorldToView).M[0] + 2);
    puVar24 = puVar24 + 1;
    *(undefined8 *)(pFVar20->TranslatedWorldToView).M[0] =
         *(undefined8 *)(pFVar19->TranslatedWorldToView).M[0];
    *(undefined8 *)((pFVar20->TranslatedWorldToView).M[0] + 2) = uVar9;
    uVar9 = *(undefined8 *)((pFVar19->TranslatedWorldToView).M[1] + 2);
    *(undefined8 *)(pFVar20->TranslatedWorldToView).M[1] =
         *(undefined8 *)(pFVar19->TranslatedWorldToView).M[1];
    *(undefined8 *)((pFVar20->TranslatedWorldToView).M[1] + 2) = uVar9;
    uVar9 = *(undefined8 *)((pFVar19->TranslatedWorldToView).M[2] + 2);
    *(undefined8 *)(pFVar20->TranslatedWorldToView).M[2] =
         *(undefined8 *)(pFVar19->TranslatedWorldToView).M[2];
    *(undefined8 *)((pFVar20->TranslatedWorldToView).M[2] + 2) = uVar9;
    uVar9 = *(undefined8 *)((pFVar19->TranslatedWorldToView).M[3] + 2);
    *(undefined8 *)(pFVar20->TranslatedWorldToView).M[3] =
         *(undefined8 *)(pFVar19->TranslatedWorldToView).M[3];
    *(undefined8 *)((pFVar20->TranslatedWorldToView).M[3] + 2) = uVar9;
    uVar9 = *(undefined8 *)((pFVar19->TranslatedWorldToClip).M[0] + 2);
    *(undefined8 *)(pFVar20->TranslatedWorldToClip).M[0] =
         *(undefined8 *)(pFVar19->TranslatedWorldToClip).M[0];
    *(undefined8 *)((pFVar20->TranslatedWorldToClip).M[0] + 2) = uVar9;
    uVar21 = (ulonglong)uStack_2294;
  } while( true );
}

// Call @ 145620ec0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FShadowSceneRenderer::CreateNaniteViewsForPass'::__l2::<lambda_1>,void,TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
::Call(void *param_1,
      TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
      *param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  int iVar3;
  FProjectedShadowInfo *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStackX_8 [8];
  TArrayView<FViewInfo_const_,int> TStack_38;
  
  bVar8 = -1 < CpuChannel->Enabled;
  if (bVar8) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1212,"AddNaniteRenderViews",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
               ,0x4bc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1212);
  }
  puVar7 = *(undefined8 **)((longlong)param_1 + 0x2b8);
  iVar3 = *(int *)((longlong)param_1 + 0x2c0);
  bVar2 = *(bool *)((longlong)param_1 + 0x288);
  puVar1 = puVar7 + iVar3;
  while( true ) {
    if (*(int *)((longlong)param_1 + 0x2c0) != iVar3) {
      auStackX_8[0] = 0;
      `TCheckedPointerIterator<FProjectedShadowInfo_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (puVar7 == puVar1) break;
    pFVar4 = (FProjectedShadowInfo *)*puVar7;
    if ((pFVar4->bShouldRenderVSM == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shadow->bShouldRenderVSM",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Shadows\\ShadowSceneRenderer.cpp"
                           ,0x4c1,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TStack_38.DataPtr = *(FViewInfo **)((longlong)param_1 + 0x2a0);
    TStack_38._8_8_ = *(undefined8 *)((longlong)param_1 + 0x2a8);
    FVirtualShadowMapArray::AddRenderViews
              (param_1,pFVar4,&TStack_38,*(float *)((longlong)param_1 + 0x2e0),bVar2,bVar2,param_2);
    puVar7 = puVar7 + 1;
  }
  if (!bVar8) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// Call @ 145620ed0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSceneRenderer::BeginGatherShadowPrimitives'::__l27::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `FSceneRenderer::BeginGatherShadowPrimitives'::__l27::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 145620ee0

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGatherShadowPrimitivesPrepareTask::DoTask'::__l13::<lambda_1>,void>::Call
          (void *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"FGatherShadowPrimitivesTask");
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId5179,"FGatherShadowPrimitivesTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
               ,0x143b);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId5179);
  }
  iVar5 = 0;
  if (0 < *(int *)((longlong)param_1 + 0xc)) {
    do {
      lVar1 = *(longlong *)param_1;
      iVar4 = *(int *)((longlong)param_1 + 8) + iVar5;
      if (iVar4 < *(int *)(lVar1 + 0x78)) {
        if ((iVar4 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FGatherShadowPrimitivesPacket::AnyThreadTask
                  (*(FGatherShadowPrimitivesPacket **)
                    (*(longlong *)(lVar1 + 0x70) + (longlong)iVar4 * 8),
                   *(FDynamicShadowsTaskData **)param_1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((longlong)param_1 + 0xc));
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// Call @ 145620ef0

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGatherShadowPrimitivesPrepareTask::DoTask'::__l16::<lambda_2>,void>::Call
          (void *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  FGatherShadowPrimitivesPacket *this;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 auStackX_8 [8];
  FTaskTagScope FStack_38;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"FGatherShadowPrimitivesFinalizeTask");
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`16'::<lambda_2>::operator()(void)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId5201,"FGatherShadowPrimitivesFinalizeTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
               ,0x1451);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`16'::<lambda_2>::operator()(void)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId5201);
  }
  FTaskTagScope::FTaskTagScope(&FStack_38,EParallelRenderingThread);
  FDynamicShadowsTaskData::PresizeViewDependentWholeSceneShadows
            (*(FDynamicShadowsTaskData **)param_1);
  lVar3 = *(longlong *)param_1;
  puVar5 = *(undefined8 **)(lVar3 + 0x70);
  iVar2 = *(int *)(lVar3 + 0x78);
  puVar1 = puVar5 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x78) != iVar2) {
      `TCheckedPointerIterator<FGatherShadowPrimitivesPacket_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(auStackX_8);
    }
    if (puVar5 == puVar1) break;
    this = (FGatherShadowPrimitivesPacket *)*puVar5;
    FGatherShadowPrimitivesPacket::AnyThreadFinalize(this,*(FDynamicShadowsTaskData **)param_1);
    if (this != (FGatherShadowPrimitivesPacket *)0x0) {
      DestructItems<TArray<FAddSubjectPrimitiveOp,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FAddSubjectPrimitiveOp,TSizedDefaultAllocator<32>_> *)
                 (this->ViewDependentWholeSceneShadowSubjectPrimitives).AllocatorInstance.Data,
                 (this->ViewDependentWholeSceneShadowSubjectPrimitives).ArrayNum);
      pFVar4 = (this->ViewDependentWholeSceneShadowSubjectPrimitives).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      DestructItems<TArray<FAddSubjectPrimitiveOp,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FAddSubjectPrimitiveOp,TSizedDefaultAllocator<32>_> *)
                 (this->PreShadowSubjectPrimitives).AllocatorInstance.Data,
                 (this->PreShadowSubjectPrimitives).ArrayNum);
      pFVar4 = (this->PreShadowSubjectPrimitives).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      DestructItems<FAddSubjectPrimitiveOverflowedIndices,int>
                ((FAddSubjectPrimitiveOverflowedIndices *)
                 (this->ViewDependentWholeSceneShadowOverflowedIndices).AllocatorInstance.Data,
                 (this->ViewDependentWholeSceneShadowOverflowedIndices).ArrayNum);
      pFVar4 = (this->ViewDependentWholeSceneShadowOverflowedIndices).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      DestructItems<FAddSubjectPrimitiveOverflowedIndices,int>
                ((FAddSubjectPrimitiveOverflowedIndices *)
                 (this->PreShadowOverflowedIndices).AllocatorInstance.Data,
                 (this->PreShadowOverflowedIndices).ArrayNum);
      pFVar4 = (this->PreShadowOverflowedIndices).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (this->ViewDependentWholeSceneShadowStats).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      ::operator_delete(this,0x68);
    }
    puVar5 = puVar5 + 1;
  }
  lVar3 = *(longlong *)param_1;
  *(undefined4 *)(lVar3 + 0x78) = 0;
  if (*(int *)(lVar3 + 0x7c) != 0) {
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGatherShadowPrimitivesPacket_*>_>
              (8,8,0,(ForElementType<FGatherShadowPrimitivesPacket_*> *)(lVar3 + 0x70),0,
               (int *)(lVar3 + 0x7c));
  }
  FSceneRenderer::FilterDynamicShadows
            ((*(FDynamicShadowsTaskData **)param_1)->SceneRenderer,
             *(FDynamicShadowsTaskData **)param_1);
  FTaskTagScope::~FTaskTagScope(&FStack_38);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// Call @ 145620f00

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

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FGatherShadowPrimitivesPrepareTask::DoTask'::__l19::<lambda_3>,void>::Call
          (void *param_1)

{
  bool bVar1;
  FTaskTagScope FStack_18;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"GatherShadowDynamicMeshElements");
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`19'::<lambda_3>::operator()(void)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId5228,"GatherShadowDynamicMeshElements",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
               ,0x146c);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`19'::<lambda_3>::operator()(void)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId5228);
  }
  FTaskTagScope::FTaskTagScope(&FStack_18,EParallelRenderingThread);
  FSceneRenderer::GatherShadowDynamicMeshElements
            ((*(FDynamicShadowsTaskData **)param_1)->SceneRenderer,
             *(FDynamicShadowsTaskData **)param_1);
  FTaskTagScope::~FTaskTagScope(&FStack_18);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// Call @ 1456758b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FSkinningSceneParameters_&,FRDGBuilder_&),void,FSkinningSceneParameters_&,FRDGBuilder_&>
::Call(void *param_1,FSkinningSceneParameters *param_2,FRDGBuilder *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001456758bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,param_3);
  return;
}

// Call @ 1456758d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSceneUniformBufferMemberRegistration<FSkinningSceneParameters>::TSceneUniformBufferMemberRegistration<FSkinningSceneParameters>'::__l2::<lambda_1>,void,void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&>
::Call(void *param_1,void **param_2,FShaderParametersMetadata *param_3,FRDGBuilder *param_4)

{
  `TSceneUniformBufferMemberRegistration<FSkinningSceneParameters>::
  TSceneUniformBufferMemberRegistration<FSkinningSceneParameters>'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3,param_4);
  return;
}

// Call @ 1456758e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FRHIUniformBufferLayout *pFVar1;
  FRHIResource *this;
  undefined8 *puVar2;
  FRHIResource *this_00;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  TRefCountPtr<FRHIUniformBuffer> TVar6;
  FRHIResource *pFStackX_8;
  undefined8 auStack_28 [2];
  
  pFVar1 = *(FRHIUniformBufferLayout **)((longlong)param_1 + 8);
  pFVar5 = FAtmosphereUniformShaderParameters::GetStructMetadata();
  if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  TVar6 = RHICreateUniformBuffer
                    (&pFStackX_8,pFVar1,(EUniformBufferUsage)(pFVar5->Layout).Reference,2);
  this = (FRHIResource *)(TVar6.Reference)->_padding_;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar5 = FAtmosphereUniformShaderParameters::GetStructMetadata();
    if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((FName)(pFVar5->Layout).Reference != this[2].OwnerName) {
      pFVar5 = FAtmosphereUniformShaderParameters::GetStructMetadata();
      if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x96,
                         L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  if (pFStackX_8 != (FRHIResource *)0x0) {
    FRHIResource::Release(pFStackX_8);
  }
  puVar2 = *(undefined8 **)param_1;
  if (puVar2 == auStack_28) {
    if (this != (FRHIResource *)0x0) {
      FRHIResource::Release(this);
      return;
    }
  }
  else {
    this_00 = (FRHIResource *)*puVar2;
    *puVar2 = this;
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
      return;
    }
  }
  return;
}

// Call @ 1456758f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AddSkyAtmosphere'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  longlong *plVar8;
  FRenderCommandList *this;
  FCommandList *this_00;
  FRenderCommandTag *pFVar9;
  undefined ***pppuVar10;
  longlong *plVar11;
  ForAnyElementType *pFVar12;
  ulonglong uVar13;
  undefined1 auStack_e8 [32];
  FScriptContainerElement *pFStack_c8;
  FScriptContainerElement *pFStack_c0;
  longlong lStack_b8;
  longlong lStack_b0;
  undefined8 uStack_a8;
  code *apcStack_98 [2];
  undefined **ppuStack_88;
  longlong *plStack_80;
  longlong *plStack_78;
  undefined ***pppuStack_70;
  undefined1 auStack_68 [16];
  undefined **ppuStack_58;
  longlong *plStack_50;
  longlong *plStack_48;
  undefined ***pppuStack_40;
  byte bStack_38;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStack_e8;
  plVar11 = *(longlong **)(*(longlong *)param_1 + 0x4718);
  plVar8 = plVar11 + *(int *)(*(longlong *)param_1 + 0x4720);
  if (plVar11 != plVar8) {
    do {
      if (*plVar11 == *(longlong *)((longlong)param_1 + 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Scene->SkyAtmosphereStack.Contains(SkyAtmosphereSceneProxy)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SkyAtmosphereRendering.cpp"
                           ,0x254,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        break;
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar8);
  }
  lVar2 = *(longlong *)param_1;
  pFVar1 = (FScriptContainerElement *)((longlong)param_1 + 8);
  pFVar12 = (ForAnyElementType *)(lVar2 + 0x4718);
  pFVar3 = pFVar12->Data;
  if ((pFVar3 <= pFVar1) && (pFVar1 < pFVar3 + (longlong)*(int *)(lVar2 + 0x4724) * 8)) {
    lStack_b0 = (longlong)*(int *)(lVar2 + 0x4720);
    uStack_a8 = 8;
    pFStack_c8 = pFVar1;
    pFStack_c0 = pFVar3;
    lStack_b8 = (longlong)*(int *)(lVar2 + 0x4724);
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = *(int *)(lVar2 + 0x4720);
  if (iVar7 == *(int *)(lVar2 + 0x4724)) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar12,(int *)(lVar2 + 0x4724));
  }
  *(int *)(lVar2 + 0x4720) = iVar7 + 1;
  *(undefined8 *)(pFVar12->Data + (longlong)iVar7 * 8) = *(undefined8 *)pFVar1;
  plVar8 = ::operator_new(0x100);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    lVar2 = *(longlong *)((longlong)param_1 + 8);
    plStack_78 = plVar8 + 2;
    *plVar8 = lVar2;
    plStack_80 = plVar8 + 0x18;
    plVar8[0x19] = 0;
    plVar8[0x1a] = 0;
    plVar8[0x1b] = 0;
    plVar8[0x1c] = 0;
    plVar8[0x1d] = 0;
    plVar8[0x1e] = 0;
    plVar8[0x1f] = 0;
    *plStack_80 = 0;
    *(undefined4 *)plStack_78 = *(undefined4 *)(lVar2 + 0x30);
    *(undefined4 *)((longlong)plVar8 + 0x14) = *(undefined4 *)(lVar2 + 0x28);
    *(undefined4 *)(plVar8 + 3) = *(undefined4 *)(lVar2 + 0x2c);
    *(undefined4 *)((longlong)plVar8 + 0x1c) = *(undefined4 *)(lVar2 + 0x44);
    lVar5 = *(longlong *)(lVar2 + 0x3c);
    pppuStack_70 = (undefined ***)0x0;
    plVar8[4] = *(longlong *)(lVar2 + 0x34);
    plVar8[5] = lVar5;
    lVar5 = *(longlong *)(lVar2 + 0x50);
    plVar8[6] = *(longlong *)(lVar2 + 0x48);
    plVar8[7] = lVar5;
    *(undefined4 *)(plVar8 + 8) = *(undefined4 *)(lVar2 + 0x78);
    lVar5 = *(longlong *)(lVar2 + 0x60);
    plVar8[10] = *(longlong *)(lVar2 + 0x58);
    plVar8[0xb] = lVar5;
    *(undefined4 *)(plVar8 + 0xc) = *(undefined4 *)(lVar2 + 0x7c);
    lVar5 = *(longlong *)(lVar2 + 0x70);
    plVar8[0xe] = *(longlong *)(lVar2 + 0x68);
    plVar8[0xf] = lVar5;
    *(undefined4 *)(plVar8 + 0x10) = *(undefined4 *)(lVar2 + 0x90);
    *(undefined4 *)((longlong)plVar8 + 0x84) = *(undefined4 *)(lVar2 + 0x94);
    *(undefined4 *)(plVar8 + 0x11) = *(undefined4 *)(lVar2 + 0x98);
    *(undefined4 *)((longlong)plVar8 + 0x8c) = *(undefined4 *)(lVar2 + 0x9c);
    *(undefined4 *)(plVar8 + 0x12) = *(undefined4 *)(lVar2 + 0xa0);
    lVar5 = *(longlong *)(lVar2 + 0x88);
    ppuStack_88 = &TFunction_OwnedObject<`FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo'::`2'::<lambda_1>,1,0>
                   ::_vftable_;
    apcStack_98[0] =
         TFunctionRefCaller<`FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
         ::Call;
    plVar8[0x14] = *(longlong *)(lVar2 + 0x80);
    plVar8[0x15] = lVar5;
    lVar5 = *(longlong *)(lVar2 + 0xac);
    plVar8[0x16] = *(longlong *)(lVar2 + 0xa4);
    plVar8[0x17] = lVar5;
    this = FRenderCommandList::GetInstanceTLS();
    if (this == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo_::__l2::TSTR_FCreateUniformBuffer530>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)apcStack_98);
    }
    else {
      this_00 = FRenderCommandList::GetRenderThread(this);
      auStack_68._0_8_ = apcStack_98[0];
      pppuStack_40 = pppuStack_70;
      ppuStack_58 = ppuStack_88;
      plStack_50 = plStack_80;
      plStack_48 = plStack_78;
      apcStack_98[0] = (code *)0x0;
      bStack_38 = 2;
      pFVar9 = (FRenderCommandTag *)
               TRenderCommandTag<`FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo'::__l2::TSTR_FCreateUniformBuffer530>
               ::Get();
      RenderCommandPipe::FCommandList::Enqueue
                (this_00,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)auStack_68,pFVar9);
      uVar13 = (ulonglong)bStack_38;
      if ((2 < uVar13) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13] ==
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)auStack_68._0_8_ != (code *)0x0) {
          pppuVar10 = (undefined ***)(auStack_68 + 0x10);
          if (pppuStack_40 != (undefined ***)0x0) {
            pppuVar10 = pppuStack_40;
          }
          (*(code *)(*pppuVar10)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar13])(auStack_68);
      }
    }
    if (apcStack_98[0] != (code *)0x0) {
      pppuVar10 = &ppuStack_88;
      if (pppuStack_70 != (undefined ***)0x0) {
        pppuVar10 = pppuStack_70;
      }
      (*(code *)(*pppuVar10)[2])();
    }
  }
  *(longlong **)(*(longlong *)((longlong)param_1 + 8) + 8) = plVar8;
  *(undefined8 *)(*(longlong *)param_1 + 0x4708) =
       *(undefined8 *)(*(longlong *)((longlong)param_1 + 8) + 8);
  **(undefined1 **)((longlong)param_1 + 8) = *(undefined1 *)((longlong)param_1 + 0x10);
  if (**(char **)((longlong)param_1 + 8) == '\0') {
    LOCK();
    *(int *)(*(longlong *)param_1 + 0x49f4) = *(int *)(*(longlong *)param_1 + 0x49f4) + 1;
    UNLOCK();
  }
  (**(code **)(**(longlong **)param_1 + 0x240))(*(longlong **)param_1,1);
  return;
}

// Call @ 145675900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AddSparseVolumeTextureViewer'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)param_1;
  iVar2 = *(int *)(lVar1 + 0x4758);
  if (iVar2 == *(int *)(lVar1 + 0x475c)) {
    iVar2 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(lVar1 + 0x4750),(int *)(lVar1 + 0x475c));
  }
  *(int *)(lVar1 + 0x4758) = iVar2 + 1;
  *(undefined8 *)(*(longlong *)(lVar1 + 0x4750) + (longlong)iVar2 * 8) =
       *(undefined8 *)((longlong)param_1 + 8);
  return;
}

// Call @ 145675960

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::RemoveSkyAtmosphere'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  int *piVar1;
  void *pvVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  
  if (**(char **)((longlong)param_1 + 8) == '\0') {
    LOCK();
    *(int *)(*(longlong *)param_1 + 0x49f4) = *(int *)(*(longlong *)param_1 + 0x49f4) + -1;
    UNLOCK();
  }
  pvVar2 = *(void **)(*(longlong *)((longlong)param_1 + 8) + 8);
  if (pvVar2 != (void *)0x0) {
    puVar3 = *(undefined8 **)((longlong)pvVar2 + 0xf0);
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      LOCK();
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar9 == 1) && (piVar1 != (int *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    puVar3 = *(undefined8 **)((longlong)pvVar2 + 0xe0);
    if (puVar3 != (undefined8 *)0x0) {
      piVar1 = (int *)(puVar3 + 1);
      LOCK();
      iVar9 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if ((iVar9 == 1) && (piVar1 != (int *)0x0)) {
        (**(code **)*puVar3)(puVar3,1);
      }
    }
    if (*(longlong **)((longlong)pvVar2 + 0xd8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0xd8) + 0x38))();
    }
    if (*(longlong **)((longlong)pvVar2 + 0xd0) != (longlong *)0x0) {
      (**(code **)(**(longlong **)((longlong)pvVar2 + 0xd0) + 0x38))();
    }
    if (*(FRHIResource **)((longlong)pvVar2 + 200) != (FRHIResource *)0x0) {
      FRHIResource::Release(*(FRHIResource **)((longlong)pvVar2 + 200));
    }
    if (*(FRHIResource **)((longlong)pvVar2 + 0xc0) != (FRHIResource *)0x0) {
      FRHIResource::Release(*(FRHIResource **)((longlong)pvVar2 + 0xc0));
    }
    ::operator_delete(pvVar2,0x100);
  }
  lVar4 = *(longlong *)param_1;
  plVar5 = *(longlong **)(lVar4 + 0x4718);
  if (plVar5 != plVar5 + *(int *)(lVar4 + 0x4720)) {
    plVar11 = plVar5;
    do {
      if (*plVar11 == *(longlong *)((longlong)param_1 + 8)) {
        iVar9 = (int)((longlong)plVar11 - (longlong)plVar5 >> 3);
        if (iVar9 != -1) {
          memmove(plVar5 + iVar9,plVar5 + iVar9 + 1,
                  (longlong)((*(int *)(lVar4 + 0x4720) - iVar9) + -1) << 3);
          *(int *)(lVar4 + 0x4720) = *(int *)(lVar4 + 0x4720) + -1;
        }
        break;
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != plVar5 + *(int *)(lVar4 + 0x4720));
  }
  lVar4 = *(longlong *)param_1;
  if (*(int *)(lVar4 + 0x4720) < 1) {
    *(undefined8 *)(lVar4 + 0x4708) = 0;
  }
  else {
    uVar10 = *(int *)(lVar4 + 0x4720) - 1;
    uVar8 = 0;
    if ((int)uVar10 < *(int *)(lVar4 + 0x4720)) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    *(undefined8 *)(*(longlong *)param_1 + 0x4708) =
         *(undefined8 *)
          (*(longlong *)
            (*(longlong *)(lVar4 + 0x4718) + -8 + (longlong)*(int *)(lVar4 + 0x4720) * 8) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000145669fad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x240))(*(longlong **)param_1,1);
  return;
}

// Call @ 145675970

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::RemoveSparseVolumeTextureViewer'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  lVar2 = *(longlong *)param_1;
  plVar1 = (longlong *)((longlong)param_1 + 8);
  if ((*(longlong **)(lVar2 + 0x4750) <= plVar1) &&
     (plVar1 < *(longlong **)(lVar2 + 0x4750) + *(int *)(lVar2 + 0x475c))) {
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
  lVar6 = (longlong)*(int *)(lVar2 + 0x4758);
  if (*(int *)(lVar2 + 0x4758) != 0) {
    iVar10 = 0;
    plVar3 = *(longlong **)(lVar2 + 0x4750);
    bVar5 = *plVar3 != *plVar1;
    lVar7 = 0;
    iVar8 = 0;
    do {
      lVar7 = lVar7 + 1;
      iVar9 = iVar8 + 1;
      if (lVar7 < lVar6) {
        do {
          if (bVar5 != (plVar3[lVar7] != *plVar1)) break;
          iVar9 = iVar9 + 1;
          lVar7 = lVar7 + 1;
        } while (lVar7 < lVar6);
      }
      if (bVar5 != false) {
        if (iVar10 != iVar8) {
          memmove(plVar3 + iVar10,plVar3 + iVar8,(longlong)(iVar9 - iVar8) << 3);
        }
        iVar10 = iVar10 + (iVar9 - iVar8);
      }
      bVar5 = (bool)(bVar5 ^ 1);
      iVar8 = iVar9;
    } while (lVar7 < lVar6);
    *(int *)(lVar2 + 0x4758) = iVar10;
  }
  return;
}

// Call @ 145675980

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSkinningSceneExtension::Tick'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  *(float *)(*(longlong *)param_1 + 0x10) =
       *(float *)((longlong)param_1 + 8) + *(float *)(*(longlong *)param_1 + 0x10);
  lVar2 = *(longlong *)param_1;
  uVar3 = *(undefined8 *)((longlong)param_1 + 0x18);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x20);
  *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)((longlong)param_1 + 0x10);
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  *(undefined8 *)(lVar2 + 0x28) = uVar1;
  return;
}

// Call @ 1456759b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USparseVolumeTextureViewerComponent::DestroyRenderState_Concurrent'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)param_1;
  if (puVar1 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001456759c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,1);
    return;
  }
  return;
}

// Call @ 1456759d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USparseVolumeTextureViewerComponent::SendRenderTransformCommand'::__l5::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)param_1;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x18);
  *(undefined8 *)(lVar1 + 0x290) = *(undefined8 *)((longlong)param_1 + 0x10);
  *(undefined8 *)(lVar1 + 0x298) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x28);
  *(undefined8 *)(lVar1 + 0x2a0) = *(undefined8 *)((longlong)param_1 + 0x20);
  *(undefined8 *)(lVar1 + 0x2a8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x38);
  *(undefined8 *)(lVar1 + 0x2b0) = *(undefined8 *)((longlong)param_1 + 0x30);
  *(undefined8 *)(lVar1 + 0x2b8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x48);
  *(undefined8 *)(lVar1 + 0x2c0) = *(undefined8 *)((longlong)param_1 + 0x40);
  *(undefined8 *)(lVar1 + 0x2c8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x58);
  *(undefined8 *)(lVar1 + 0x2d0) = *(undefined8 *)((longlong)param_1 + 0x50);
  *(undefined8 *)(lVar1 + 0x2d8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x68);
  *(undefined8 *)(lVar1 + 0x2e0) = *(undefined8 *)((longlong)param_1 + 0x60);
  *(undefined8 *)(lVar1 + 0x2e8) = uVar2;
  lVar1 = *(longlong *)param_1;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x78);
  *(undefined8 *)(lVar1 + 0x2f0) = *(undefined8 *)((longlong)param_1 + 0x70);
  *(undefined8 *)(lVar1 + 0x2f8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x88);
  *(undefined8 *)(lVar1 + 0x300) = *(undefined8 *)((longlong)param_1 + 0x80);
  *(undefined8 *)(lVar1 + 0x308) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x98);
  *(undefined8 *)(lVar1 + 0x310) = *(undefined8 *)((longlong)param_1 + 0x90);
  *(undefined8 *)(lVar1 + 0x318) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0xa8);
  *(undefined8 *)(lVar1 + 800) = *(undefined8 *)((longlong)param_1 + 0xa0);
  *(undefined8 *)(lVar1 + 0x328) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 0xb8);
  *(undefined8 *)(lVar1 + 0x330) = *(undefined8 *)((longlong)param_1 + 0xb0);
  *(undefined8 *)(lVar1 + 0x338) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 200);
  *(undefined8 *)(lVar1 + 0x340) = *(undefined8 *)((longlong)param_1 + 0xc0);
  *(undefined8 *)(lVar1 + 0x348) = uVar2;
  lVar1 = *(longlong *)param_1;
  *(undefined8 *)(lVar1 + 0x350) = *(undefined8 *)((longlong)param_1 + 0xd0);
  *(undefined4 *)(lVar1 + 0x358) = *(undefined4 *)((longlong)param_1 + 0xd8);
  *(undefined4 *)(*(longlong *)param_1 + 0x35c) = *(undefined4 *)((longlong)param_1 + 0xe4);
  *(undefined4 *)(*(longlong *)param_1 + 0x360) = *(undefined4 *)((longlong)param_1 + 0xdc);
  *(undefined4 *)(*(longlong *)param_1 + 0x364) = *(undefined4 *)((longlong)param_1 + 0xe0);
  *(undefined4 *)(*(longlong *)param_1 + 0x368) = *(undefined4 *)((longlong)param_1 + 0xe8);
  *(undefined1 *)(*(longlong *)param_1 + 0x36c) = *(undefined1 *)((longlong)param_1 + 0xec);
  return;
}

// Call @ 1456759e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FSkinningSceneExtension::ProvideAnimRuntimeTransforms'::__l2::<lambda_2>,void,FRDGScatterUploader_&>
::Call(void *param_1,FRDGScatterUploader *param_2)

{
  FScriptContainerElement *pFVar1;
  ushort *puVar2;
  undefined4 *puVar3;
  undefined1 auVar4 [16];
  ushort uVar5;
  FSkeletalMeshObject *this;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  TArray<FSkelMeshRenderSection,TSizedDefaultAllocator<32>_> *pTVar20;
  void *pvVar21;
  undefined8 *puVar22;
  int *piVar23;
  ulonglong uVar24;
  int iVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  ushort *puVar28;
  uint uVar29;
  longlong lVar30;
  undefined4 *puVar31;
  FScriptContainerElement *pFVar32;
  FScriptContainerElement *pFVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulonglong uVar38;
  bool bVar39;
  undefined1 auVar40 [16];
  undefined1 auStackX_20 [8];
  undefined1 auStack_e8 [8];
  longlong lStack_e0;
  uint uStack_d8;
  int iStack_d4;
  FScriptContainerElement *pFStack_d0;
  FScriptContainerElement *pFStack_c8;
  longlong lStack_c0;
  int iStack_b8;
  ulonglong uStack_b0;
  ulonglong *puStack_a8;
  longlong lStack_a0;
  int iStack_98;
  ulonglong uStack_90;
  undefined4 uStack_88;
  void *pvStack_80;
  ulonglong *puStack_78;
  
  bVar39 = -1 < CpuChannel->Enabled;
  if (bVar39) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1503,
               "FSkinningSceneExtension::ProvideAnimRuntimeTransformsTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Skinning\\SkinningSceneExtension.cpp"
               ,0x5df);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1503);
  }
  iVar15 = _UNK_150631e0c;
  iVar14 = _UNK_150631e08;
  iVar13 = __xmm_00000003000000020000000100000000._4_4_;
  iVar12 = (int)__xmm_00000003000000020000000100000000;
  puStack_a8 = *(ulonglong **)param_1;
  puStack_78 = (ulonglong *)((longlong)puStack_a8 + (longlong)*(int *)((longlong)param_1 + 8) * 0xc)
  ;
  if (puStack_a8 != puStack_78) {
    do {
      uVar24 = 0;
      uVar36 = 0;
      uStack_88 = (undefined4)puStack_a8[1];
      uStack_90 = *puStack_a8;
      lVar30 = (longlong)(int)uStack_90;
      if (((int)uStack_90 < 0 || *(int *)((longlong)param_1 + 0x18) <= (int)uStack_90) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar30 = *(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + lVar30 * 8);
      this = *(FSkeletalMeshObject **)(lVar30 + 0x10);
      uVar5 = *(ushort *)(lVar30 + 0x38);
      uVar27 = (uint)uVar5;
      uVar29 = uVar27 * 2;
      uStack_d8 = (uint)uVar5;
      (**(code **)(this->_padding_ + 0x68))(this,&lStack_a0);
      (**(code **)(this->_padding_ + 0x70))(this,&lStack_c0);
      uVar38 = uStack_90 / 0x3000000000;
      uVar37 = (uint)uVar38;
      uStack_b0 = uVar38;
      if (iStack_98 == 0) {
        lVar30 = param_2->_padding_ + (ulonglong)(uint)param_2->_padding_ * 4;
        if (uVar27 != 0) {
          if (0xf < uVar29) {
            uVar36 = 8;
            do {
              iVar17 = (int)uVar24 + uVar37;
              iVar18 = uVar37 + (uVar36 - 4);
              uVar34 = uVar36 + 4;
              piVar23 = (int *)(lVar30 + uVar24 * 4);
              *piVar23 = iVar17 + iVar12;
              piVar23[1] = iVar17 + iVar13;
              piVar23[2] = iVar17 + iVar14;
              piVar23[3] = iVar17 + iVar15;
              iVar25 = uVar36 + 5;
              uVar35 = (int)uVar24 + 0x10;
              uVar24 = (ulonglong)uVar35;
              iVar19 = uVar37 + uVar36;
              piVar23 = (int *)(lVar30 + (ulonglong)(uVar36 - 4) * 4);
              *piVar23 = iVar18 + iVar12;
              piVar23[1] = iVar18 + iVar13;
              piVar23[2] = iVar18 + iVar14;
              piVar23[3] = iVar18 + iVar15;
              iVar17 = uVar36 + 6;
              piVar23 = (int *)(lVar30 + (ulonglong)uVar36 * 4);
              *piVar23 = iVar19 + iVar12;
              piVar23[1] = iVar19 + iVar13;
              piVar23[2] = iVar19 + iVar14;
              piVar23[3] = iVar19 + iVar15;
              iVar18 = uVar36 + 7;
              uVar36 = uVar36 + 0x10;
              auVar40._0_4_ = uVar34 + uVar37;
              auVar40._4_4_ = iVar25 + uVar37;
              auVar40._8_4_ = iVar17 + uVar37;
              auVar40._12_4_ = iVar18 + uVar37;
              *(undefined1 (*) [16])(lVar30 + (ulonglong)uVar34 * 4) = auVar40;
            } while (uVar35 < (uVar29 & 0xfffffff0));
          }
          if ((uint)uVar24 < uVar29) {
            piVar23 = (int *)(lVar30 + uVar24 * 4);
            do {
              iVar17 = (int)uVar24;
              uVar36 = iVar17 + 1;
              uVar24 = (ulonglong)uVar36;
              *piVar23 = iVar17 + uVar37;
              piVar23 = piVar23 + 1;
            } while (uVar36 < uVar29);
          }
        }
        iVar17 = (int)param_2->_padding_;
        *(uint *)&param_2->_padding_ = iVar17 + uVar29;
        if (uVar27 != 0) {
          puVar22 = (undefined8 *)
                    ((ulonglong)(uint)(iVar17 * (int)param_2->_padding_) + 8 + param_2->_padding_);
          uVar24 = (ulonglong)uVar29;
          do {
            puVar22[-1] = 0x3f800000;
            *puVar22 = 0;
            *(undefined4 *)(puVar22 + 1) = 0;
            *(undefined8 *)((longlong)puVar22 + 0xc) = 0x3f800000;
            *(undefined8 *)((longlong)puVar22 + 0x14) = 0;
            *(undefined4 *)((longlong)puVar22 + 0x1c) = 0;
            puVar22[4] = 0x3f800000;
            puVar22 = puVar22 + 6;
            uVar24 = uVar24 - 1;
          } while (uVar24 != 0);
        }
      }
      else if ((*(byte *)(lVar30 + 0x3e) & 4) == 0) {
        pvVar21 = FRDGScatterUploadBase::Add_GetRef
                            ((FRDGScatterUploadBase *)param_2,uVar37,(uint)uVar5);
        uVar36 = (uint)uVar5;
        if (uVar5 != 0) {
          do {
            uVar29 = (uint)uVar24;
            uVar27 = 0;
            if ((int)uVar29 < iStack_98) {
              uVar27 = ~uVar29 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar16)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar30 = (longlong)(int)uVar29;
            puVar31 = (undefined4 *)(lVar30 * 0x40 + lStack_a0);
            uVar27 = 0;
            if ((int)uVar29 < (int)(uint)uVar5) {
              uVar27 = ~uVar29 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar16)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar7 = puVar31[1];
            uVar8 = puVar31[2];
            uVar24 = (ulonglong)(uVar29 + 1);
            auVar40 = *(undefined1 (*) [16])(puVar31 + 8);
            uVar9 = puVar31[4];
            uVar10 = puVar31[5];
            uVar11 = puVar31[6];
            auVar4 = *(undefined1 (*) [16])(puVar31 + 0xc);
            puVar3 = (undefined4 *)((longlong)pvVar21 + lVar30 * 0x30);
            *puVar3 = *puVar31;
            puVar3[1] = uVar9;
            puVar3[2] = auVar40._0_4_;
            puVar3[3] = auVar4._0_4_;
            puVar31 = (undefined4 *)((longlong)pvVar21 + lVar30 * 0x30 + 0x10);
            *puVar31 = uVar7;
            puVar31[1] = uVar10;
            puVar31[2] = auVar40._4_4_;
            puVar31[3] = auVar4._4_4_;
            puVar31 = (undefined4 *)((longlong)pvVar21 + lVar30 * 0x30 + 0x20);
            *puVar31 = uVar8;
            puVar31[1] = uVar11;
            puVar31[2] = auVar40._8_4_;
            puVar31[3] = auVar4._8_4_;
            uVar38 = uStack_b0;
          } while (uVar29 + 1 < uVar36);
        }
        if (iStack_b8 != 0) {
          pvVar21 = FRDGScatterUploadBase::Add_GetRef
                              ((FRDGScatterUploadBase *)param_2,(int)uVar38 + (uint)uVar5,uVar36);
          uVar27 = 0;
          if (uVar36 != 0) {
            do {
              uVar29 = 0;
              if ((int)uVar27 < iStack_b8) {
                uVar29 = ~uVar27 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar16)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar30 = (longlong)(int)uVar27;
              puVar31 = (undefined4 *)(lVar30 * 0x40 + lStack_c0);
              uVar29 = 0;
              if ((int)uVar27 < (int)uVar36) {
                uVar29 = ~uVar27 >> 0x1f;
              }
              if ((uVar29 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar16)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar7 = puVar31[1];
              uVar8 = puVar31[2];
              uVar27 = uVar27 + 1;
              auVar40 = *(undefined1 (*) [16])(puVar31 + 8);
              uVar9 = puVar31[4];
              uVar10 = puVar31[5];
              uVar11 = puVar31[6];
              auVar4 = *(undefined1 (*) [16])(puVar31 + 0xc);
              puVar3 = (undefined4 *)((longlong)pvVar21 + lVar30 * 0x30);
              *puVar3 = *puVar31;
              puVar3[1] = uVar9;
              puVar3[2] = auVar40._0_4_;
              puVar3[3] = auVar4._0_4_;
              puVar31 = (undefined4 *)((longlong)pvVar21 + lVar30 * 0x30 + 0x10);
              *puVar31 = uVar7;
              puVar31[1] = uVar10;
              puVar31[2] = auVar40._4_4_;
              puVar31[3] = auVar4._4_4_;
              puVar31 = (undefined4 *)((longlong)pvVar21 + lVar30 * 0x30 + 0x20);
              *puVar31 = uVar8;
              puVar31[1] = uVar11;
              puVar31[2] = auVar40._8_4_;
              puVar31[3] = auVar4._8_4_;
            } while (uVar27 < uVar36);
          }
        }
      }
      else {
        iVar17 = (**(code **)(this->_padding_ + 0xa0))(this);
        pTVar20 = FSkeletalMeshObject::GetRenderSections(this,iVar17);
        iVar17 = pTVar20->ArrayNum;
        pFVar26 = (pTVar20->AllocatorInstance).Data;
        iStack_d4 = iVar17;
        pFStack_c8 = pFVar26;
        if ((iVar17 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar32 = pFVar26 + (longlong)iVar17 * 0x118;
        for (pFVar33 = pFVar26; pFVar33 != pFVar32; pFVar33 = pFVar33 + 0x118) {
          if ((*(int *)(pFVar33 + 8) != 0) && (pFVar33[0x110] == (FScriptContainerElement)0x0)) {
            uVar24 = (ulonglong)(uint)((int)uVar24 + *(int *)(pFVar33 + 0x40));
          }
          uVar36 = (uint)uVar24;
        }
        pFStack_d0 = pFVar32;
        pvStack_80 = FRDGScatterUploadBase::Add_GetRef
                               ((FRDGScatterUploadBase *)param_2,uVar37,uVar36);
        if (((int)uVar36 < 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar16)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar30 = 0;
        uVar29 = 0;
        lStack_e0 = 0;
        uVar27 = (uint)uVar5;
        if (pFVar26 != pFVar32) {
          pFVar33 = pFVar26 + 0x40;
          do {
            if ((*(int *)(pFVar33 + -0x38) != 0) && (pFVar33[0xd0] == (FScriptContainerElement)0x0))
            {
              puVar28 = *(ushort **)(pFVar33 + -8);
              iVar17 = *(int *)pFVar33;
              puVar2 = puVar28 + iVar17;
              while( true ) {
                if (*(int *)pFVar33 != iVar17) {
                  auStackX_20[0] = 0;
                  `TCheckedPointerIterator<unsigned_short_const_,int,0>::operator!='::__l2::
                  <lambda_1>::operator()(auStackX_20);
                }
                pFVar32 = pFStack_d0;
                if (puVar28 == puVar2) break;
                uVar5 = *puVar28;
                if ((iStack_98 <= (int)(uint)uVar5) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                puVar31 = (undefined4 *)((ulonglong)uVar5 * 0x40 + lStack_a0);
                uVar27 = 0;
                if ((int)uVar29 < (int)uVar36) {
                  uVar27 = ~uVar29 >> 0x1f;
                }
                if ((uVar27 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar16)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar7 = puVar31[1];
                uVar8 = puVar31[2];
                auVar40 = *(undefined1 (*) [16])(puVar31 + 8);
                lStack_e0 = lStack_e0 + 1;
                uVar9 = puVar31[4];
                uVar10 = puVar31[5];
                uVar11 = puVar31[6];
                uVar29 = uVar29 + 1;
                auVar4 = *(undefined1 (*) [16])(puVar31 + 0xc);
                puVar28 = puVar28 + 1;
                puVar3 = (undefined4 *)((longlong)pvStack_80 + lVar30 * 0x30);
                *puVar3 = *puVar31;
                puVar3[1] = uVar9;
                puVar3[2] = auVar40._0_4_;
                puVar3[3] = auVar4._0_4_;
                puVar31 = (undefined4 *)((longlong)pvStack_80 + lVar30 * 0x30 + 0x10);
                *puVar31 = uVar7;
                puVar31[1] = uVar10;
                puVar31[2] = auVar40._4_4_;
                puVar31[3] = auVar4._4_4_;
                puVar31 = (undefined4 *)((longlong)pvStack_80 + lVar30 * 0x30 + 0x20);
                *puVar31 = uVar8;
                puVar31[1] = uVar11;
                puVar31[2] = auVar40._8_4_;
                puVar31[3] = auVar4._8_4_;
                lVar30 = lStack_e0;
              }
            }
            pFVar1 = pFVar33 + 0xd8;
            pFVar26 = pFStack_c8;
            uVar38 = uStack_b0;
            pFVar33 = pFVar33 + 0x118;
            iVar17 = iStack_d4;
            uVar27 = uStack_d8;
          } while (pFVar1 != pFVar32);
        }
        if (iStack_b8 != 0) {
          pFStack_c8 = FRDGScatterUploadBase::Add_GetRef
                                 ((FRDGScatterUploadBase *)param_2,(int)uVar38 + uVar27,uVar36);
          if (((int)uVar36 < 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ArrayNum >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xfe,L""), bVar16)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar30 = 0;
          uVar27 = 0;
          lStack_e0 = 0;
          pFVar33 = pFVar26 + (longlong)iVar17 * 0x118;
          pFStack_d0 = pFVar33;
          if (pFVar26 != pFVar33) {
            pFVar26 = pFVar26 + 0x40;
            do {
              if ((*(int *)(pFVar26 + -0x38) != 0) &&
                 (pFVar26[0xd0] == (FScriptContainerElement)0x0)) {
                puVar28 = *(ushort **)(pFVar26 + -8);
                iVar17 = *(int *)pFVar26;
                puVar2 = puVar28 + iVar17;
                while( true ) {
                  if (*(int *)pFVar26 != iVar17) {
                    auStack_e8[0] = 0;
                    `TCheckedPointerIterator<unsigned_short_const_,int,0>::operator!='::__l2::
                    <lambda_1>::operator()(auStack_e8);
                  }
                  pFVar33 = pFStack_d0;
                  if (puVar28 == puVar2) break;
                  uVar5 = *puVar28;
                  if ((iStack_b8 <= (int)(uint)uVar5) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar16)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  puVar31 = (undefined4 *)((ulonglong)uVar5 * 0x40 + lStack_c0);
                  uVar29 = 0;
                  if ((int)uVar27 < (int)uVar36) {
                    uVar29 = ~uVar27 >> 0x1f;
                  }
                  if ((uVar29 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                          ,0x14f,
                                          L"Array index out of bounds: %lld from an array of size %lld"
                                         ), bVar16)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  uVar7 = puVar31[1];
                  uVar8 = puVar31[2];
                  auVar40 = *(undefined1 (*) [16])(puVar31 + 8);
                  lStack_e0 = lStack_e0 + 1;
                  uVar9 = puVar31[4];
                  uVar10 = puVar31[5];
                  uVar11 = puVar31[6];
                  uVar27 = uVar27 + 1;
                  auVar4 = *(undefined1 (*) [16])(puVar31 + 0xc);
                  puVar28 = puVar28 + 1;
                  pFVar33 = pFStack_c8 + lVar30 * 0x30;
                  *(undefined4 *)pFVar33 = *puVar31;
                  *(undefined4 *)(pFVar33 + 4) = uVar9;
                  *(int *)(pFVar33 + 8) = auVar40._0_4_;
                  *(int *)(pFVar33 + 0xc) = auVar4._0_4_;
                  pFVar33 = pFStack_c8 + (lVar30 * 0xc + 4) * 4;
                  *(undefined4 *)pFVar33 = uVar7;
                  *(undefined4 *)(pFVar33 + 4) = uVar10;
                  *(int *)(pFVar33 + 8) = auVar40._4_4_;
                  *(int *)(pFVar33 + 0xc) = auVar4._4_4_;
                  pFVar33 = pFStack_c8 + (lVar30 * 0xc + 8) * 4;
                  *(undefined4 *)pFVar33 = uVar8;
                  *(undefined4 *)(pFVar33 + 4) = uVar11;
                  *(int *)(pFVar33 + 8) = auVar40._8_4_;
                  *(int *)(pFVar33 + 0xc) = auVar4._8_4_;
                  lVar30 = lStack_e0;
                }
              }
              pFVar32 = pFVar26 + 0xd8;
              pFVar26 = pFVar26 + 0x118;
            } while (pFVar32 != pFVar33);
          }
        }
      }
      puStack_a8 = (ulonglong *)((longlong)puStack_a8 + 0xc);
    } while (puStack_a8 != puStack_78);
  }
  if (bVar39) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 1456f9790

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FSplineMeshSceneResourceParameters_&,FRDGBuilder_&),void,FSplineMeshSceneResourceParameters_&,FRDGBuilder_&>
::Call(void *param_1,FSplineMeshSceneResourceParameters *param_2,FRDGBuilder *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001456f979c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,param_3);
  return;
}

// Call @ 1456f97b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSceneUniformBufferMemberRegistration<FSplineMeshSceneResourceParameters>::TSceneUniformBufferMemberRegistration<FSplineMeshSceneResourceParameters>'::__l2::<lambda_1>,void,void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&>
::Call(void *param_1,void **param_2,FShaderParametersMetadata *param_3,FRDGBuilder *param_4)

{
  `TSceneUniformBufferMemberRegistration<FSplineMeshSceneResourceParameters>::
  TSceneUniformBufferMemberRegistration<FSplineMeshSceneResourceParameters>'::__l2::<lambda_1>::
  operator()(param_1,*param_2,param_3,param_4);
  return;
}

// Call @ 14575b140

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(RendererViewData::FParameters_&,FRDGBuilder_&),void,RendererViewData::FParameters_&,FRDGBuilder_&>
::Call(void *param_1,FParameters *param_2,FRDGBuilder *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00014575b14c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,param_3);
  return;
}

// Call @ 14575b160

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_1>,unsigned_int>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return *(uint *)(lVar3 + 8);
}

// Call @ 14575b1b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSceneUniformBufferMemberRegistration<RendererViewData::FParameters>::TSceneUniformBufferMemberRegistration<RendererViewData::FParameters>'::__l2::<lambda_1>,void,void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&>
::Call(void *param_1,void **param_2,FShaderParametersMetadata *param_3,FRDGBuilder *param_4)

{
  `TSceneUniformBufferMemberRegistration<RendererViewData::FParameters>::
  TSceneUniformBufferMemberRegistration<RendererViewData::FParameters>'::__l2::<lambda_1>::
  operator()(param_1,*param_2,param_3,param_4);
  return;
}

// Call @ 14575b1c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FViewDebugInfo::CaptureNextFrame'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 3) = 1;
  *(undefined1 *)(*(longlong *)param_1 + 2) = 1;
  return;
}

// Call @ 14575b1e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FViewDebugInfo::ClearCaptureData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 4) = 1;
  return;
}

// Call @ 14575b1f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FViewDebugInfo::DisableLiveCapture'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 3) = 0;
  *(undefined1 *)(*(longlong *)param_1 + 2) = 0;
  return;
}

// Call @ 14575b210

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FViewDebugInfo::EnableLiveCapture'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined1 *)(*(longlong *)param_1 + 3) = 0;
  *(undefined1 *)(*(longlong *)param_1 + 2) = 1;
  return;
}

// Call @ 14575b230

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FViewDebugInfo::ProcessPrimitives'::__l2::<lambda_1>,void>::Call(void *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  FDestructionSentinel FStack_28;
  
  lVar1 = *(longlong *)param_1;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 8),
             (FWriteAccessScope *)&FStack_28);
  *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + 1;
  bVar4 = false;
  uVar8 = *(int *)(lVar1 + 0x18) - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 << 4;
    bVar4 = false;
    do {
      uVar7 = 0;
      if ((int)uVar8 < *(int *)(lVar1 + 0x18)) {
        uVar7 = ~uVar8 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (((*(int *)(*(longlong *)(lVar1 + 0x10) + 8 + lVar9) == 0) ||
          (plVar2 = *(longlong **)(*(longlong *)(lVar1 + 0x10) + lVar9), plVar2 == (longlong *)0x0))
         || (cVar6 = (**(code **)(*plVar2 + 0x68))(), cVar6 == '\0')) {
        bVar4 = true;
      }
      lVar9 = lVar9 + -0x10;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  *(int *)(lVar1 + 0x24) = *(int *)(lVar1 + 0x24) + -1;
  if (bVar4) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar1 + 8),false);
  }
  if (FStack_28.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(FStack_28.Accessor,&FStack_28);
  }
  return;
}

// Call @ 14575b240

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRayTracingTestbed::RunTest'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  uVar1 = *(undefined8 *)param_1;
  bVar2 = RunRayTracingTestbed_RenderThread(*(FString **)((longlong)param_1 + 8));
  *(bool *)uVar1 = bVar2;
  return;
}

// Call @ 14575b260

TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_> * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRendererViewDataManager::FRendererViewDataManager'::__l14::<lambda_1>,TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&>
::Call(void *param_1)

{
  return (TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_> *)(*(longlong *)param_1 + 0x28);
}

// Call @ 14575b270

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_2>,void_const_*>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  puVar3 = (undefined8 *)(*pcVar1)(uVar2);
  return (void *)*puVar3;
}

// Call @ 14575b2c0

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&>'::__l2::<lambda_3>,unsigned___int64>
::Call(void *param_1)

{
  uint uVar1;
  
  uVar1 = `CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TSizedDefaultAllocator<32>_>_&>'::
          __l2::<lambda_3>::operator()(param_1);
  return (ulonglong)uVar1;
}

// Call @ 1457dd980

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FVirtualShadowMapInvalidationSceneUniforms_&,FRDGBuilder_&),void,FVirtualShadowMapInvalidationSceneUniforms_&,FRDGBuilder_&>
::Call(void *param_1,FVirtualShadowMapInvalidationSceneUniforms *param_2,FRDGBuilder *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001457dd98c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,param_3);
  return;
}

// Call @ 1457dd9a0

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_1>,unsigned_int>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  lVar3 = (*pcVar1)(uVar2);
  return *(uint *)(lVar3 + 8);
}

// Call @ 1457dd9f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSceneUniformBufferMemberRegistration<FVirtualShadowMapInvalidationSceneUniforms>::TSceneUniformBufferMemberRegistration<FVirtualShadowMapInvalidationSceneUniforms>'::__l2::<lambda_1>,void,void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&>
::Call(void *param_1,void **param_2,FShaderParametersMetadata *param_3,FRDGBuilder *param_4)

{
  `TSceneUniformBufferMemberRegistration<FVirtualShadowMapInvalidationSceneUniforms>::
  TSceneUniformBufferMemberRegistration<FVirtualShadowMapInvalidationSceneUniforms>'::__l2::
  <lambda_1>::operator()(param_1,*param_2,param_3,param_4);
  return;
}

// Call @ 1457dda00

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_2>,void_const_*>
::Call(void *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  CheckCallable(*(void **)param_1);
  pcVar1 = *(code **)param_1;
  plVar4 = (longlong *)((longlong)param_1 + 0x10);
  if (*(longlong **)((longlong)param_1 + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)param_1 + 0x28);
  }
  uVar2 = (**(code **)(*plVar4 + 8))();
  puVar3 = (undefined8 *)(*pcVar1)(uVar2);
  return (void *)*puVar3;
}

// Call @ 1457dda50

uint __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l24::<lambda_2>,unsigned_int>
::Call(void *param_1)

{
  return *(uint *)param_1;
}

// Call @ 1457dda60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l37::<lambda_2>,void,TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_&>
::Call(void *param_1,
      TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
      *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  FViewInfo *pFVar4;
  FProjectedShadowInfo *pFVar5;
  FVirtualShadowMapArray *this;
  code *pcVar6;
  float fVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined8 *puVar10;
  bool bVar11;
  undefined1 auStackX_18 [8];
  undefined8 *puStackX_20;
  undefined4 uStack_5c;
  TArrayView<FViewInfo_const_,int> aTStack_58 [2];
  
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4066,"AddNonNaniteRenderViews",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
               ,0xfe2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4066);
  }
  fVar7 = __real_3f800000;
  puVar10 = *(undefined8 **)((longlong)param_1 + 0x18);
  iVar2 = *(int *)((longlong)param_1 + 0x20);
  puStackX_20 = puVar10 + iVar2;
  while( true ) {
    puVar8 = puStackX_20;
    if (*(int *)((longlong)param_1 + 0x20) != iVar2) {
      auStackX_18[0] = 0;
      `TCheckedPointerIterator<FProjectedShadowInfo_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_18);
    }
    if (puVar10 == puVar8) break;
    pFVar4 = *(FViewInfo **)((longlong)param_1 + 8);
    pFVar5 = (FProjectedShadowInfo *)*puVar10;
    this = *(FVirtualShadowMapArray **)param_1;
    bVar1 = *(bool *)((longlong)param_1 + 0x28);
    iVar3 = *(int *)((longlong)param_1 + 0x10);
    if ((pFVar5->bWholeSceneShadow == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("ProjectedShadowInfo->bWholeSceneShadow",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                           ,0x1245,L""), bVar9)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((pFVar5->VirtualShadowMapClipmap).Object == (FVirtualShadowMapClipmap *)0x0) {
      aTStack_58[0]._12_4_ = uStack_5c;
      aTStack_58[0].ArrayNum = iVar3;
      aTStack_58[0].DataPtr = pFVar4;
      FVirtualShadowMapArray::AddRenderViewsLocal(this,pFVar5,aTStack_58,fVar7,bVar1,false,param_2);
      puVar10 = puVar10 + 1;
    }
    else {
      if ((pFVar5->DependentView == (FViewInfo *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ProjectedShadowInfo->DependentView != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapArray.cpp"
                             ,0x1249,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FVirtualShadowMapArray::AddRenderViewsClipmap
                (this,&pFVar5->VirtualShadowMapClipmap,pFVar5->DependentView,fVar7,bVar1,false,
                 param_2);
      puVar10 = puVar10 + 1;
    }
  }
  FVirtualShadowMapArray::CreateMipViews(*(FVirtualShadowMapArray **)param_1,param_2);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Call @ 1457dda70

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'::__l2::<lambda_3>,unsigned___int64>
::Call(void *param_1)

{
  uint uVar1;
  
  uVar1 = `CreateStructuredBuffer_Impl<TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>'
          ::__l2::<lambda_3>::operator()(param_1);
  return (ulonglong)uVar1;
}

// Call @ 1457dda90

void * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l24::<lambda_3>,void_const_*>
::Call(void *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  
  piVar1 = *(int **)param_1;
  if (*(FTaskBase **)(piVar1 + 6) != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait(*(FTaskBase **)(piVar1 + 6));
  }
  if (piVar1[4] != *piVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Views.Num() == NumViews",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShared.h"
                       ,0x75,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pvVar4 = (void *)(*pcVar2)();
      return pvVar4;
    }
  }
  return *(void **)(piVar1 + 2);
}

// Call @ 1457ddaf0

TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *
__cdecl UE::Core::Private::Function::
        TFunctionRefCaller<`FVirtualShadowMapArray::RenderVirtualShadowMapsNonNanite'::__l37::<lambda_3>,TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const_&>
        ::Call(void *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar4;
  
  piVar1 = *(int **)param_1;
  if (*(FTaskBase **)(piVar1 + 6) != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait(*(FTaskBase **)(piVar1 + 6));
  }
  if (piVar1[4] != *piVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Views.Num() == NumViews",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShared.h"
                       ,0x75,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  return (TArray<Nanite::FPackedView,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *)(piVar1 + 2);
}

// Call @ 1457ddb50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`SetEnabledStatSections'::__l11::<lambda_3>,void,TStringView<wchar_t>_const_&>::
Call(void *param_1,TStringView<wchar_t> *param_2)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FString *pFVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  int iVar8;
  FString FStack_68;
  FString FStack_58;
  FString FStack_48;
  FString FStack_38;
  FString FStack_28;
  
  FStack_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2->DataPtr;
  FStack_68.Data.ArrayNum = param_2->Size;
  FStack_68.Data.ArrayMax = *(int *)&param_2->field_0xc;
  puVar1 = *(undefined8 **)param_1;
  pFVar4 = ::FString::FString(&FStack_58,L"PhysicalPages");
  pFVar6 = (FScriptContainerElement *)0x0;
  iVar3 = (pFVar4->Data).ArrayNum;
  iVar5 = FStack_68.Data.ArrayNum;
  iVar7 = 0;
  iVar8 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar8 = iVar7;
  }
  if (iVar5 == iVar8) {
    if ((iVar5 != 0) && (iVar8 != 0)) {
      iVar3 = iVar8;
      if (iVar5 < iVar8) {
        iVar3 = iVar5;
      }
      iVar3 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)FStack_68.Data.AllocatorInstance.Data,
                         (wchar_t *)(pFVar4->Data).AllocatorInstance.Data,(longlong)iVar3);
      if (iVar3 != 0) goto LAB_1457cdccb;
    }
    if (iVar5 == iVar8) {
      *(uint *)*puVar1 = *(uint *)*puVar1 | 2;
      pFVar6 = (pFVar4->Data).AllocatorInstance.Data;
      goto joined_r0x0001457cdd50;
    }
  }
LAB_1457cdccb:
  pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FStack_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2->DataPtr;
  FStack_68.Data.ArrayNum = param_2->Size;
  FStack_68.Data.ArrayMax = *(int *)&param_2->field_0xc;
  puVar1 = *(undefined8 **)param_1;
  pFVar4 = ::FString::FString(&FStack_48,L"NonNanite");
  iVar3 = (pFVar4->Data).ArrayNum;
  iVar5 = FStack_68.Data.ArrayNum;
  iVar8 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar8 = iVar7;
  }
  if (iVar5 == iVar8) {
    if ((iVar5 != 0) && (iVar8 != 0)) {
      iVar3 = iVar8;
      if (iVar5 < iVar8) {
        iVar3 = iVar5;
      }
      iVar3 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)FStack_68.Data.AllocatorInstance.Data,
                         (wchar_t *)(pFVar4->Data).AllocatorInstance.Data,(longlong)iVar3);
      if (iVar3 != 0) goto LAB_1457cdd5b;
    }
    if (iVar5 == iVar8) {
      *(uint *)*puVar1 = *(uint *)*puVar1 | 4;
      pFVar6 = (pFVar4->Data).AllocatorInstance.Data;
      goto joined_r0x0001457cdd50;
    }
  }
LAB_1457cdd5b:
  pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  FStack_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_2->DataPtr;
  FStack_68.Data.ArrayNum = param_2->Size;
  FStack_68.Data.ArrayMax = *(int *)&param_2->field_0xc;
  puVar1 = *(undefined8 **)param_1;
  pFVar4 = ::FString::FString(&FStack_38,L"Clusters");
  iVar3 = (pFVar4->Data).ArrayNum;
  iVar5 = FStack_68.Data.ArrayNum;
  iVar8 = iVar3 + -1;
  if (iVar3 == 0) {
    iVar8 = iVar7;
  }
  if (iVar5 == iVar8) {
    if ((iVar5 != 0) && (iVar8 != 0)) {
      iVar3 = iVar8;
      if (iVar5 < iVar8) {
        iVar3 = iVar5;
      }
      iVar3 = FGenericPlatformStricmp::Strnicmp
                        ((wchar_t *)FStack_68.Data.AllocatorInstance.Data,
                         (wchar_t *)(pFVar4->Data).AllocatorInstance.Data,(longlong)iVar3);
      if (iVar3 != 0) goto LAB_1457cddeb;
    }
    if (iVar5 == iVar8) {
      *(uint *)*puVar1 = *(uint *)*puVar1 | 8;
      pFVar6 = (pFVar4->Data).AllocatorInstance.Data;
      goto joined_r0x0001457cdd50;
    }
  }
LAB_1457cddeb:
  pFVar2 = (pFVar4->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar4 = ::FString::ConstructFromPtrSize
                     (&FStack_68,param_2->DataPtr,(int)*(undefined8 *)&param_2->Size);
  if (&FStack_28 != pFVar4) {
    pFVar6 = (pFVar4->Data).AllocatorInstance.Data;
    (pFVar4->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->Data).ArrayNum = 0;
    (pFVar4->Data).ArrayMax = 0;
  }
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
  ::FString::PrintfImpl(&FStack_68,L"Invalid argument \'%s\'\n");
  iVar3 = FStack_68.Data.ArrayNum + -1;
  if (FStack_68.Data.ArrayNum == 0) {
    iVar3 = iVar7;
  }
  ::FString::AppendChars
            (*(FString **)((longlong)param_1 + 8),(wchar_t *)FStack_68.Data.AllocatorInstance.Data,
             iVar3);
  if (FStack_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_68.Data.AllocatorInstance.Data);
  }
joined_r0x0001457cdd50:
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return;
}

// Call @ 1457ddb60

ulong64 __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FVirtualShadowMapArray::RenderVirtualShadowMapsNanite'::__l24::<lambda_4>,unsigned___int64>
::Call(void *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  ulong64 uVar4;
  
  piVar1 = *(int **)param_1;
  if (*(FTaskBase **)(piVar1 + 6) != (FTaskBase *)0x0) {
    Tasks::Private::FTaskBase::Wait(*(FTaskBase **)(piVar1 + 6));
  }
  if (piVar1[4] != *piVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Views.Num() == NumViews",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteShared.h"
                       ,0x75,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return (longlong)piVar1[4] * 0x3d0;
}

// Call @ 145861b40

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<``FSceneRenderer::InitVolumetricCloudsForViews'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  CleanUpCloudDataFunction(*(TArray<FViewInfo,TSizedDefaultAllocator<32>_> **)param_1);
  return;
}

// Call @ 145861b50

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::AddVolumetricCloud'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>::
Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FScriptContainerElement *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  ForAnyElementType *pFVar8;
  
  pFVar1 = (FScriptContainerElement *)((longlong)param_1 + 8);
  plVar7 = *(longlong **)(*(longlong *)param_1 + 0x4730);
  plVar6 = plVar7 + *(int *)(*(longlong *)param_1 + 0x4738);
  if (plVar7 != plVar6) {
    do {
      if (*plVar7 == *(longlong *)pFVar1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Scene->VolumetricCloudStack.Contains(VolumetricCloudSceneProxy)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VolumetricCloudRendering.cpp"
                           ,0x249,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        break;
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar6);
  }
  lVar2 = *(longlong *)param_1;
  pFVar8 = (ForAnyElementType *)(lVar2 + 0x4730);
  if (((pFVar8->Data <= pFVar1) && (pFVar1 < pFVar8->Data + (longlong)*(int *)(lVar2 + 0x473c) * 8))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)(lVar2 + 0x4738);
  if (iVar5 == *(int *)(lVar2 + 0x473c)) {
    iVar5 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar8,(int *)(lVar2 + 0x473c));
  }
  *(int *)(lVar2 + 0x4738) = iVar5 + 1;
  *(longlong *)(pFVar8->Data + (longlong)iVar5 * 8) = *(longlong *)pFVar1;
  plVar6 = ::operator_new(0x390);
  if (plVar6 == (longlong *)0x0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    *plVar6 = *(longlong *)pFVar1;
    FVolumetricCloudCommonShaderParameters::FVolumetricCloudCommonShaderParameters
              ((FVolumetricCloudCommonShaderParameters *)(plVar6 + 2));
    plVar6[0x70] = 0;
  }
  **(undefined8 **)pFVar1 = plVar6;
  *(undefined8 *)(*(longlong *)param_1 + 0x4728) = **(undefined8 **)pFVar1;
                    /* WARNING: Could not recover jumptable at 0x00014585a9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x240))(*(longlong **)param_1,1);
  return;
}

// Call @ 145861b60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FScene::RemoveVolumetricCloud'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  void *pvVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  
  pvVar1 = (void *)**(undefined8 **)((longlong)param_1 + 8);
  if (pvVar1 != (void *)0x0) {
    if (*(FRHIResource **)((longlong)pvVar1 + 0x380) != (FRHIResource *)0x0) {
      FRHIResource::Release(*(FRHIResource **)((longlong)pvVar1 + 0x380));
    }
    ::operator_delete(pvVar1,0x390);
  }
  lVar2 = *(longlong *)param_1;
  plVar3 = *(longlong **)(lVar2 + 0x4730);
  if (plVar3 != plVar3 + *(int *)(lVar2 + 0x4738)) {
    plVar9 = plVar3;
    do {
      if (*plVar9 == *(longlong *)((longlong)param_1 + 8)) {
        iVar7 = (int)((longlong)plVar9 - (longlong)plVar3 >> 3);
        if (iVar7 != -1) {
          memmove(plVar3 + iVar7,plVar3 + iVar7 + 1,
                  (longlong)((*(int *)(lVar2 + 0x4738) - iVar7) + -1) << 3);
          *(int *)(lVar2 + 0x4738) = *(int *)(lVar2 + 0x4738) + -1;
        }
        break;
      }
      plVar9 = plVar9 + 1;
    } while (plVar9 != plVar3 + *(int *)(lVar2 + 0x4738));
  }
  lVar2 = *(longlong *)param_1;
  if (*(int *)(lVar2 + 0x4738) < 1) {
    *(undefined8 *)(lVar2 + 0x4728) = 0;
  }
  else {
    uVar8 = *(int *)(lVar2 + 0x4738) - 1;
    uVar6 = 0;
    if ((int)uVar8 < *(int *)(lVar2 + 0x4738)) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined8 *)(*(longlong *)param_1 + 0x4728) =
         **(undefined8 **)
           (*(longlong *)(lVar2 + 0x4730) + -8 + (longlong)*(int *)(lVar2 + 0x4738) * 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00014585acf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)param_1 + 0x240))(*(longlong **)param_1,1);
  return;
}

// Call @ 1458e0e40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<void_(__cdecl*)(FMeshPaintTextureParameters_&,FRDGBuilder_&),void,FMeshPaintTextureParameters_&,FRDGBuilder_&>
::Call(void *param_1,FMeshPaintTextureParameters *param_2,FRDGBuilder *param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001458e0e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)param_1)(param_2,param_3);
  return;
}

// Call @ 1458e0e60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TSceneUniformBufferMemberRegistration<FMeshPaintTextureParameters>::TSceneUniformBufferMemberRegistration<FMeshPaintTextureParameters>'::__l2::<lambda_1>,void,void_*,FShaderParametersMetadata_const_&,FRDGBuilder_&>
::Call(void *param_1,void **param_2,FShaderParametersMetadata *param_3,FRDGBuilder *param_4)

{
  `TSceneUniformBufferMemberRegistration<FMeshPaintTextureParameters>::
  TSceneUniformBufferMemberRegistration<FMeshPaintTextureParameters>'::__l2::<lambda_1>::operator()
            (param_1,*param_2,param_3,param_4);
  return;
}

// Call @ 1458e0e70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`RuntimeVirtualTexture::GetRuntimeVirtualTextureSceneIndex_GameThread'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  int iStack_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_30;
  
  lVar5 = (**(code **)(**(longlong **)((longlong)param_1 + 8) + 0x420))();
  if (lVar5 != 0) {
    iVar2 = *(int *)((longlong)param_1 + 0x10);
    iVar3 = *(int *)(lVar5 + 0x4b50);
    TStack_30.Array = (TBitArray<FDefaultBitArrayAllocator> *)(lVar5 + 0x4b38);
    iStack_58 = 0;
    uStack_54 = 1;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar3 != 0) {
      pTVar7 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x4b48);
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x4b48) ==
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar7 = TStack_30.Array;
      }
      uVar4 = *(uint *)(pTVar7->AllocatorInstance).InlineData;
      iStack_40 = 0;
      iStack_58 = 0;
      while (uVar4 == 0) {
        iStack_40 = iStack_40 + 0x20;
        lVar6 = (longlong)iStack_58;
        iStack_58 = iStack_58 + 1;
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_58) goto LAB_1458d3a57;
        uVar4 = *(uint *)((pTVar7->AllocatorInstance).InlineData + lVar6 * 4 + 4);
      }
      uStack_54 = -uVar4 & uVar4;
      uVar1 = (ulonglong)uStack_54 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iStack_44 = (int)lVar6 + -1 + iStack_40;
      if (iVar3 < iStack_44) {
LAB_1458d3a57:
        iStack_44 = iVar3;
      }
    }
    TStack_30._padding_._0_4_ = iStack_58;
    TStack_30._padding_._4_4_ = uStack_54;
    TStack_30.UnvisitedBitMask = 0xffffffff;
    TStack_30.CurrentBitIndex = iStack_44;
    TStack_30._28_4_ = uStack_3c;
    TStack_30.BaseBitIndex = iStack_40;
    if (iStack_44 < iVar3) {
      do {
        if (*(int *)(*(longlong *)
                      (*(longlong *)(lVar5 + 0x4b28) + (longlong)TStack_30.CurrentBitIndex * 8) + 4)
            == iVar2) goto LAB_1458d3ac9;
        TStack_30.UnvisitedBitMask = TStack_30.UnvisitedBitMask & ~TStack_30._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_30);
      } while (TStack_30.CurrentBitIndex < (TStack_30.Array)->NumBits);
    }
    TStack_30.CurrentBitIndex = -1;
LAB_1458d3ac9:
    **(int **)param_1 = TStack_30.CurrentBitIndex;
  }
  return;
}

// Call @ 1458e0e80

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRuntimeVirtualTextureSceneProxy::MarkUnused'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  *(undefined8 *)(*(longlong *)param_1 + 0x10) = 0;
  *(undefined4 *)(*(longlong *)param_1 + 0x140) = 0;
  *(undefined8 *)(*(longlong *)param_1 + 0x148) = 0;
  *(undefined4 *)(*(longlong *)param_1 + 0x150) = 0xffffffff;
  return;
}

// Call @ 1458e0eb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FRuntimeVirtualTextureSceneProxy::FRuntimeVirtualTextureSceneProxy'::__l8::<lambda_2>,void,FRHICommandListImmediate_&>
::Call(void *param_1,FRHICommandListImmediate *param_2)

{
  FVirtualTextureProducerHandle FVar1;
  undefined4 extraout_var;
  IAllocatedVirtualTexture *pIVar2;
  
  FVar1 = URuntimeVirtualTexture::GetProducerHandle
                    (*(URuntimeVirtualTexture **)((longlong)param_1 + 8));
  *(undefined4 *)(*(longlong *)param_1 + 0x140) =
       *(undefined4 *)CONCAT44(extraout_var,FVar1.PackedValue);
  pIVar2 = URuntimeVirtualTexture::GetAllocatedVirtualTexture
                     (*(URuntimeVirtualTexture **)((longlong)param_1 + 8));
  *(IAllocatedVirtualTexture **)(*(longlong *)param_1 + 0x148) = pIVar2;
  *(undefined4 *)(*(longlong *)param_1 + 0x150) =
       *(undefined4 *)(*(longlong *)(*(longlong *)param_1 + 0x148) + 0x70);
  return;
}

