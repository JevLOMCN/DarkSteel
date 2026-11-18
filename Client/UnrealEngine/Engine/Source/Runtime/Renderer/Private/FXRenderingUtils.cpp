// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 20

// CanMaterialRenderBeforeFXPostOpaque @ 14486a340

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __cdecl
UE::FXRenderingUtils::CanMaterialRenderBeforeFXPostOpaque
          (FSceneViewFamily *param_1,FPrimitiveSceneProxy *param_2,FMaterial *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  FScene *pFVar4;
  
  bVar1 = IsTranslucentBlendMode(param_3);
  if ((((bVar1) && (iVar3 = (**(code **)(param_3->_padding_ + 0x40))(param_3), iVar3 == 0)) &&
      ((bVar1 = FPrimitiveSceneProxy::ShouldRenderCustomDepth(param_2), !bVar1 ||
       (cVar2 = (**(code **)(param_3->_padding_ + 0x60))(param_3), cVar2 == '\0')))) &&
     ((pFVar4 = (FScene *)(**(code **)(param_2->Scene->_padding_ + 0x420))(),
      pFVar4 == (FScene *)0x0 ||
      ((bVar1 = CanMaterialRenderInLumenTranslucencyRadianceCacheMarkPass
                          (pFVar4,param_1,param_2,param_3), !bVar1 &&
       (bVar1 = CanMaterialRenderInLumenFrontLayerTranslucencyGBufferPass
                          (pFVar4,param_1,param_2,param_3), !bVar1)))))) {
    return false;
  }
  return true;
}

// ConvertViewArray @ 14486c920

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TStridedView<FSceneView_const_,int> * __cdecl
UE::FXRenderingUtils::ConvertViewArray
          (TStridedView<FSceneView_const_,int> *__return_storage_ptr__,
          TArrayView<FViewInfo_const_,int> *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  FViewInfo *pFVar3;
  bool bVar4;
  int iVar5;
  TStridedView<FSceneView_const_,int> *pTVar6;
  
  pFVar3 = param_1->DataPtr;
  uVar1 = *(undefined8 *)&param_1->ArrayNum;
  __return_storage_ptr__->BytesBetweenElements = 0x2970;
  __return_storage_ptr__->FirstElementPtr = (FSceneView *)pFVar3;
  iVar5 = (int)uVar1;
  __return_storage_ptr__->NumElements = iVar5;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x3f,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TStridedView<FSceneView_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  if (__return_storage_ptr__->BytesBetweenElements < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x40,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TStridedView<FSceneView_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  if ((__return_storage_ptr__->BytesBetweenElements & 0xf) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BytesBetweenElements % alignof(ElementType) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\StridedView.h"
                       ,0x41,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pTVar6 = (TStridedView<FSceneView_const_,int> *)(*pcVar2)();
      return pTVar6;
    }
  }
  return __return_storage_ptr__;
}

// CreateSceneUniformBuffer @ 14486df20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FSceneUniformBuffer * __cdecl
UE::FXRenderingUtils::CreateSceneUniformBuffer(FRDGBuilder *param_1,FSceneInterface *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  FSceneUniformBuffer *pFVar6;
  longlong lVar7;
  undefined8 *local_18 [2];
  
  puVar5 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,0x10);
  if (puVar5 == (undefined8 *)0x0) {
    puVar5 = (undefined8 *)0x0;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSceneUniformBuffer *)(*pcVar2)();
      return pFVar6;
    }
  }
  else {
    *puVar5 = &___7__TObject_VFSceneUniformBuffer___FRDGAllocator__6B_;
    FSceneUniformBuffer::FSceneUniformBuffer((FSceneUniformBuffer *)(puVar5 + 1));
  }
  local_18[0] = puVar5;
  if (((undefined8 **)param_1->_padding_ <= local_18) &&
     (local_18 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FSceneUniformBuffer *)(*pcVar2)();
      return pFVar6;
    }
  }
  iVar4 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar4 == *piVar1) {
    iVar4 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar4 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar4 * 8) = local_18[0];
  lVar7 = (**(code **)(param_2->_padding_ + 0x418))(param_2);
  if (lVar7 != 0) {
    FGPUScene::FillSceneUniformBuffer
              ((FGPUScene *)(lVar7 + 0x3500),param_1,(FSceneUniformBuffer *)(puVar5 + 1));
  }
  return (FSceneUniformBuffer *)(puVar5 + 1);
}

