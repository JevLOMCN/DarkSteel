// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// PreRender @ 145805ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FVirtualShadowMapInvalidationSceneRenderer::PreRender
          (FVirtualShadowMapInvalidationSceneRenderer *this,FRDGBuilder *param_1)

{
  int *piVar1;
  char cVar2;
  Type TVar3;
  FVirtualShadowMapArrayCacheManager *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar10;
  FShaderParametersMetadata *pFVar11;
  longlong lVar12;
  FRDGBuffer *pFVar13;
  undefined8 *puVar14;
  FRDGBufferUAV *pFVar15;
  FGlobalShaderMap *pFVar16;
  FGlobalShaderType *pFVar17;
  FShaderType *pFVar18;
  FName FVar19;
  FRDGEventName *pFVar20;
  FRDGScope *this_00;
  undefined8 *puVar21;
  FRDGBufferSRV *pFVar22;
  FString *pFVar23;
  EUniformBufferBindingFlags EVar24;
  byte bVar25;
  undefined1 uVar26;
  longlong *plVar27;
  undefined1 *puVar28;
  longlong lVar29;
  longlong lVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  undefined1 auStackY_348 [32];
  undefined1 local_2f8 [4];
  uint local_2f4;
  Type local_2f0;
  undefined8 *local_2e8;
  undefined8 *local_2e0;
  FRDGBufferUAVDesc local_2d8;
  int local_2c8;
  longlong local_2c0;
  FRDGBufferUAVDesc local_2b8;
  longlong local_2a8;
  FScriptContainerElement *local_2a0;
  FVirtualShadowMapInvalidationSceneRenderer *local_298;
  FRDGBufferUAVDesc local_290;
  FRDGBufferUAVDesc local_280;
  TIntVector3<int>_u_0 local_270 [2];
  TIntVector3<int>_u_0 local_258;
  TShaderRefBase<FProcessInvalidationQueueGPUCS,FShaderMapPointerTable> local_248;
  undefined8 local_238;
  FRDGBuffer *local_228;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  void *local_218;
  TRDGEventScopeGuard<FRDGScope_RHI> local_210;
  char local_200;
  FRDGBufferSRVDesc local_1f8;
  FRDGBufferSRVDesc local_1d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1a8;
  TRDGUniformBuffer<FSceneUniformParameters> *local_198;
  FRDGBuffer *pFStack_190;
  FRDGBufferUAV *local_188;
  undefined8 uStack_180;
  FRDGBufferUAV *local_178;
  FRDGBufferUAV *pFStack_170;
  undefined4 local_168;
  int iStack_164;
  int iStack_160;
  int iStack_15c;
  undefined1 local_158 [8];
  FString local_150;
  TShaderRefBase<FVSMUpdateViewInstanceStateCS,FShaderMapPointerTable> local_138;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<39>_const_*,std::tuple<>_> local_128;
  FString local_118;
  FProcessInvalidationQueueGPUCS *local_108;
  FShaderMapBase *pFStack_100;
  FShaderParametersMetadata *local_f8;
  uint uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  FRDGEventName local_d0;
  FRDGEventName local_b8;
  FInvalidationPassCommon local_a0;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_348;
  uVar9 = 0;
  local_2f4 = 0;
  if (this->CacheInstanceAsDynamicRDG != (FRDGBuffer *)0x0) {
    lVar30 = this->_padding_;
    uStack_180 = 0;
    TVar3 = *(Type *)(*(longlong *)(lVar30 + 8) + 8);
    local_2f0 = TVar3;
    local_2c0 = lVar30;
    local_298 = this;
    pTVar10 = FSceneUniformBuffer::GetBuffer((FSceneUniformBuffer *)(lVar30 + 0x20),param_1);
    pFVar11 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
    EVar24 = Static;
    if (pFVar11->BindingFlags != StaticAndShader) {
      EVar24 = pFVar11->BindingFlags;
    }
    local_2d8.Buffer = (FRDGBuffer *)CONCAT71(local_2d8.Buffer._1_7_,EVar24);
    lVar29 = *(longlong *)&this->CacheManager->field_0x8;
    pFStack_190 = local_2d8.Buffer;
    lVar12 = 0x3790;
    if (*(char *)(lVar29 + 0x3858) == '\0') {
      lVar12 = 0x378c;
    }
    iVar8 = *(int *)(lVar12 + lVar29);
    iVar32 = iVar8 * *(int *)(lVar30 + 0x18);
    local_270[0]._s_0.X = 0;
    local_270[0]._s_0.Y = 1;
    local_270[0]._s_0.Z = 1;
    local_2d8._padding_ = (longlong)pTVar10;
    local_2c8 = iVar32;
    local_198 = pTVar10;
    pFVar13 = CreateAndClearIndirectDispatchArgs
                        (param_1,TVar3,L"Shadow.Virtual.GPUInvalidateInstancesArgs",
                         (TIntVector3<int> *)&local_270[0]._s_0,1,4);
    local_248.ShaderMap = (FShaderMapBase *)CONCAT44(local_248.ShaderMap._4_4_,0x10109);
    local_248.ShaderContent = (FProcessInvalidationQueueGPUCS *)CONCAT44(iVar32,4);
    local_238 = 0;
    local_108 = local_248.ShaderContent;
    pFStack_100 = local_248.ShaderMap;
    this->GPUInvalidateInstancesArgsRDG = pFVar13;
    local_f8 = (FShaderParametersMetadata *)0x0;
    pFVar13 = FRDGBuilder::CreateBuffer
                        (param_1,(FRDGBufferDesc *)&local_108,L"Shadow.Virtual.GPUInvalidationQueue"
                         ,None);
    this->GPUInvalidationQueueRDG = pFVar13;
    local_290.Buffer = this->CacheInstanceAsDynamicRDG;
    local_290._padding_._2_1_ = 0;
    bVar25 = 0;
    if ((((local_290.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar25 = 0x1c;
    }
    local_290._padding_._0_2_ = (ushort)bVar25;
    local_188 = FRDGBuilder::CreateUAV(param_1,&local_290,SkipBarrier);
    local_280.Buffer = this->GPUInvalidateInstancesArgsRDG;
    bVar25 = 0;
    local_280._padding_._2_1_ = 0;
    if ((((local_280.Buffer)->Desc).Usage & DrawIndirect) != None) {
      bVar25 = 0x1c;
    }
    local_280._padding_._0_2_ = (ushort)bVar25;
    iStack_160 = iVar8;
    local_178 = FRDGBuilder::CreateUAV(param_1,&local_280,SkipBarrier);
    local_2d8.Buffer = this->GPUInvalidationQueueRDG;
    uVar26 = 0;
    if ((((local_2d8.Buffer)->Desc).Usage & DrawIndirect) != None) {
      uVar26 = 0x1c;
    }
    local_2d8._padding_ =
         CONCAT71((int7)((ulonglong)local_2d8._padding_ >> 8),uVar26) & 0xffffffffff0000ff;
    pFStack_170 = FRDGBuilder::CreateUAV(param_1,&local_2d8,SkipBarrier);
    bVar7 = false;
    uVar33 = 0;
    local_2a0 = (FScriptContainerElement *)0x15060d16c;
    iStack_164 = this->CacheManager->InstanceStateMaskWordStride;
    iStack_15c = iVar32;
    if (0 < *(int *)(lVar30 + 0x18)) {
      local_2a8 = 0;
      uVar9 = 0;
      bVar7 = false;
      do {
        lVar29 = local_2a8;
        lVar30 = local_2c0;
        uVar31 = 0;
        if ((int)uVar33 < *(int *)(local_2c0 + 0x18)) {
          uVar31 = ~uVar33 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        lVar30 = *(longlong *)(lVar30 + 0x10);
        if (*(int *)(lVar30 + 0x28e8 + lVar29) != -1) {
          puVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,0x10);
          if (puVar14 == (undefined8 *)0x0) {
            puVar14 = (undefined8 *)0x0;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                               ,0x61,L"");
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          else {
            *(undefined1 *)(puVar14 + 3) = 1;
            *puVar14 = &
                       ___7__TObject_VFParameters_FVSMUpdateViewInstanceStateCS___FRDGAllocator__6B_
            ;
            puVar14[2] = 0;
            puVar14[4] = 0;
            puVar14[5] = 0;
            puVar14[6] = 0;
            puVar14[7] = 0;
          }
          local_2e0 = puVar14;
          if ((((undefined8 **)param_1->_padding_ <= &local_2e0) &&
              (&local_2e0 <
               (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar8 = (int)param_1->_padding_;
          piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
          }
          *(int *)&param_1->_padding_ = iVar8 + 1;
          *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_2e0;
          *(TRDGUniformBuffer<FSceneUniformParameters> **)&((FParameters *)(puVar14 + 2))->Scene =
               local_198;
          puVar14[3] = pFStack_190;
          puVar14[4] = local_188;
          puVar14[5] = uStack_180;
          puVar14[6] = local_178;
          puVar14[7] = pFStack_170;
          puVar14[8] = CONCAT44(iStack_164,local_168);
          puVar14[9] = CONCAT44(iStack_15c,iStack_160);
          *(uint *)(puVar14 + 8) = uVar33;
          uVar9 = *(uint *)(lVar30 + 0x28e8 + lVar29);
          pFVar4 = this->CacheManager;
          if (((int)uVar9 < 0) || (*(int *)&(pFVar4->ViewData).field_0x28 <= (int)uVar9)) {
LAB_145806328:
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("CacheManager.ViewData.IsValidIndex(View.PersistentViewId.Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapCacheManager.cpp"
                               ,0x92c,L"");
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          else {
            puVar28 = *(undefined1 **)&(pFVar4->ViewData).field_0x20;
            if (puVar28 == (undefined1 *)0x0) {
              puVar28 = &(pFVar4->ViewData).field_0x10;
            }
            uVar31 = uVar9 & 0x1f;
            if ((int)uVar9 < 0) {
              uVar9 = uVar9 + 0x1f;
            }
            if ((*(uint *)(puVar28 + (longlong)((int)uVar9 >> 5) * 4) >> uVar31 & 1) == 0)
            goto LAB_145806328;
          }
          local_2b8.Buffer =
               UE::RendererPrivateUtils::Implementation::FPersistentBuffer::Register
                         ((FPersistentBuffer *)
                          ((longlong)*(int *)(lVar30 + 0x28e8 + lVar29) * 0x20 +
                          *(longlong *)&this->CacheManager->ViewData),param_1);
          local_2b8._padding_._2_1_ = 0;
          local_2b8._padding_._1_1_ = 0;
          local_2b8._padding_._0_1_ = 0;
          if ((((local_2b8.Buffer)->Desc).Usage & DrawIndirect) != None) {
            local_2b8._padding_._0_1_ = 0x1c;
          }
          FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,&local_2b8);
          pFVar13 = local_2b8.Buffer;
          pFVar15 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x48,8);
          lVar30 = pFVar13->_padding_;
          piVar1 = &(param_1->Views).Array.ArrayMax;
          *(byte *)&pFVar15->_padding_ = (byte)pFVar15->_padding_ & 0xfe;
          *(undefined8 *)((longlong)&pFVar15->_padding_ + 4) = 0xffffffffffffffff;
          pFVar15->_padding_ = lVar30;
          pFVar15->_padding_ = 0;
          *(undefined1 *)&pFVar15->_padding_ = 2;
          *(undefined1 *)&pFVar15->_padding_ = 0;
          pFVar15->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
          (pFVar15->Desc)._padding_ =
               CONCAT53(local_2b8._padding_._3_5_,
                        CONCAT12(local_2b8._padding_._2_1_,
                                 CONCAT11(local_2b8._padding_._1_1_,(undefined1)local_2b8._padding_)
                                ));
          (pFVar15->Desc).Buffer = local_2b8.Buffer;
          iVar8 = (param_1->Views).Array.ArrayNum;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                              (0x808,(ForElementType<FRDGView_*> *)&param_1->Views,piVar1);
          }
          (param_1->Views).Array.ArrayNum = iVar8 + 1;
          (param_1->Views).Array.AllocatorInstance.Data[iVar8] = (FRDGView *)pFVar15;
          *(int *)((longlong)&pFVar15->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
          FRDGUserValidation::ValidateCreateUAV(&param_1->UserValidation,pFVar15);
          puVar14[5] = pFVar15;
          pFVar16 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)local_2f0]);
          pFVar17 = FVSMUpdateViewInstanceStateCS::GetStaticType();
          if (*(int *)&pFVar17->field_0x50 != 1) {
            local_2f8[0] = 0;
            `FGlobalShaderMap::GetShader<FVSMUpdateViewInstanceStateCS>'::__l2::<lambda_1>::
            operator()(local_2f8);
          }
          pFVar18 = (FShaderType *)FVSMUpdateViewInstanceStateCS::GetStaticType();
          FGlobalShaderMap::GetShader(pFVar16,&local_1b8,pFVar18,0);
          if (local_1b8.ShaderContent == (FShader *)0x0) {
            FVar19 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_158);
            ::FName::ToString((FName *)FVar19,&local_150);
            FVSMUpdateViewInstanceStateCS::GetStaticType();
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Shader.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                               ,0xc0,L"Failed to find shader type %s in Platform %s");
            if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_150.Data.AllocatorInstance.Data);
            }
            if (bVar7) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          FVSMUpdateViewInstanceStateCS::GetStaticType();
          this = local_298;
          local_138.ShaderContent = (FVSMUpdateViewInstanceStateCS *)local_1b8.ShaderContent;
          local_138.ShaderMap = local_1b8.ShaderMap;
          iVar8 = local_298->CacheManager->InstanceStateMaskWordStride + 0x3f;
          pFVar20 = FRDGEventName::FRDGEventName(&local_d0,1,L"VSMUpdateViewInstanceState");
          pFVar11 = FVSMUpdateViewInstanceStateCS::FParameters::FTypeInfo::GetStructMetadata();
          local_258._s_0.Y = 1;
          local_258._s_0.Z = 1;
          local_258._s_0.X = (int)((iVar8 >> 0x1f & 0x3fU) + iVar8) >> 6;
          FComputeShaderUtils::AddPass<FVSMUpdateViewInstanceStateCS>
                    (param_1,pFVar20,Compute,&local_138,pFVar11,(FParameters *)(puVar14 + 2),
                     (TIntVector3<int> *)&local_258._s_0);
          uVar31 = local_2f4;
          uVar9 = local_2f4 & 0xfffffffd;
          local_2f4 = uVar9;
          if (local_d0.FormattedEventName.Data.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d0.FormattedEventName.Data.AllocatorInstance.Data);
          }
          if (((uVar31 & 1) != 0) &&
             (uVar9 = uVar31 & 0xfffffffc, local_2f4 = uVar9, local_228 != (void *)0x0)) {
            FMemory::Free(local_228);
          }
          bVar7 = true;
          lVar29 = local_2a8;
        }
        local_2a8 = lVar29 + 0x2970;
        uVar33 = uVar33 + 1;
        lVar30 = local_2c0;
      } while ((int)uVar33 < *(int *)(local_2c0 + 0x18));
    }
    bVar6 = FVirtualShadowMapArrayCacheManager::IsCacheDataAvailable(this->CacheManager);
    if (((bVar6) && (bVar7)) && ((this->CacheManager->PrevUniformParameters).NumFullShadowMaps != 0)
       ) {
      cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
      local_200 = '\0';
      if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVirtualShadowMapInvalidationSceneRenderer::PreRender(FRDGBuilder&___ptr64)___ptr64'::`25'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVirtualShadowMapInvalidationSceneRenderer::PreRender(FRDGBuilder&___ptr64)___ptr64'::`25'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__),
           `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVirtualShadowMapInvalidationSceneRenderer::PreRender(FRDGBuilder&___ptr64)___ptr64'::`25'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVirtualShadowMapInvalidationSceneRenderer::PreRender(FRDGBuilder&___ptr64)___ptr64'::`25'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc._padding_._0_4_ = 0x93f;
          `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVirtualShadowMapInvalidationSceneRenderer::PreRender(FRDGBuilder&___ptr64)___ptr64'::`25'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
          local_e0 = 0;
          uStack_dc = 0;
          `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVirtualShadowMapInvalidationSceneRenderer::PreRender(FRDGBuilder&___ptr64)___ptr64'::`25'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc._12_8_ = ZEXT48(uStack_e4);
          `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVirtualShadowMapInvalidationSceneRenderer::PreRender(FRDGBuilder&___ptr64)___ptr64'::`25'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc._padding_._4_4_ = 0;
          `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVirtualShadowMapInvalidationSceneRenderer::PreRender(FRDGBuilder&___ptr64)___ptr64'::`25'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc._padding_ = (longlong)::u_Shadow_Virtual_;
          `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVirtualShadowMapInvalidationSceneRenderer::PreRender(FRDGBuilder&___ptr64)___ptr64'::`25'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc._padding_ = (longlong)::u_Shadow_Virtual_;
          InitializeCriticalSectionAndSpinCount
                    ((LPCRITICAL_SECTION)
                     &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVirtualShadowMapInvalidationSceneRenderer::PreRender(FRDGBuilder&___ptr64)___ptr64'::`25'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                      ::__l2::Desc.Cs,4000);
          `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVirtualShadowMapInvalidationSceneRenderer::PreRender(FRDGBuilder&___ptr64)___ptr64'::`25'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
          `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVirtualShadowMapInvalidationSceneRenderer::PreRender(FRDGBuilder&___ptr64)___ptr64'::`25'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc.TraceGpuSpecId = 0;
          `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVirtualShadowMapInvalidationSceneRenderer::PreRender(FRDGBuilder&___ptr64)___ptr64'::`25'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
          ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
          atexit(```FVirtualShadowMapInvalidationSceneRenderer::PreRender'::__l25::Desc::
                 operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
                 _dynamic_atexit_destructor_for__Desc__);
          _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVirtualShadowMapInvalidationSceneRenderer::PreRender(FRDGBuilder&___ptr64)___ptr64'::`25'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        local_128._Myfirst._Val =
             &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_virtual_void___cdecl_FVirtualShadowMapInvalidationSceneRenderer::PreRender(FRDGBuilder&___ptr64)___ptr64'::`25'::<lambda_1>::operator()<>(UE::RHI::Breadcrumbs::Private::FRDGFormatTag&&___ptr64)const___ptr64'::`3'::<lambda_1>::operator()<>(void)const___ptr64'
              ::__l2::Desc;
        local_210.State = (FRDGScopeState *)param_1;
        this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                            ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
        param_1->_padding_ = (longlong)this_00;
        local_210.Scope = this_00;
        TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
        Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<39>_const_*,std::tuple<>_>_>
                  (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_128);
        if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
          FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
          FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
        }
        local_200 = '\x01';
      }
      FVirtualShadowMapArrayCacheManager::GetUniformParametersForInvalidation
                (this->CacheManager,&local_a0,param_1,(FSceneUniformBuffer *)(lVar30 + 0x20));
      puVar21 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0xa0,0x10);
      puVar14 = (undefined8 *)0x0;
      if (puVar21 == (undefined8 *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                           ,0x61,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        puVar21[2] = 0;
        *puVar21 = &___7__TObject_VFParameters_FProcessInvalidationQueueGPUCS___FRDGAllocator__6B_;
        *(undefined1 *)(puVar21 + 3) = 1;
        puVar21[4] = 0;
        *(undefined1 *)(puVar21 + 5) = 1;
        puVar21[6] = 0;
        puVar21[7] = 0;
        puVar21[8] = 0;
        puVar21[9] = 0;
        puVar21[10] = 0;
        puVar21[0xb] = 0;
        puVar21[0xe] = 0;
        puVar21[0xf] = 0;
        puVar21[0x11] = 0;
        *(undefined4 *)(puVar21 + 0x12) = 4;
        puVar14 = puVar21;
      }
      local_2e8 = puVar14;
      if ((((undefined8 **)param_1->_padding_ <= &local_2e8) &&
          (&local_2e8 <
           (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar8 = (int)param_1->_padding_;
      piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
      if (iVar8 == *piVar1) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
      }
      *(int *)&param_1->_padding_ = iVar8 + 1;
      local_1f8._padding_._4_4_ = 0;
      local_1f8._padding_._0_4_ = 0xffffffff;
      local_1f8._padding_ = 0;
      *(undefined8 **)(param_1->_padding_ + (longlong)iVar8 * 8) = local_2e8;
      local_1f8.Buffer = this->GPUInvalidateInstancesArgsRDG;
      local_1f8._padding_._0_1_ = 0;
      if ((((local_1f8.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_1f8._padding_._0_1_ = 0x1c;
      }
      pFVar22 = FRDGBuilder::CreateSRV(param_1,&local_1f8);
      puVar14[0xe] = pFVar22;
      local_1d8.Buffer = this->GPUInvalidationQueueRDG;
      local_1d8._padding_._0_1_ = 0;
      local_1d8._padding_._4_4_ = 0;
      local_1d8._padding_._0_4_ = 0xffffffff;
      local_1d8._padding_ = 0;
      if ((((local_1d8.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_1d8._padding_._0_1_ = 0x1c;
      }
      pFVar22 = FRDGBuilder::CreateSRV(param_1,&local_1d8);
      puVar14[0xf] = pFVar22;
      *(int *)(puVar14 + 0x10) = local_2c8;
      local_228 = this->GPUInvalidateInstancesArgsRDG;
      uStack_220 = 4;
      puVar14[0x11] = local_228;
      puVar14[0x12] = CONCAT44(uStack_21c,4);
      FVirtualShadowMapArrayCacheManager::SetInvalidateInstancePagesParameters
                (this->CacheManager,param_1,&local_a0,(FInvalidatePagesParameters *)(puVar14 + 2));
      lVar30 = puVar14[10];
      pFVar16 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)local_2f0]);
      pFVar18 = (FShaderType *)FProcessInvalidationQueueGPUCS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar16,&local_1a8,pFVar18,(uint)(lVar30 != 0));
      if (local_1a8.ShaderContent == (FShader *)0x0) {
        FVar19 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_218);
        pFVar23 = ::FName::ToString((FName *)FVar19,&local_118);
        if ((pFVar23->Data).ArrayNum != 0) {
          local_2a0 = (pFVar23->Data).AllocatorInstance.Data;
        }
        FProcessInvalidationQueueGPUCS::GetStaticType();
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FProcessInvalidationQueueGPUCS::GetStaticType();
      local_248.ShaderContent = (FProcessInvalidationQueueGPUCS *)local_1a8.ShaderContent;
      local_248.ShaderMap = local_1a8.ShaderMap;
      local_78._0_8_ = 0;
      local_50 = (longlong *)0x0;
      pFVar13 = local_298->GPUInvalidateInstancesArgsRDG;
      pFVar20 = FRDGEventName::FRDGEventName(&local_b8,1,L"ProcessInvalidationQueueGPU");
      FComputeShaderUtils::AddPass<FProcessInvalidationQueueGPUCS>
                (param_1,pFVar20,Compute,&local_248,(FParameters *)(puVar14 + 2),pFVar13,0,
                 (TFunction<void___cdecl(void)> *)local_78);
      if (local_b8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_b8.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (((uVar9 & 4) != 0) && (local_218 != (void *)0x0)) {
        FMemory::Free(local_218);
      }
      if (local_78._0_8_ != 0) {
        plVar27 = (longlong *)(local_78 + 0x10);
        if (local_50 != (longlong *)0x0) {
          plVar27 = local_50;
        }
        (**(code **)(*plVar27 + 0x10))();
      }
      if (local_200 != '\0') {
        TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_210);
      }
    }
  }
  return;
}

// UpdateSceneUniformBuffer @ 145818290

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualShadowMapInvalidationSceneRenderer::UpdateSceneUniformBuffer
          (FVirtualShadowMapInvalidationSceneRenderer *this,FRDGBuilder *param_1,
          FSceneUniformBuffer *param_2)

{
  int iVar1;
  int iVar2;
  FRDGBufferUAV *pFVar3;
  FShaderParametersMetadata *pFVar4;
  undefined1 uVar5;
  FRDGBufferSRVDesc local_58;
  undefined8 local_38;
  int iStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  iVar1 = this->CacheManager->InstanceStateMaskWordStride;
  iVar2 = iVar1 * *(int *)(this->_padding_ + 0x18) * 2;
  if (0 < iVar2) {
    iStack_30 = 0x10109;
    local_38 = (FRDGBufferSRV *)CONCAT44(iVar2,4);
    local_58._padding_ = CONCAT44(uStack_2c,0x10109);
    local_28 = 0;
    local_58._padding_ = (longlong)local_38;
    local_58._padding_ = 0;
    local_58._padding_ =
         (longlong)
         FRDGBuilder::CreateBuffer
                   (param_1,(FRDGBufferDesc *)&local_58,L"Shadow.Virtual.CacheInstanceAsDynamic",
                    None);
    this->CacheInstanceAsDynamicRDG = (FRDGBuffer *)local_58._padding_;
    local_58._padding_._1_7_ = (uint7)((ulonglong)local_58._padding_ >> 8) & 0xffffffffff0000;
    local_58._padding_._0_1_ = 0;
    if (((((FRDGBuffer *)local_58._padding_)->Desc).Usage & DrawIndirect) != None) {
      local_58._padding_._0_1_ = 0x1c;
    }
    pFVar3 = FRDGBuilder::CreateUAV(param_1,(FRDGBufferUAVDesc *)&local_58,None);
    AddClearUAVPass(param_1,pFVar3,0,Compute);
    local_58.Buffer = this->CacheInstanceAsDynamicRDG;
    uVar5 = 0;
    local_58._padding_ = CONCAT44(local_58._padding_._4_4_,0xffffffff);
    local_58._padding_ = 0;
    if ((((local_58.Buffer)->Desc).Usage & DrawIndirect) != None) {
      uVar5 = 0x1c;
    }
    local_58._padding_ = (longlong)CONCAT31((int3)local_58._padding_._1_7_,uVar5);
    local_38 = FRDGBuilder::CreateSRV(param_1,&local_58);
    iStack_30 = iVar1;
    pFVar4 = FVirtualShadowMapInvalidationSceneUniforms::FTypeInfo::GetStructMetadata();
    FSceneUniformBuffer::Set(param_2,SceneUB::VSMCache._32_4_,&local_38,pFVar4->Size);
  }
  return;
}