// CreateShaderBindingTable @ 14486e090

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIShaderBindingTable> __cdecl
UE::FXRenderingUtils::RayTracing::CreateShaderBindingTable
          (FRHICommandListBase *param_1,FSceneInterface *param_2,uint param_3)

{
  longlong lVar1;
  undefined4 in_register_00000084;
  uint in_stack_ffffffffffffffe8;
  
  lVar1 = (**(code **)(*(longlong *)CONCAT44(in_register_00000084,param_3) + 0x418))
                    ((longlong *)CONCAT44(in_register_00000084,param_3));
  if (lVar1 != 0) {
    FRayTracingShaderBindingTable::AllocateTransientRHI
              ((FRayTracingShaderBindingTable *)(lVar1 + 0x3cc0),param_1,
               (ERayTracingShaderBindingMode)param_2,2,in_stack_ffffffffffffffe8 & 0xffffff00);
    return (TRefCountPtr<FRHIShaderBindingTable>)(FRHIShaderBindingTable *)param_1;
  }
  (param_1->MemManager).Top = (uchar *)0x0;
  return (TRefCountPtr<FRHIShaderBindingTable>)(FRHIShaderBindingTable *)param_1;
}

// GetAtlasParametersMetadata @ 14487ae30

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
UE::FXRenderingUtils::DistanceFields::GetAtlasParametersMetadata(void)

{
  code *pcVar1;
  undefined1 uStackX_8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDistanceFieldAtlasParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDistanceFieldAtlasParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDistanceFieldAtlasParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FDistanceFieldAtlasParameters::zzAppendMemberGetPrev;
      TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_18.ArrayNum = 0;
      TStack_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(uStackX_8,&TStack_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)TStack_18.AllocatorInstance.Data,TStack_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDistanceFieldAtlasParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FDistanceFieldAtlasParameters",L"FDistanceFieldAtlasParameters",(wchar_t *)0x0,
                 (wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldLightingShared.h"
                 ,0x4e,0xc0,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`FDistanceFieldAtlasParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDistanceFieldAtlasParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDistanceFieldAtlasParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDistanceFieldAtlasParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetGlobalDistanceFieldParameterData @ 14487c720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FGlobalDistanceFieldParameterData * __cdecl
UE::FXRenderingUtils::GetGlobalDistanceFieldParameterData
          (TStridedView<FSceneView_const_,int> *param_1)

{
  FSceneView *pFVar1;
  
  if (0 < param_1->NumElements) {
    pFVar1 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_1,0);
    return (FGlobalDistanceFieldParameterData *)
           ((longlong)pFVar1[1].SceneViewInitOptions.HiddenPrimitives.Hash.SecondaryData + 0x30);
  }
  return (FGlobalDistanceFieldParameterData *)0x0;
}

// GetObjectBufferParametersMetadata @ 14487caa0

/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */

FShaderParametersMetadata * __cdecl
UE::FXRenderingUtils::DistanceFields::GetObjectBufferParametersMetadata(void)

{
  code *pcVar1;
  undefined1 uStackX_8;
  TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> TStack_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDistanceFieldObjectBufferParameters::FTypeInfo::GetStructMetadata(void)'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDistanceFieldObjectBufferParameters::FTypeInfo::GetStructMetadata(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDistanceFieldObjectBufferParameters::FTypeInfo::GetStructMetadata(void)'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      pcVar1 = FDistanceFieldObjectBufferParameters::zzAppendMemberGetPrev;
      TStack_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      TStack_18.ArrayNum = 0;
      TStack_18.ArrayMax = 0;
      do {
        pcVar1 = (code *)(*pcVar1)(uStackX_8,&TStack_18);
      } while (pcVar1 != (code *)0x0);
      AlgoImpl::Reverse<FShaderParametersMetadata::FMember>
                ((FMember *)TStack_18.AllocatorInstance.Data,TStack_18.ArrayNum);
      FShaderParametersMetadata::FShaderParametersMetadata
                (&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDistanceFieldObjectBufferParameters::FTypeInfo::GetStructMetadata(void)'
                  ::__l2::StaticStructMetadata,ShaderParameterStruct,Shader,
                 L"FDistanceFieldObjectBufferParameters",L"FDistanceFieldObjectBufferParameters",
                 (wchar_t *)0x0,(wchar_t *)0x0,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\DistanceFieldLightingShared.h"
                 ,0x45,0x30,&TStack_18,false,(FRHIUniformBufferLayoutInitializer *)0x0,None);
      if ((FMember *)TStack_18.AllocatorInstance.Data != (FMember *)0x0) {
        FMemory::Free(TStack_18.AllocatorInstance.Data);
      }
      atexit(`FDistanceFieldObjectBufferParameters::FTypeInfo::GetStructMetadata'::__l2::
             _dynamic_atexit_destructor_for__StaticStructMetadata__);
      _Init_thread_footer(&`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDistanceFieldObjectBufferParameters::FTypeInfo::GetStructMetadata(void)'
                           ::__l2::_thread_safe_static_guard_0__);
      return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDistanceFieldObjectBufferParameters::FTypeInfo::GetStructMetadata(void)'
              ::__l2::StaticStructMetadata;
    }
  }
  return &`public:_static_class_FShaderParametersMetadata_const*___ptr64___cdecl_FDistanceFieldObjectBufferParameters::FTypeInfo::GetStructMetadata(void)'
          ::__l2::StaticStructMetadata;
}

// GetOrCreateMobileSceneTextureUniformBuffer @ 14487cab0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRDGUniformBuffer<FMobileSceneTextureUniformParameters> * __cdecl
UE::FXRenderingUtils::GetOrCreateMobileSceneTextureUniformBuffer
          (FRDGBuilder *param_1,TStridedView<FSceneView_const_,int> *param_2,
          EMobileSceneTextureSetupMode param_3)

{
  FSceneView *pFVar1;
  longlong lVar2;
  TRDGUniformBuffer<FMobileSceneTextureUniformParameters> *pTVar3;
  
  if ((0 < param_2->NumElements) &&
     (pFVar1 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0),
     pFVar1 != (FSceneView *)0x0)) {
    if ((pFVar1->Family->bIsViewFamilyInfo == false) ||
       (lVar2 = *(longlong *)&pFVar1->Family[1].DebugViewShaderMode, *(char *)(lVar2 + 8) == '\0'))
    {
      lVar2 = 0;
    }
    if ((lVar2 != 0) &&
       (*(TRDGUniformBuffer<FMobileSceneTextureUniformParameters> **)(lVar2 + 0x178) !=
        (TRDGUniformBuffer<FMobileSceneTextureUniformParameters> *)0x0)) {
      return *(TRDGUniformBuffer<FMobileSceneTextureUniformParameters> **)(lVar2 + 0x178);
    }
  }
  pTVar3 = CreateMobileSceneTextureUniformBuffer(param_1,(FSceneTextures *)0x0,param_3);
  return pTVar3;
}

// GetOrCreateSceneTextureUniformBuffer @ 14487cb30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TRDGUniformBuffer<FSceneTextureUniformParameters> * __cdecl
UE::FXRenderingUtils::GetOrCreateSceneTextureUniformBuffer
          (FRDGBuilder *param_1,TStridedView<FSceneView_const_,int> *param_2,Type param_3,
          ESceneTextureSetupMode param_4)

{
  FSceneViewFamily *pFVar1;
  longlong lVar2;
  bool bVar3;
  FSceneView *pFVar4;
  TRDGUniformBuffer<FSceneTextureUniformParameters> *pTVar5;
  
  if ((0 < param_2->NumElements) &&
     (pFVar4 = TStridedView<FSceneView_const_,int>::GetElementPtr(param_2,0),
     pFVar4 != (FSceneView *)0x0)) {
    pFVar1 = pFVar4->Family;
    bVar3 = HasRayTracedOverlay(pFVar1);
    if (((!bVar3) &&
        (((pFVar1->bIsViewFamilyInfo != false &&
          (lVar2 = *(longlong *)&pFVar1[1].DebugViewShaderMode, *(char *)(lVar2 + 8) != '\0')) &&
         (lVar2 != 0)))) &&
       (*(TRDGUniformBuffer<FSceneTextureUniformParameters> **)(lVar2 + 0x170) !=
        (TRDGUniformBuffer<FSceneTextureUniformParameters> *)0x0)) {
      return *(TRDGUniformBuffer<FSceneTextureUniformParameters> **)(lVar2 + 0x170);
    }
  }
  pTVar5 = CreateSceneTextureUniformBuffer(param_1,(FSceneTextures *)0x0,param_3,param_4);
  return pTVar5;
}

// GetRawViewRectUnsafe @ 14487d460

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TIntRect<int> * __cdecl
UE::FXRenderingUtils::GetRawViewRectUnsafe
          (TIntRect<int> *__return_storage_ptr__,FSceneView *param_1)

{
  code *pcVar1;
  bool bVar2;
  TIntRect<int> *pTVar3;
  
  if (param_1->bIsViewInfo == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("View.bIsViewInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\FXRenderingUtils.cpp"
                       ,0x1a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TIntRect<int> *)(*pcVar1)();
      return pTVar3;
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.Min.field0_0x0 = *(TIntPoint<int>_u_0 *)(param_1 + 1);
  (__return_storage_ptr__->field0_0x0)._s_0.Max.field0_0x0 = (TIntPoint<int>_u_0)param_1[1].Family;
  return __return_storage_ptr__;
}

// GetRayTracingMeshCommands @ 14487d4d0

FRayTracingMeshCommandStorage * __cdecl
UE::FXRenderingUtils::RayTracing::GetRayTracingMeshCommands(FSceneInterface *param_1)

{
  longlong lVar1;
  FRayTracingMeshCommandStorage *pFVar2;
  
  lVar1 = (**(code **)(param_1->_padding_ + 0x418))();
  pFVar2 = (FRayTracingMeshCommandStorage *)0x0;
  if (lVar1 != 0) {
    pFVar2 = (FRayTracingMeshCommandStorage *)(lVar1 + 0x3bb0);
  }
  return pFVar2;
}

// GetRayTracingScene @ 14487d500

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FRHIRayTracingScene * __cdecl
UE::FXRenderingUtils::RayTracing::GetRayTracingScene(FSceneInterface *param_1,FSceneView *param_2)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FRHIRayTracingScene *pFVar4;
  
  lVar3 = (**(code **)(param_1->_padding_ + 0x418))();
  if (lVar3 == 0) {
    return (FRHIRayTracingScene *)0x0;
  }
  if (param_2->bIsViewInfo == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InView.bIsViewInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\FXRenderingUtils.cpp"
                       ,0x102,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRHIRayTracingScene *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = FViewInfo::GetRayTracingSceneChecked((FViewInfo *)param_2,Base);
  return pFVar4;
}

// GetRayTracingSceneView @ 14487d570

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FRHIShaderResourceView * __cdecl
UE::FXRenderingUtils::RayTracing::GetRayTracingSceneView
          (FRHICommandListBase *param_1,FSceneInterface *param_2,FSceneView *param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FRHIShaderResourceView *pFVar4;
  TRefCountPtr<FRHIShaderResourceView> TVar5;
  FRHIResource *local_res10;
  
  lVar3 = (**(code **)(param_2->_padding_ + 0x418))(param_2);
  if (lVar3 == 0) {
    return (FRHIShaderResourceView *)0x0;
  }
  if (param_3->bIsViewInfo == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InView.bIsViewInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\FXRenderingUtils.cpp"
                       ,0x10e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRHIShaderResourceView *)(*pcVar1)();
      return pFVar4;
    }
  }
  if ((param_3->StereoPass != eSSP_FULL) && (param_3->StereoPass == eSSP_SECONDARY)) {
    FViewInfo::GetPrimaryView((FViewInfo *)param_3);
  }
  TVar5 = FRayTracingScene::CreateLayerViewRHI
                    ((FRayTracingScene *)(lVar3 + 0x3920),(FRHICommandListBase *)&local_res10,
                     (ERayTracingSceneLayer)param_1,(FViewHandle)0x0);
                    /* WARNING: Load size is inaccurate */
  pFVar4 = *TVar5.Reference;
  if (local_res10 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res10);
  }
  return pFVar4;
}

// GetSceneUniformBuffer @ 14487d7e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRDGUniformBuffer<FSceneUniformParameters> * __cdecl
UE::FXRenderingUtils::GetSceneUniformBuffer(FRDGBuilder *param_1,FSceneUniformBuffer *param_2)

{
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar1;
  
  pTVar1 = FSceneUniformBuffer::GetBuffer(param_2,param_1);
  return pTVar1;
}

// GetSceneVelocityTexture @ 14487d800

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRDGTexture * __cdecl UE::FXRenderingUtils::GetSceneVelocityTexture(FSceneView *param_1)

{
  FSceneViewFamily *pFVar1;
  longlong lVar2;
  
  pFVar1 = param_1->Family;
  if (pFVar1 != (FSceneViewFamily *)0x0) {
    if ((pFVar1->bIsViewFamilyInfo == false) ||
       (lVar2 = *(longlong *)&pFVar1[1].DebugViewShaderMode, *(char *)(lVar2 + 8) == '\0')) {
      lVar2 = 0;
    }
    if (lVar2 != 0) {
      return *(FRDGTexture **)(lVar2 + 0x288);
    }
  }
  return (FRDGTexture *)0x0;
}

// GetVisibleRayTracingShaderBindings @ 144887110

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TArrayView<FRayTracingShaderBindingData_const_,int> * __cdecl
UE::FXRenderingUtils::RayTracing::GetVisibleRayTracingShaderBindings
          (TArrayView<FRayTracingShaderBindingData_const_,int> *__return_storage_ptr__,
          FSceneView *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRayTracingShaderBindingData_const_,int> *pTVar4;
  
  iVar1 = *(int *)(param_1[1].ViewMatrices.ViewMatrix.M[3] + 1);
  __return_storage_ptr__->DataPtr =
       (FRayTracingShaderBindingData *)param_1[1].ViewMatrices.ViewMatrix.M[3][0];
  if (-1 < iVar1) {
    __return_storage_ptr__->ArrayNum = iVar1;
    return __return_storage_ptr__;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<FRayTracingShaderBindingData_const_,int> *)(*pcVar2)();
    return pTVar4;
  }
  __return_storage_ptr__->ArrayNum = iVar1;
  return __return_storage_ptr__;
}

// HasDataToBind @ 144887190

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __cdecl UE::FXRenderingUtils::DistanceFields::HasDataToBind(FSceneView *param_1)

{
  FSceneInterface *pFVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = 0;
  lVar2 = lVar4;
  if ((param_1->Family != (FSceneViewFamily *)0x0) &&
     (pFVar1 = param_1->Family->Scene, pFVar1 != (FSceneInterface *)0x0)) {
    lVar2 = (**(code **)(pFVar1->_padding_ + 0x420))();
  }
  lVar3 = lVar2 + 0x3f28;
  if (lVar2 == 0) {
    lVar3 = lVar4;
  }
  return lVar3 != 0;
}

// HasRayTracingScene @ 144887220

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __cdecl UE::FXRenderingUtils::RayTracing::HasRayTracingScene(FSceneInterface *param_1)

{
  bool bVar1;
  longlong lVar2;
  
  lVar2 = (**(code **)(param_1->_padding_ + 0x418))();
  if (lVar2 != 0) {
    bVar1 = FRayTracingScene::IsCreated((FRayTracingScene *)(lVar2 + 0x3920));
    return bVar1;
  }
  return false;
}

// SetupAtlasParameters @ 1448a0b90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::FXRenderingUtils::DistanceFields::SetupAtlasParameters
          (FRDGBuilder *param_1,uchar *param_2,FSceneView *param_3)

{
  FSceneInterface *pFVar1;
  FRDGTexture *pFVar2;
  FRHISamplerState *pFVar3;
  undefined8 uVar4;
  FDistanceFieldSceneData *pFVar5;
  FDistanceFieldAtlasParameters *pFVar6;
  FRDGBufferSRV *pFVar7;
  FRDGBufferSRV *pFVar8;
  FRDGSystemTextures *pFVar9;
  FDistanceFieldSceneData *pFVar10;
  FDistanceFieldSceneData *pFVar11;
  FRDGBufferSRVDesc local_e8;
  FDistanceFieldAtlasParameters local_c8;
  
  if (param_2 != (uchar *)0x0) {
    pFVar11 = (FDistanceFieldSceneData *)0x0;
    if (param_3 != (FSceneView *)0x0) {
      pFVar5 = pFVar11;
      if ((param_3->Family != (FSceneViewFamily *)0x0) &&
         (pFVar1 = param_3->Family->Scene, pFVar1 != (FSceneInterface *)0x0)) {
        pFVar5 = (FDistanceFieldSceneData *)(**(code **)(pFVar1->_padding_ + 0x420))();
      }
      pFVar10 = (FDistanceFieldSceneData *)&pFVar5[10].PendingAddOperations.Elements.field_0x20;
      if (pFVar5 == (FDistanceFieldSceneData *)0x0) {
        pFVar10 = pFVar11;
      }
      if ((pFVar10 != (FDistanceFieldSceneData *)0x0) && (0 < pFVar10->NumObjectsInBuffer)) {
        pFVar6 = DistanceField::SetupAtlasParameters(&local_c8,param_1,pFVar10);
        pFVar7 = pFVar6->DistanceFieldIndirectionTable;
        *(FRDGBufferSRV **)param_2 = pFVar6->SceneDistanceFieldAssetData;
        *(FRDGBufferSRV **)(param_2 + 8) = pFVar7;
        pFVar2 = pFVar6->DistanceFieldIndirectionAtlas;
        *(FRDGBufferSRV **)(param_2 + 0x10) = pFVar6->DistanceFieldIndirection2Table;
        *(FRDGTexture **)(param_2 + 0x18) = pFVar2;
        pFVar3 = pFVar6->DistanceFieldSampler;
        *(FRDGTexture **)(param_2 + 0x20) = pFVar6->DistanceFieldBrickTexture;
        *(FRHISamplerState **)(param_2 + 0x28) = pFVar3;
        uVar4 = *(undefined8 *)((longlong)&(pFVar6->DistanceFieldBrickSize).field0_0x0 + 8);
        *(undefined8 *)(param_2 + 0x30) =
             *(undefined8 *)&(pFVar6->DistanceFieldBrickSize).field0_0x0;
        *(undefined8 *)(param_2 + 0x38) = uVar4;
        uVar4 = *(undefined8 *)
                 ((longlong)&(pFVar6->DistanceFieldUniqueDataBrickSize).field0_0x0 + 8);
        *(undefined8 *)(param_2 + 0x40) =
             *(undefined8 *)&(pFVar6->DistanceFieldUniqueDataBrickSize).field0_0x0;
        *(undefined8 *)(param_2 + 0x48) = uVar4;
        uVar4 = *(undefined8 *)
                 ((longlong)&(pFVar6->DistanceFieldBrickAtlasSizeInBricks).field0_0x0 + 8);
        *(undefined8 *)(param_2 + 0x50) =
             *(undefined8 *)&(pFVar6->DistanceFieldBrickAtlasSizeInBricks).field0_0x0;
        *(undefined8 *)(param_2 + 0x58) = uVar4;
        uVar4 = *(undefined8 *)((longlong)&(pFVar6->DistanceFieldBrickAtlasMask).field0_0x0 + 8);
        *(undefined8 *)(param_2 + 0x60) =
             *(undefined8 *)&(pFVar6->DistanceFieldBrickAtlasMask).field0_0x0;
        *(undefined8 *)(param_2 + 0x68) = uVar4;
        uVar4 = *(undefined8 *)((longlong)&(pFVar6->DistanceFieldBrickAtlasSizeLog2).field0_0x0 + 8)
        ;
        *(undefined8 *)(param_2 + 0x70) =
             *(undefined8 *)&(pFVar6->DistanceFieldBrickAtlasSizeLog2).field0_0x0;
        *(undefined8 *)(param_2 + 0x78) = uVar4;
        uVar4 = *(undefined8 *)
                 ((longlong)&(pFVar6->DistanceFieldBrickAtlasTexelSize).field0_0x0 + 8);
        *(undefined8 *)(param_2 + 0x80) =
             *(undefined8 *)&(pFVar6->DistanceFieldBrickAtlasTexelSize).field0_0x0;
        *(undefined8 *)(param_2 + 0x88) = uVar4;
        uVar4 = *(undefined8 *)
                 ((longlong)&(pFVar6->DistanceFieldBrickAtlasHalfTexelSize).field0_0x0 + 8);
        *(undefined8 *)(param_2 + 0x90) =
             *(undefined8 *)&(pFVar6->DistanceFieldBrickAtlasHalfTexelSize).field0_0x0;
        *(undefined8 *)(param_2 + 0x98) = uVar4;
        uVar4 = *(undefined8 *)
                 ((longlong)&(pFVar6->DistanceFieldBrickOffsetToAtlasUVScale).field0_0x0 + 8);
        *(undefined8 *)(param_2 + 0xa0) =
             *(undefined8 *)&(pFVar6->DistanceFieldBrickOffsetToAtlasUVScale).field0_0x0;
        *(undefined8 *)(param_2 + 0xa8) = uVar4;
        uVar4 = *(undefined8 *)
                 ((longlong)&(pFVar6->DistanceFieldUniqueDataBrickSizeInAtlasTexels).field0_0x0 + 8)
        ;
        *(undefined8 *)(param_2 + 0xb0) =
             *(undefined8 *)&(pFVar6->DistanceFieldUniqueDataBrickSizeInAtlasTexels).field0_0x0;
        *(undefined8 *)(param_2 + 0xb8) = uVar4;
        return;
      }
    }
    local_e8.Buffer =
         FSystemTextures::GetDefaultStructuredBuffer
                   ((FSystemTextures *)&GSystemTextures,param_1,0x10);
    local_e8._padding_._4_4_ = 0;
    local_e8._padding_._0_4_ = 0xffffffff;
    local_e8._padding_ = 0;
    local_e8._padding_._0_1_ = 0;
    if ((((local_e8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_e8._padding_._0_1_ = 0x1c;
    }
    pFVar7 = FRDGBuilder::CreateSRV(param_1,&local_e8);
    local_e8.Buffer =
         FRDGBuilder::RegisterExternalBuffer
                   (param_1,(TRefCountPtr<FRDGPooledBuffer> *)&GDFDummyByteAddress.field_0x20,
                    SkipTracking);
    local_e8._padding_._0_1_ = 0;
    local_e8._padding_._4_4_ = 0;
    local_e8._padding_._0_4_ = 0xffffffff;
    local_e8._padding_ = 0;
    if ((((local_e8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      local_e8._padding_._0_1_ = 0x1c;
    }
    pFVar8 = FRDGBuilder::CreateSRV(param_1,&local_e8);
    pFVar9 = FRDGSystemTextures::Get(param_1);
    *(FRDGBufferSRV **)param_2 = pFVar7;
    *(FRDGBufferSRV **)(param_2 + 8) = pFVar8;
    *(FRDGBufferSRV **)(param_2 + 0x10) = pFVar7;
    *(FRDGTexture **)(param_2 + 0x18) = pFVar9->VolumetricBlack;
    *(FRDGTexture **)(param_2 + 0x20) = pFVar9->VolumetricBlack;
    *(FRHISamplerState **)(param_2 + 0x28) =
         TStaticStateRHI<TStaticSamplerState<1,0,0,0,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
    *(undefined8 *)(param_2 + 0x30) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)(param_2 + 0x38) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(param_2 + 0x40) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)(param_2 + 0x48) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(param_2 + 0x50) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    *(int *)(param_2 + 0x58) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    *(undefined8 *)(param_2 + 0x60) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    *(int *)(param_2 + 0x68) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    *(undefined8 *)(param_2 + 0x70) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    *(int *)(param_2 + 0x78) = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    *(undefined8 *)(param_2 + 0x80) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)(param_2 + 0x88) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(param_2 + 0x90) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)(param_2 + 0x98) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(param_2 + 0xa0) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)(param_2 + 0xa8) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
    *(undefined8 *)(param_2 + 0xb0) = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
    *(float *)(param_2 + 0xb8) = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  }
  return;
}

// SetupObjectBufferParameters @ 1448a1880

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::FXRenderingUtils::DistanceFields::SetupObjectBufferParameters
          (FRDGBuilder *param_1,uchar *param_2,FSceneView *param_3)

{
  FSceneInterface *pFVar1;
  undefined8 uVar2;
  FDistanceFieldSceneData *pFVar3;
  FDistanceFieldObjectBufferParameters *pFVar4;
  FRDGBufferSRV *pFVar5;
  FDistanceFieldSceneData *pFVar6;
  FDistanceFieldSceneData *pFVar7;
  FDistanceFieldObjectBufferParameters local_38;
  
  if (param_2 != (uchar *)0x0) {
    pFVar6 = (FDistanceFieldSceneData *)0x0;
    if (param_3 != (FSceneView *)0x0) {
      pFVar3 = pFVar6;
      if ((param_3->Family != (FSceneViewFamily *)0x0) &&
         (pFVar1 = param_3->Family->Scene, pFVar1 != (FSceneInterface *)0x0)) {
        pFVar3 = (FDistanceFieldSceneData *)(**(code **)(pFVar1->_padding_ + 0x420))();
      }
      pFVar7 = (FDistanceFieldSceneData *)&pFVar3[10].PendingAddOperations.Elements.field_0x20;
      if (pFVar3 == (FDistanceFieldSceneData *)0x0) {
        pFVar7 = pFVar6;
      }
      if ((pFVar7 != (FDistanceFieldSceneData *)0x0) && (0 < pFVar7->NumObjectsInBuffer)) {
        pFVar4 = DistanceField::SetupObjectBufferParameters(&local_38,param_1,pFVar7);
        pFVar5 = pFVar4->SceneObjectData;
        *(FRDGBufferSRV **)param_2 = pFVar4->SceneObjectBounds;
        *(FRDGBufferSRV **)(param_2 + 8) = pFVar5;
        pFVar5 = pFVar4->SceneHeightfieldObjectBounds;
        *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)&pFVar4->NumSceneObjects;
        *(FRDGBufferSRV **)(param_2 + 0x18) = pFVar5;
        uVar2 = *(undefined8 *)&pFVar4->NumSceneHeightfieldObjects;
        *(FRDGBufferSRV **)(param_2 + 0x20) = pFVar4->SceneHeightfieldObjectData;
        *(undefined8 *)(param_2 + 0x28) = uVar2;
        return;
      }
    }
    local_38.SceneHeightfieldObjectBounds =
         (FRDGBufferSRV *)
         FSystemTextures::GetDefaultStructuredBuffer
                   ((FSystemTextures *)&GSystemTextures,param_1,0x10);
    local_38.SceneObjectBounds._4_4_ = 0;
    local_38.SceneObjectData._0_4_ = 0xffffffff;
    local_38.NumSceneObjects = 0;
    local_38._20_4_ = 0;
    local_38.SceneObjectBounds._0_1_ = 0;
    if (((((FRDGBuffer *)local_38.SceneHeightfieldObjectBounds)->Desc).Usage & DrawIndirect) != None
       ) {
      local_38.SceneObjectBounds._0_1_ = 0x1c;
    }
    pFVar5 = FRDGBuilder::CreateSRV(param_1,(FRDGBufferSRVDesc *)&local_38);
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x28] = '\0';
    param_2[0x29] = '\0';
    param_2[0x2a] = '\0';
    param_2[0x2b] = '\0';
    *(FRDGBufferSRV **)param_2 = pFVar5;
    *(FRDGBufferSRV **)(param_2 + 8) = pFVar5;
    *(FRDGBufferSRV **)(param_2 + 0x18) = pFVar5;
    *(FRDGBufferSRV **)(param_2 + 0x20) = pFVar5;
  }
  return;
}

