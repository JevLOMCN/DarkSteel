// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 38

// StaticClass @ 149199070

UClass * __cdecl UNiagaraDataInterfaceRenderTargetVolume::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetVolume.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRenderTargetVolume",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetVolume.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceRenderTargetVolume,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceRenderTargetVolume>
               ,InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTargetVolume>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetVolume.InnerSingleton;
}

// UNiagaraDataInterfaceRenderTargetVolume @ 1491ac7b0

UNiagaraDataInterfaceRenderTargetVolume * __thiscall
UNiagaraDataInterfaceRenderTargetVolume::UNiagaraDataInterfaceRenderTargetVolume
          (UNiagaraDataInterfaceRenderTargetVolume *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  (this->OverrideRenderTargetFilter).Value = '\x03';
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->RenderTargetUserParameter);
  return this;
}

// UNiagaraDataInterfaceRenderTargetVolume @ 1491ac7f0

UNiagaraDataInterfaceRenderTargetVolume * __thiscall
UNiagaraDataInterfaceRenderTargetVolume::UNiagaraDataInterfaceRenderTargetVolume
          (UNiagaraDataInterfaceRenderTargetVolume *this,FObjectInitializer *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FNiagaraTypeDefinitionHandle local_res8 [2];
  TObjectPtr<UObject>_u_0 local_28;
  undefined2 local_20;
  undefined1 local_1e;
  undefined8 local_1c;
  undefined4 local_14;
  
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  (this->OverrideRenderTargetFilter).Value = '\x03';
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->RenderTargetUserParameter);
  puVar2 = ::operator_new(0x60);
  puVar3 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[9] = 0;
    puVar2[0xb] = 0;
    puVar2[1] = 0;
    *puVar2 = &___7FNiagaraDataInterfaceProxyRenderTargetVolumeProxy__6B_;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    puVar2[10] = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)this->_padding_;
  if ((puVar2 != puVar3) && (this->_padding_ = (longlong)puVar3, puVar2 != (undefined8 *)0x0)) {
    (**(code **)*puVar2)(puVar2,1);
  }
  local_28.DebugPtr = (UObject *)Z_Construct_UClass_UTextureRenderTarget_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_28.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_28.DebugPtr);
  }
  local_20 = 1;
  local_1e = 0;
  local_1c = 0xffffffffffffffff;
  local_14 = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  iVar1 = FNiagaraTypeDefinitionHandle::Register
                    (local_res8,(FNiagaraTypeDefinition *)&local_28.ObjectPtr);
  *(int *)&(this->RenderTargetUserParameter).Parameter._padding_ = iVar1;
  return this;
}

// ~UNiagaraDataInterfaceRenderTargetVolume @ 1491ad760

void __thiscall
UNiagaraDataInterfaceRenderTargetVolume::~UNiagaraDataInterfaceRenderTargetVolume
          (UNiagaraDataInterfaceRenderTargetVolume *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  pFVar1 = (this->RenderTargetUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7INiagaraSimCacheCustomStorageInterface__6B_;
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  return;
}

// operator() @ 1491b0b90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHIResource *this_00;
  IPooledRenderTarget *pIVar1;
  longlong lVar2;
  FRenderTargetVolumeRWInstanceData_RenderThread *this_01;
  ulong64 local_res8;
  
  this_01 = TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
                    *)(*(longlong *)this + 0x10),*(ulong64 *)((longlong)this + 8));
  if (this_01 != (FRenderTargetVolumeRWInstanceData_RenderThread *)0x0) {
    this_00 = (FRHIResource *)(this_01->SamplerStateRHI).Reference;
    if (this_00 != (FRHIResource *)0x0) {
      (this_01->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
      FRHIResource::Release(this_00);
    }
    pIVar1 = (this_01->RenderTarget).Reference;
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (this_01->RenderTarget).Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar1->_padding_ + 0x38))();
    }
    FRenderTargetVolumeRWInstanceData_RenderThread::UpdateMemoryStats(this_01);
  }
  lVar2 = *(longlong *)this;
  local_res8 = *(ulong64 *)((longlong)this + 8);
  if (*(int *)(lVar2 + 0x18) != *(int *)(lVar2 + 0x44)) {
    TSet<TTuple<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar2 + 0x10),(int)(local_res8 >> 0x20) * 0x17 + (int)local_res8,&local_res8);
  }
  return;
}

// operator() @ 1491b22e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate'::__l27::<lambda_1>::
operator()(void *this,FRHICommandListImmediate *param_1)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  FRHIResource *pFVar2;
  IPooledRenderTarget *pIVar3;
  longlong *plVar4;
  FRHIResource *this_00;
  FRenderTargetVolumeRWInstanceData_RenderThread *this_01;
  longlong lVar5;
  TRefCountPtr<IPooledRenderTarget> TVar6;
  uint uVar7;
  longlong *local_res8;
  
  this_01 = TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
            ::FindOrAddImpl<unsigned___int64_const_&>
                      ((TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
                        *)(*(longlong *)this + 0x10),
                       (int)((ulonglong)*(undefined8 *)((longlong)this + 8) >> 0x20) * 0x17 +
                       (int)*(undefined8 *)((longlong)this + 8),(ulong64 *)((longlong)this + 8));
  *(undefined8 *)&(this_01->Size).field0_0x0 = *(undefined8 *)((longlong)this + 0x10);
  (this_01->Size).field0_0x0._s_0.Z = *(int *)((longlong)this + 0x18);
  this_01->MipLevels = 1;
  pFVar2 = (FRHIResource *)(this_01->SamplerStateRHI).Reference;
  if (pFVar2 != (FRHIResource *)0x0) {
    (this_01->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(pFVar2);
  }
  pIVar3 = (this_01->RenderTarget).Reference;
  pTVar1 = &this_01->RenderTarget;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  if (*(longlong *)((longlong)this + 0x68) != 0) {
    plVar4 = *(longlong **)(*(longlong *)((longlong)this + 0x68) + 0x20);
    uVar7 = 0;
    if (plVar4 != (longlong *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x20))();
      uVar7 = (uint)*(byte *)(lVar5 + 0x30);
    }
    this_01->MipLevels = uVar7;
    lVar5 = (**(code **)(**(longlong **)((longlong)this + 0x68) + 0xb0))();
    if (lVar5 != 0) {
      pFVar2 = *(FRHIResource **)(lVar5 + 0x28);
      this_00 = (FRHIResource *)(this_01->SamplerStateRHI).Reference;
      if (this_00 != pFVar2) {
        (this_01->SamplerStateRHI).Reference = (FRHISamplerState *)pFVar2;
        if (pFVar2 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(pFVar2);
        }
        if (this_00 != (FRHIResource *)0x0) {
          FRHIResource::Release(this_00);
        }
      }
      TVar6 = CreateRenderTarget((FRHITexture *)&local_res8,*(wchar_t **)(lVar5 + 0x20));
      if ((IPooledRenderTarget *)pTVar1 != TVar6.Reference) {
        pIVar3 = pTVar1->Reference;
        pTVar1->Reference = (IPooledRenderTarget *)(TVar6.Reference)->_padding_;
        (TVar6.Reference)->_padding_ = 0;
        if (pIVar3 != (IPooledRenderTarget *)0x0) {
          (**(code **)(pIVar3->_padding_ + 0x38))();
        }
      }
      if (local_res8 != (longlong *)0x0) {
        (**(code **)(*local_res8 + 0x38))();
      }
    }
  }
  FRenderTargetVolumeRWInstanceData_RenderThread::UpdateMemoryStats(this_01);
  return;
}

// operator() @ 1491b2430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERDGBuilderFlags": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l27::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  ERDGPassFlags EVar5;
  int iVar6;
  FRenderTargetVolumeRWInstanceData_RenderThread *pFVar7;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar8;
  FName this_01;
  undefined8 *puVar9;
  FRDGTexture *pFVar10;
  FRDGTextureUAV *pFVar11;
  FRDGEventName *this_02;
  FShaderParametersMetadata *pFVar12;
  wchar_t *pwVar13;
  FRDGPass *this_03;
  FRHITexture *pFVar14;
  undefined8 *puVar15;
  FRHITexture *pFVar16;
  undefined1 auStackY_998 [32];
  undefined8 *local_948;
  int local_940;
  int local_93c;
  int local_938;
  undefined4 local_930;
  undefined4 uStack_92c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_928;
  longlong *local_918;
  FShader *pFStack_910;
  FShaderMapBase *local_908;
  int iStack_900;
  int iStack_8fc;
  int local_8f8;
  undefined4 uStack_8f4;
  FRDGEventName local_8f0;
  TIntVector4<unsigned_int>_u_0 local_8d8;
  TIntVector4<unsigned_int>_u_0 local_8c8;
  FRDGParameterStruct local_8b8;
  undefined1 local_8a0 [8];
  FString local_898;
  FRDGEventName local_888;
  undefined1 local_868 [24];
  float local_850;
  int local_84c;
  undefined4 local_848;
  undefined1 *local_844;
  undefined4 local_83c;
  undefined2 local_838;
  undefined1 local_836;
  undefined1 local_835;
  undefined2 local_834;
  void *local_828;
  undefined4 local_820;
  undefined4 local_81c;
  undefined1 local_818 [64];
  ForAnyElementType local_7d8;
  int local_7d0;
  int local_7cc [87];
  ForElementType<FRDGPass_*> local_670;
  uint local_668;
  uint local_664 [339];
  FRDGUserValidation local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_998;
  puVar15 = (undefined8 *)0x0;
  if (*(FTextureRenderResources **)((longlong)this + 0x20) != (FTextureRenderResources *)0x0) {
    local_8d8._0_8_ = 0;
    local_8d8._8_8_ = 0;
    local_8c8._0_8_ = 0;
    local_8c8._8_8_ = 0;
    UE::SVT::FTextureRenderResources::GetPackedUniforms
              (*(FTextureRenderResources **)((longlong)this + 0x20),
               (TIntVector4<unsigned_int> *)&local_8d8._s_0,
               (TIntVector4<unsigned_int> *)&local_8c8._s_0);
    pFVar7 = TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
             ::Find((TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
                     *)(*(longlong *)this + 0x10),*(ulong64 *)((longlong)this + 8));
    if (pFVar7 != (FRenderTargetVolumeRWInstanceData_RenderThread *)0x0) {
      local_8f0.EventFormat = L"";
      local_8f0.FormattedEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_8f0.FormattedEventName.Data.ArrayNum = 0;
      local_8f0.FormattedEventName.Data.ArrayMax = 0;
      FRDGBuilder::FRDGBuilder
                ((FRDGBuilder *)local_818,param_1,&local_8f0,None,GMaxRHIShaderPlatform);
      this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                   [*(int *)((longlong)this + 0x28)]);
      pFVar8 = (FShaderType *)FNiagaraCopySVTToDenseBufferCS::GetStaticType();
      FGlobalShaderMap::GetShader(this_00,&local_928,pFVar8,0);
      if (local_928.ShaderContent == (FShader *)0x0) {
        this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_8a0);
        ::FName::ToString((FName *)this_01,&local_898);
        FNiagaraCopySVTToDenseBufferCS::GetStaticType();
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_898.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_898.Data.AllocatorInstance.Data);
        }
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FNiagaraCopySVTToDenseBufferCS::GetStaticType();
      iVar6 = *(int *)((longlong)this + 0x14) + 3;
      local_940 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
      iVar6 = *(int *)((longlong)this + 0x18) + 3;
      local_93c = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
      iVar6 = *(int *)((longlong)this + 0x1c) + 3;
      local_938 = (int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2;
      puVar9 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),0x60,0x10);
      if (puVar9 == (undefined8 *)0x0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                           ,0x61,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else {
        puVar9[2] = 0;
        *puVar9 = &___7__TObject_VFParameters_FNiagaraCopySVTToDenseBufferCS___FRDGAllocator__6B_;
        puVar9[3] = 0;
        puVar9[4] = 0;
        puVar9[5] = 0;
        puVar15 = puVar9;
      }
      local_948 = puVar15;
      if (((local_7d8.Data <= (FScriptContainerElement *)&local_948) &&
          ((FScriptContainerElement *)&local_948 < local_7d8.Data + (longlong)local_7cc[0] * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_7d0 == local_7cc[0]) {
        local_7d0 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&local_7d8,local_7cc);
      }
      iVar6 = local_7d0 + 1;
      plVar1 = puVar15 + 2;
      *(undefined8 **)(local_7d8.Data + (longlong)local_7d0 * 8) = local_948;
      local_7d0 = iVar6;
      if (((pFVar7->RenderTarget).Reference != (IPooledRenderTarget *)0x0) &&
         (pFVar7->TransientRDGTexture == (FRDGTexture *)0x0)) {
        pFVar10 = FRDGBuilder::RegisterExternalTexture
                            ((FRDGBuilder *)local_818,&pFVar7->RenderTarget,None);
        pFVar7->TransientRDGTexture = pFVar10;
        pFVar11 = FRDGBuilder::CreateUAV((FRDGBuilder *)local_818,pFVar10,None,PF_Unknown);
        pFVar7->TransientRDGUAV = pFVar11;
      }
      if (((pFVar7->RenderTarget).Reference == (IPooledRenderTarget *)0x0) ||
         (pFVar7->TransientRDGUAV == (FRDGTextureUAV *)0x0)) {
        local_850 = FClearValueBinding::Black.Value.Color[3];
        local_84c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
        local_930 = 1;
        uStack_92c = 1;
        local_844 = &DAT_100000001;
        local_835 = *(undefined1 *)((longlong)this + 0x10);
        local_81c = 1;
        local_868._0_8_ = 0x20008;
        local_868._8_8_ = FClearValueBinding::Black._0_8_;
        local_868._16_8_ = FClearValueBinding::Black.Value._4_8_;
        local_848 = 0;
        local_83c = 0x10001;
        local_838 = 0x101;
        local_836 = 2;
        local_834 = 0xff00;
        local_828 = (void *)0x0;
        local_820 = 0;
        pFVar10 = FRDGBuilder::CreateTexture
                            ((FRDGBuilder *)local_818,(FRDGTextureDesc *)local_868,
                             L"NiagaraEmptyTextureUAV::Texture3D",None);
        pFVar11 = FRDGBuilder::CreateUAV((FRDGBuilder *)local_818,pFVar10,SkipBarrier,PF_Unknown);
        *plVar1 = (longlong)pFVar11;
        if (local_828 != (void *)0x0) {
          FMemory::Free(local_828);
        }
      }
      else {
        *plVar1 = (longlong)pFVar7->TransientRDGUAV;
      }
      lVar2 = *(longlong *)((longlong)this + 0x20);
      bVar4 = IsInParallelRenderingThread();
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInParallelRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\SparseVolumeTexture\\SparseVolumeTexture.h"
                             ,0x10c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = *(FRHITexture **)(lVar2 + 0xb0);
      lVar2 = *(longlong *)((longlong)this + 0x20);
      bVar4 = IsInParallelRenderingThread();
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInParallelRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\SparseVolumeTexture\\SparseVolumeTexture.h"
                             ,0x10d,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = *(FRHITexture **)(lVar2 + 0xb8);
      puVar15[3] = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
                   ::StaticResource.StateRHI.Reference;
      if (pFVar16 == (FRHITexture *)0x0) {
        pFVar16 = (GBlackUintVolumeTexture->TextureRHI).Reference;
      }
      puVar15[4] = pFVar16;
      if (pFVar14 == (FRHITexture *)0x0) {
        pFVar14 = (GBlackVolumeTexture->TextureRHI).Reference;
      }
      puVar15[5] = pFVar14;
      pFStack_910 = local_928.ShaderContent;
      puVar15[6] = local_8d8._0_8_;
      puVar15[7] = local_8d8._8_8_;
      local_908 = local_928.ShaderMap;
      puVar15[8] = local_8c8._0_8_;
      puVar15[9] = local_8c8._8_8_;
      puVar15[10] = *(undefined8 *)((longlong)this + 0x14);
      *(undefined4 *)(puVar15 + 0xb) = *(undefined4 *)((longlong)this + 0x1c);
      iStack_900 = local_940;
      iStack_8fc = local_93c;
      local_8f8 = local_938;
      *(undefined4 *)((longlong)puVar15 + 0x5c) = 0;
      local_918 = plVar1;
      this_02 = FRDGEventName::FRDGEventName(&local_888,1,L"Copy SVT to Volume RT");
      pFVar12 = FNiagaraCopySVTToDenseBufferCS::FParameters::FTypeInfo::GetStructMetadata();
      FRDGUserValidation::ValidateAddPass(&local_118,plVar1,pFVar12,this_02,Compute);
      FRDGBuilder::FlushAccessModeQueue((FRDGBuilder *)local_818);
      pwVar13 = FRDGEventName::GetTCHAR(this_02);
      EVar5 = FRDGBuilder::OverridePassFlags((FRDGBuilder *)local_818,pwVar13,Compute);
      this_03 = FMemStackBase::Alloc((FMemStackBase *)(local_818 + 0x18),0x1b0,8);
      local_8b8.Contents = (uchar *)plVar1;
      if (((pFVar12->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_8b8.Layout.Reference = (pFVar12->Layout).Reference;
      if (local_8b8.Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_8b8.Layout.Reference);
      }
      local_8b8.Metadata = pFVar12;
      FRDGPass::FRDGPass(this_03,this_02,&local_8b8,EVar5,Async);
      this_03->_padding_ =
           (longlong)
           &TRDGLambdaPass<FNiagaraCopySVTToDenseBufferCS::FParameters,``UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::`27'::<lambda_1>::operator()'::`8'::<lambda_1>_>
            ::_vftable_;
      this_03[1]._padding_ = (longlong)local_918;
      this_03[1].FullPathIfDebug.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)pFStack_910;
      *(longlong **)&this_03[1].Name.FormattedEventName.Data.ArrayNum = plVar1;
      *(FShaderMapBase **)&this_03[1].FullPathIfDebug.Data.ArrayNum = local_908;
      this_03[1].Name.EventFormat = (wchar_t *)CONCAT44(iStack_8fc,iStack_900);
      this_03[1].Name.FormattedEventName.Data.AllocatorInstance.Data =
           (FScriptContainerElement *)CONCAT44(uStack_8f4,local_8f8);
      FRDGBuilder::ClobberPassOutputs((FRDGBuilder *)local_818,this_03);
      if (local_668 == local_664[0]) {
        local_668 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGPass_*>_>
                              (0x808,&local_670,(int *)local_664);
      }
      local_670.Data[(int)local_668] = this_03;
      (this_03->Handle).Index = local_668;
      local_668 = local_668 + 1;
      FRDGBuilder::SetupParameterPass((FRDGBuilder *)local_818,this_03);
      if (local_888.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_888.FormattedEventName.Data.AllocatorInstance.Data);
      }
      FRDGBuilder::Execute((FRDGBuilder *)local_818);
      pFVar7->TransientRDGTexture = (FRDGTexture *)0x0;
      pFVar7->TransientRDGSRV = (FRDGTextureSRV *)0x0;
      pFVar7->TransientRDGUAV = (FRDGTextureUAV *)0x0;
      FRDGBuilder::~FRDGBuilder((FRDGBuilder *)local_818);
    }
  }
  return;
}

// operator() @ 1491b2dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame'::__l12::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  ForAnyElementType *pFVar3;
  int iVar4;
  FRenderTargetVolumeRWInstanceData_RenderThread *pFVar5;
  FName *pFVar6;
  void *pvVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  void *_Src;
  undefined1 *puVar12;
  undefined1 auStackY_f8 [32];
  int local_c8;
  int local_c4;
  TIntVector3<int>_u_0 local_c0 [2];
  FRHIGPUTextureReadback local_a8;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar5 = TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)this + 0x10),*(ulong64 *)((longlong)this + 8));
  if (pFVar5 != (FRenderTargetVolumeRWInstanceData_RenderThread *)0x0) {
    pFVar6 = ::FName::FName((FName *)&local_c0[0]._s_0,"ReadVolumeTexture");
    FRHIGPUTextureReadback::FRHIGPUTextureReadback(&local_a8,*pFVar6);
    local_c0[0]._0_8_ = 0;
    local_c0[0]._s_0.Z = 0;
    FRHIGPUTextureReadback::EnqueueCopy
              (&local_a8,(FRHICommandList *)param_1,
               (((pFVar5->RenderTarget).Reference)->RenderTargetItem).TargetableTexture.Reference,
               (TIntVector3<int> *)&local_c0[0]._s_0,0,(TIntVector3<int> *)((longlong)this + 0x20));
    FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
    FRHICommandListImmediate::FlushResources(param_1);
    pvVar7 = FRHIGPUTextureReadback::Lock(&local_a8,&local_c8,&local_c4);
    lVar8 = (**(code **)(((((pFVar5->RenderTarget).Reference)->RenderTargetItem).TargetableTexture.
                         Reference)->_padding_ + 0x20))();
    pFVar3 = *(ForAnyElementType **)((longlong)this + 0x18);
    iVar2 = GPixelFormats[*(byte *)(lVar8 + 0x33)].BlockBytes;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(pFVar5->Size).field0_0x0._s_0.Z * (pFVar5->Size).field0_0x0._s_0.X * iVar2 *
                   (pFVar5->Size).field0_0x0._s_0.Y,pFVar3,(int *)(pFVar3 + 1),
               (int *)((longlong)&pFVar3[1].Data + 4));
    if (0 < (pFVar5->Size).field0_0x0._s_0.Z) {
      iVar4 = (pFVar5->Size).field0_0x0._s_0.Y;
      iVar9 = local_c8;
      iVar11 = 0;
      do {
        _Src = pvVar7;
        iVar10 = 0;
        if (0 < iVar4) {
          do {
            memcpy((void *)((ulonglong)
                            (uint)((iVar10 + iVar4 * iVar11) * (pFVar5->Size).field0_0x0._s_0.X *
                                  iVar2) + **(longlong **)((longlong)this + 0x18)),_Src,
                   (ulonglong)(uint)((pFVar5->Size).field0_0x0._s_0.X * iVar2));
            iVar10 = iVar10 + 1;
            iVar4 = (pFVar5->Size).field0_0x0._s_0.Y;
            _Src = (void *)((longlong)_Src + (ulonglong)(uint)(iVar2 * local_c8));
            iVar9 = local_c8;
          } while (iVar10 < iVar4);
        }
        iVar11 = iVar11 + 1;
        pvVar7 = (void *)((longlong)pvVar7 + (ulonglong)(uint)(iVar2 * iVar9 * local_c4));
      } while (iVar11 < (pFVar5->Size).field0_0x0._s_0.Z);
    }
    FRHIGPUTextureReadback::Unlock(&local_a8);
    puVar12 = local_50;
    lVar8 = 8;
    do {
      puVar1 = (undefined8 *)(puVar12 + -8);
      puVar12 = puVar12 + -8;
      lVar8 = lVar8 + -1;
      if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)*puVar1);
      }
    } while (lVar8 != 0);
    local_a8._padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)local_a8._padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_a8._padding_);
    }
  }
  return;
}

// operator() @ 1491b3600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l37::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRenderTargetVolumeRWInstanceData_RenderThread *pFVar1;
  undefined1 auStackY_128 [32];
  FLLMScope local_f8 [5];
  FMemScope local_e8 [2];
  FUpdateTextureRegion3D local_d8;
  FUpdateTexture3DData local_a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar1 = TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)this + 0x10),*(ulong64 *)((longlong)this + 8));
  if (pFVar1 != (FRenderTargetVolumeRWInstanceData_RenderThread *)0x0) {
    local_d8.Depth = (pFVar1->Size).field0_0x0._s_0.Z;
    local_e8[0] = *(FMemScope *)&(pFVar1->Size).field0_0x0;
    local_d8.DestZ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_d8.SrcZ = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z;
    local_d8.Width = local_e8[0]._0_4_;
    local_d8.Height = local_e8[0].PrevTag;
    local_d8.DestX = (uint)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
    local_d8.DestY =
         (uint)((ulonglong)UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_ >> 0x20);
    local_d8.SrcX = local_d8.DestX;
    local_d8.SrcY = local_d8.DestY;
    FRHICommandListImmediate::BeginUpdateTexture3D
              (param_1,&local_a8,
               (((pFVar1->RenderTarget).Reference)->RenderTargetItem).TargetableTexture.Reference,0,
               &local_d8);
    UNDIRenderTargetSimCacheData::GetPixelData
              (*(UNDIRenderTargetSimCacheData **)((longlong)this + 0x18),
               *(int *)((longlong)this + 0x20),local_a8.Data,local_a8.RowPitch,local_a8.DepthPitch);
    FLLMScope::FLLMScope(local_f8,Textures,false,None,Default,true);
    FMemScope::FMemScope(local_e8,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x410))(GDynamicRHI,param_1,&local_a8);
    FMemScope::~FMemScope(local_e8);
    FLLMScope::~FLLMScope(local_f8);
  }
  return;
}

// BuildShaderParameters @ 1491b6110

void __thiscall
UNiagaraDataInterfaceRenderTargetVolume::BuildShaderParameters
          (UNiagaraDataInterfaceRenderTargetVolume *this,FNiagaraShaderParametersBuilder *param_1)

{
  int *piVar1;
  uint uVar2;
  FShaderParametersMetadataBuilder *pFVar3;
  int iVar4;
  FShaderParametersMetadata *pFVar5;
  FScriptContainerElement *pFVar6;
  wchar_t *pwVar7;
  
  pFVar3 = param_1->MetadataBuilder;
  if ((param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(param_1->GPUParamInfo->DataInterfaceHLSLSymbol).Data.AllocatorInstance.Data
    ;
  }
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0xf & 0xfffffff0;
  pFVar5 = TShaderParameterStructTypeInfo<NDIRenderTargetVolumeLocal::FShaderParameters>::
           GetStructMetadata();
  piVar1 = &(pFVar3->Members).ArrayMax;
  iVar4 = (pFVar3->Members).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,(ForAnyElementType *)pFVar3,piVar1);
  }
  (pFVar3->Members).ArrayNum = iVar4 + 1;
  uVar2 = pFVar3->NextMemberOffset;
  pFVar6 = (pFVar3->Members).AllocatorInstance.Data + (longlong)iVar4 * 0x30;
  *(wchar_t **)(pFVar6 + 8) = L"";
  *(FShaderParametersMetadata **)(pFVar6 + 0x28) = pFVar5;
  *(wchar_t **)pFVar6 = pwVar7;
  *(undefined4 *)(pFVar6 + 0x10) = 0x7b;
  *(uint *)(pFVar6 + 0x14) = uVar2;
  *(undefined2 *)(pFVar6 + 0x18) = 0x14;
  *(undefined4 *)(pFVar6 + 0x1c) = 1;
  *(undefined8 *)(pFVar6 + 0x20) = 1;
  pFVar3->NextMemberOffset = pFVar3->NextMemberOffset + 0x30;
  return;
}

// CanExecuteOnTarget @ 1491b6d40

bool __thiscall
UNiagaraDataInterfaceRenderTargetVolume::CanExecuteOnTarget
          (UNiagaraDataInterfaceRenderTargetVolume *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CanExposeVariables @ 1491b6d90

bool __thiscall
UNiagaraDataInterfaceRenderTargetVolume::CanExposeVariables
          (UNiagaraDataInterfaceRenderTargetVolume *this)

{
  return true;
}

// CopyToInternal @ 1491b83e0

bool __thiscall
UNiagaraDataInterfaceRenderTargetVolume::CopyToInternal
          (UNiagaraDataInterfaceRenderTargetVolume *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  FString *pFVar4;
  byte bVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  bVar2 = UNiagaraDataInterface::CopyToInternal((UNiagaraDataInterface *)this,param_1);
  if (!bVar2) {
    return false;
  }
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar3 = StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      bVar5 = *(byte *)((longlong)&param_1[1]._padding_ + 6);
      param_1[1]._padding_ = *(longlong *)&(this->Size).field0_0x0;
      *(int *)&param_1[1]._padding_ = (this->Size).field0_0x0._s_0.Z;
      *(uchar *)((longlong)&param_1[1]._padding_ + 4) = (this->OverrideRenderTargetFormat).Value;
      *(uchar *)((longlong)&param_1[1]._padding_ + 5) = (this->OverrideRenderTargetFilter).Value;
      bVar5 = (bVar5 ^ this->bInheritUserParameterSettings) & 1 ^
              *(byte *)((longlong)&param_1[1]._padding_ + 6);
      *(byte *)((longlong)&param_1[1]._padding_ + 6) = bVar5;
      *(byte *)((longlong)&param_1[1]._padding_ + 6) = (bVar5 ^ this->field_0x4e) & 2 ^ bVar5;
      FNiagaraVariable::operator=
                ((FNiagaraVariable *)&param_1[1]._padding_,
                 &(this->RenderTargetUserParameter).Parameter);
      return true;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceRenderTargetVolume>(&local_28);
    pwVar6 = L"";
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
    pFVar4 = GetFullNameForCastLogError<UNiagaraDataInterface>(&local_18,param_1);
    if ((pFVar4->Data).ArrayNum != 0) {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar6,pwVar7);
  }
  pFVar4 = GetTypeName<UNiagaraDataInterfaceRenderTargetVolume>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// DestroyPerInstanceData @ 1491beee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData
          (UNiagaraDataInterfaceRenderTargetVolume *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraWorldManager *this_00;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_b8 [32];
  code *local_98 [2];
  undefined **local_88;
  longlong lStack_80;
  ulong64 local_78;
  undefined ***local_70;
  undefined1 local_68 [16];
  undefined **local_58;
  longlong lStack_50;
  ulong64 local_48;
  undefined ***local_40;
  byte local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (((*(char *)((longlong)param_1 + 0x14) != '\0') &&
      (*(longlong *)((longlong)param_1 + 0x18) != 0)) &&
     (this_00 = FNiagaraSystemInstance::GetWorldManager(param_2),
     this_00 != (FNiagaraWorldManager *)0x0)) {
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x174) = 0;
    FNiagaraWorldManager::ObjectPoolReturn(this_00,*(UObject **)((longlong)param_1 + 0x18));
    FNiagaraWorldManager::RemoveReferencedObject(this_00,*(UObject **)((longlong)param_1 + 0x18));
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
    *(undefined1 *)((longlong)param_1 + 0x14) = 0;
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  lVar1 = this->_padding_;
  if ((lVar1 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a0,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_78 = param_2->ID;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  lStack_80 = lVar1;
  this_01 = FRenderCommandList::GetInstanceTLS();
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData553>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    lStack_50 = lStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetVolume::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData553>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar4);
    uVar6 = (ulonglong)local_38;
    if ((2 < uVar6) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_68._0_8_ != (code *)0x0) {
        pppuVar5 = (undefined ***)(local_68 + 0x10);
        if (local_40 != (undefined ***)0x0) {
          pppuVar5 = local_40;
        }
        (*(code *)(*pppuVar5)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar6])(local_68);
    }
  }
  if (local_98[0] != (code *)0x0) {
    pppuVar5 = &local_88;
    if (local_70 != (undefined ***)0x0) {
      pppuVar5 = local_70;
    }
    (*(code *)(*pppuVar5)[2])();
  }
  return;
}

// Equals @ 1491c1870

bool __thiscall
UNiagaraDataInterfaceRenderTargetVolume::Equals
          (UNiagaraDataInterfaceRenderTargetVolume *this,UNiagaraDataInterface *param_1)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  UClass *pUVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  FString local_28;
  FString local_18;
  
  bVar3 = UNiagaraDataInterface::Equals((UNiagaraDataInterface *)this,param_1);
  if (bVar3) {
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar5 = GetTypeName<UNiagaraDataInterfaceRenderTargetVolume_const_>(&local_28);
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar7 = L"";
      }
      else {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar7);
    }
    pUVar4 = StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if ((*(int *)(param_1->_padding_ + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8)
        != &pUVar4->_padding_)) {
      pFVar5 = GetTypeName<UNiagaraDataInterfaceRenderTargetVolume_const_>(&local_28);
      pwVar7 = L"";
      if ((pFVar5->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
      pFVar5 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
      if ((pFVar5->Data).ArrayNum != 0) {
        pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar7,pwVar6);
    }
    if ((((((this->RenderTargetUserParameter).Parameter._padding_ == param_1[1]._padding_) &&
          ((int)(this->RenderTargetUserParameter).Parameter._padding_ == (int)param_1[1]._padding_))
         && ((int)param_1[1]._padding_ == (this->Size).field0_0x0._s_0.X)) &&
        ((*(int *)((longlong)&param_1[1]._padding_ + 4) == (this->Size).field0_0x0._s_0.Y &&
         ((int)param_1[1]._padding_ == (this->Size).field0_0x0._s_0.Z)))) &&
       ((*(uchar *)((longlong)&param_1[1]._padding_ + 4) == (this->OverrideRenderTargetFormat).Value
        && (*(uchar *)((longlong)&param_1[1]._padding_ + 5) ==
            (this->OverrideRenderTargetFilter).Value)))) {
      bVar1 = *(byte *)((longlong)&param_1[1]._padding_ + 6);
      if ((((bVar1 ^ this->bInheritUserParameterSettings) & 1) == 0) &&
         (((bVar1 ^ this->field_0x4e) & 2) == 0)) {
        return true;
      }
    }
  }
  return false;
}

// GetExposedVariableValue @ 1491c8020

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

bool __thiscall
UNiagaraDataInterfaceRenderTargetVolume::GetExposedVariableValue
          (UNiagaraDataInterfaceRenderTargetVolume *this,FNiagaraVariableBase *param_1,void *param_2
          ,FNiagaraSystemInstance *param_3,void *param_4)

{
  FNiagaraTypeDefinition *pFVar1;
  
  if (param_1->Name != (FName)0x0) {
    pFVar1 = FNiagaraTypeDefinitionHandle::Resolve(&param_1->TypeDefHandle);
    if (((((pFVar1->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) &&
         (param_1->Name == ExposedRTVar.Name)) &&
        ((param_1->TypeDefHandle).RegisteredTypeIndex ==
         ExposedRTVar.TypeDefHandle.RegisteredTypeIndex)) &&
       ((param_2 != (void *)0x0 && (*(longlong *)((longlong)param_2 + 0x18) != 0)))) {
      *(longlong *)param_4 = *(longlong *)((longlong)param_2 + 0x18);
      return true;
    }
  }
  return false;
}

// GetExposedVariables @ 1491c81d0

void __thiscall
UNiagaraDataInterfaceRenderTargetVolume::GetExposedVariables
          (UNiagaraDataInterfaceRenderTargetVolume *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (param_1->AllocatorInstance).Data;
  *(FName *)(pFVar1 + (longlong)iVar2 * 0xc) = ExposedRTVar.Name;
  *(int *)(pFVar1 + (longlong)iVar2 * 0xc + 8) = ExposedRTVar.TypeDefHandle.RegisteredTypeIndex;
  return;
}

// GetPrivateStaticClass @ 1491ca620

UClass * __cdecl UNiagaraDataInterfaceRenderTargetVolume::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetVolume.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRenderTargetVolume",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetVolume.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceRenderTargetVolume,0x70,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceRenderTargetVolume>
               ,InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTargetVolume>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTargetVolume.InnerSingleton;
}

// GetVMExternalFunction @ 1491d04f0

void __thiscall
UNiagaraDataInterfaceRenderTargetVolume::GetVMExternalFunction
          (UNiagaraDataInterfaceRenderTargetVolume *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UNiagaraDataInterfaceRenderTargetVolume *local_res10;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  FVar1 = param_1->Name;
  if (FVar1 == NDIRenderTargetVolumeLocal::GetSizeFunctionName) {
    local_78 = VMGetSize;
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTargetVolume____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTargetVolume *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTargetVolume *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = local_78;
      puVar2[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
  }
  else if (FVar1 == NDIRenderTargetVolumeLocal::SetSizeFunctionName) {
    local_78 = VMSetSize;
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTargetVolume____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTargetVolume *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTargetVolume *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = local_78;
      puVar2[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
  }
  else if (FVar1 == NDIRenderTargetVolumeLocal::GetNumMipLevelsName) {
    local_78 = VMGetNumMipLevels;
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTargetVolume____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTargetVolume *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTargetVolume *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = local_78;
      puVar2[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
  }
  else {
    if (FVar1 != NDIRenderTargetVolumeLocal::SetFormatFunctionName) {
      return;
    }
    local_78 = VMSetFormat;
    uStack_70 = 0;
    local_58 = (undefined1  [8])0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_50);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTargetVolume____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTargetVolume *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTargetVolume *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_res10);
      puVar2[4] = local_78;
      puVar2[5] = CONCAT44(uStack_6c,uStack_70);
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)param_3,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_58);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
               (FWriteAccessScope *)&local_78);
  }
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_68 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_6c,uStack_70),
               (FDestructionSentinel *)&local_78);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return;
}

// HasPostSimulateTick @ 1491d11c0

bool __thiscall
UNiagaraDataInterfaceRenderTargetVolume::HasPostSimulateTick
          (UNiagaraDataInterfaceRenderTargetVolume *this)

{
  return true;
}

// HasPreSimulateTick @ 1491d1250

bool __thiscall
UNiagaraDataInterfaceRenderTargetVolume::HasPreSimulateTick
          (UNiagaraDataInterfaceRenderTargetVolume *this)

{
  return true;
}

// InitPerInstanceData @ 1491d38e0

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceRenderTargetVolume::InitPerInstanceData
          (UNiagaraDataInterfaceRenderTargetVolume *this,void *param_1,
          FNiagaraSystemInstance *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  EPixelFormat EVar5;
  int iVar6;
  TRHIGlobal<int> TVar7;
  ETextureRenderTargetFormat local_res8 [4];
  
  if ((this->_padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Proxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRenderTargetVolume.cpp"
                         ,0x201,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  *(undefined8 *)((longlong)param_1 + 0x50) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0x13;
  *(undefined4 *)((longlong)param_1 + 0x10) = 3;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  iVar6 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x38),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x38) = iVar6;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  if ((NiagaraDataInterfaceRenderTargetCommon::GIgnoreCookedOut == 0) ||
     (((uint)this->_padding_ >> 2 & 1) != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  bVar4 = NiagaraDataInterfaceRenderTargetCommon::GetRenderTargetFormat
                    (this->bOverrideFormat,(uint)(this->OverrideRenderTargetFormat).Value,local_res8
                    );
  if (bVar4) {
    iVar6 = (int)((float)(this->Size).field0_0x0._s_0.X *
                 NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
    TVar7 = GRHIGlobals.MaxVolumeTextureDimensions;
    if (iVar6 < GRHIGlobals.MaxVolumeTextureDimensions.Value) {
      TVar7.Value = iVar6;
    }
    iVar6 = 1;
    if (1 < TVar7.Value) {
      iVar6 = TVar7.Value;
    }
    *(int *)param_1 = iVar6;
    iVar6 = (int)((float)(this->Size).field0_0x0._s_0.Y *
                 NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
    TVar7 = GRHIGlobals.MaxVolumeTextureDimensions;
    if (iVar6 < GRHIGlobals.MaxVolumeTextureDimensions.Value) {
      TVar7.Value = iVar6;
    }
    iVar6 = 1;
    if (1 < TVar7.Value) {
      iVar6 = TVar7.Value;
    }
    *(int *)((longlong)param_1 + 4) = iVar6;
    iVar6 = (int)((float)(this->Size).field0_0x0._s_0.Z *
                 NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
    TVar7 = GRHIGlobals.MaxVolumeTextureDimensions;
    if (iVar6 < GRHIGlobals.MaxVolumeTextureDimensions.Value) {
      TVar7.Value = iVar6;
    }
    iVar6 = 1;
    if (1 < TVar7.Value) {
      iVar6 = TVar7.Value;
    }
    *(int *)((longlong)param_1 + 8) = iVar6;
    EVar5 = GetPixelFormatFromRenderTargetFormat(local_res8[0]);
    *(EPixelFormat *)((longlong)param_1 + 0xc) = EVar5;
    *(uint *)((longlong)param_1 + 0x10) = (uint)(this->OverrideRenderTargetFilter).Value;
    FNiagaraParameterDirectBinding<UObject_*>::Init
              ((FNiagaraParameterDirectBinding<UObject_*> *)((longlong)param_1 + 0x20),
               (FNiagaraParameterStore *)(local_res8 + 2),
               (FNiagaraVariable *)&param_2->InstanceParameters);
  }
  else if (bVar2) {
    if (2 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    return false;
  }
  return true;
}

// PerInstanceDataSize @ 1491d5400

int __thiscall
UNiagaraDataInterfaceRenderTargetVolume::PerInstanceDataSize
          (UNiagaraDataInterfaceRenderTargetVolume *this)

{
  return 0x58;
}

// PerInstanceTick @ 1491d57a0

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

bool __thiscall
UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTick
          (UNiagaraDataInterfaceRenderTargetVolume *this,void *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  bool bVar1;
  undefined1 uVar2;
  TObjectPtr<UObject> this_00;
  UClass *pUVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  if (*(int *)((longlong)param_1 + 0x20) == -1) {
    lVar4 = 0;
    goto LAB_1491d5817;
  }
  this_00 = FNiagaraParameterStore::GetUObject
                      (*(FNiagaraParameterStore **)((longlong)param_1 + 0x28),(int)local_res8);
  if (*(longlong *)this_00.field0_0x0 == 0) {
LAB_1491d57f7:
    lVar4 = 0;
  }
  else {
    pUVar3 = Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar3);
    if (!bVar1) goto LAB_1491d57f7;
    lVar4 = *(longlong *)this_00.field0_0x0;
  }
  if ((lVar4 != 0) && (*(longlong *)((longlong)param_1 + 0x18) != lVar4)) {
    NiagaraDataInterfaceRenderTargetCommon::
    ReleaseRenderTarget<FRenderTargetVolumeRWInstanceData_GameThread>(param_2,param_1);
    *(longlong *)((longlong)param_1 + 0x18) = lVar4;
  }
LAB_1491d5817:
  if (this->bInheritUserParameterSettings != 0) {
    if (lVar4 != 0) {
      *(undefined4 *)param_1 = *(undefined4 *)(lVar4 + 0x158);
      *(undefined4 *)((longlong)param_1 + 4) = *(undefined4 *)(lVar4 + 0x15c);
      *(undefined4 *)((longlong)param_1 + 8) = *(undefined4 *)(lVar4 + 0x160);
      uVar2 = (**(code **)(**(longlong **)((longlong)param_1 + 0x18) + 0x3d0))();
      *(undefined1 *)((longlong)param_1 + 0xc) = uVar2;
      *(uint *)((longlong)param_1 + 0x10) =
           (uint)*(byte *)(*(longlong *)((longlong)param_1 + 0x18) + 0x109);
      return false;
    }
    if (1 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  return false;
}

// PerInstanceTickPostSimulate @ 1491d6f90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceRenderTargetVolume *this,void *param_1,
          FNiagaraSystemInstance *param_2,float param_3)

{
  uint *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong *plVar9;
  UTexture *this_00;
  code *pcVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  bool bVar14;
  undefined1 uVar15;
  char cVar16;
  bool bVar17;
  FNiagaraWorldManager *this_01;
  UClass *pUVar18;
  UObject *pUVar19;
  FTextureResource *pFVar20;
  FRenderCommandList *this_02;
  FCommandList *this_03;
  FRenderCommandTag *pFVar21;
  FString *pFVar22;
  code **ppcVar23;
  ulonglong uVar24;
  wchar_t *pwVar25;
  wchar_t *pwVar26;
  undefined1 auStack_198 [32];
  FNiagaraVariable local_128;
  undefined4 local_108;
  FTextureRenderTargetResource *local_100;
  FString local_f8;
  undefined8 local_e8;
  undefined8 uStack_e0;
  FString local_d8;
  FString local_c8;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_198;
  if ((NiagaraDataInterfaceRenderTargetCommon::GIgnoreCookedOut == 0) ||
     (((uint)this->_padding_ >> 2 & 1) != 0)) {
    bVar17 = true;
  }
  else {
    bVar17 = false;
  }
  if ((*(longlong *)((longlong)param_1 + 0x18) == 0) ||
     ((*(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 8) >> 0x1e & 1) != 0)) {
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  }
  pwVar26 = L"";
  if (((bVar17) && (this->bInheritUserParameterSettings == 0)) &&
     (*(longlong *)((longlong)param_1 + 0x18) == 0)) {
    this_01 = FNiagaraSystemInstance::GetWorldManager(param_2);
    if (this_01 == (FNiagaraWorldManager *)0x0) {
      return false;
    }
    *(undefined1 *)((longlong)param_1 + 0x14) = 1;
    pUVar18 = Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
    pUVar19 = FNiagaraWorldManager::ObjectPoolGetOrCreate(this_01,pUVar18);
    if (pUVar19 == (UObject *)0x0) {
      pFVar22 = GetTypeName<UTextureRenderTargetVolume>(&local_f8);
      if ((pFVar22->Data).ArrayNum != 0) {
        pwVar26 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar26);
    }
    pUVar18 = Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
    iVar4 = (int)pUVar18->_padding_;
    if ((*(int *)(*(longlong *)&pUVar19->field_0x10 + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar19->field_0x10 + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar18->_padding_)) {
      pFVar22 = GetTypeName<UTextureRenderTargetVolume>(&local_d8);
      pwVar26 = L"";
      if ((pFVar22->Data).ArrayNum == 0) {
        pwVar25 = L"";
      }
      else {
        pwVar25 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
      }
      pFVar22 = GetFullNameForCastLogError<UObject>(&local_c8,pUVar19);
      if ((pFVar22->Data).ArrayNum != 0) {
        pwVar26 = (wchar_t *)(pFVar22->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar26,pwVar25);
    }
    *(UObject **)((longlong)param_1 + 0x18) = pUVar19;
    FNiagaraWorldManager::AddReferencedObject(this_01,pUVar19);
    if ((*(longlong *)((longlong)param_1 + 0x18) == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("InstanceData->TargetTexture",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRenderTargetVolume.cpp"
                            ,0x41b,L""), bVar14)) {
      pcVar13 = (code *)swi(3);
      uVar15 = (*pcVar13)();
      return (bool)uVar15;
    }
    local_e8 = 0;
    uStack_e0 = 0;
    puVar1 = (uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0x154);
    *puVar1 = *puVar1 | 2;
    lVar8 = *(longlong *)((longlong)param_1 + 0x18);
    *(undefined8 *)(lVar8 + 0x164) = 0;
    *(undefined8 *)(lVar8 + 0x16c) = 0;
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x109) =
         *(undefined1 *)((longlong)param_1 + 0x10);
    UTextureRenderTargetVolume::Init
              (*(UTextureRenderTargetVolume **)((longlong)param_1 + 0x18),*(uint *)param_1,
               *(uint *)((longlong)param_1 + 4),*(uint *)((longlong)param_1 + 8),
               *(EPixelFormat *)((longlong)param_1 + 0xc));
    UTextureRenderTargetVolume::UpdateResourceImmediate
              (*(UTextureRenderTargetVolume **)((longlong)param_1 + 0x18),true);
  }
  plVar9 = *(longlong **)((longlong)param_1 + 0x18);
  if ((plVar9 != (longlong *)0x0) &&
     ((((((int)plVar9[0x2b] != *(int *)param_1 ||
         (*(int *)((longlong)plVar9 + 0x15c) != *(int *)((longlong)param_1 + 4))) ||
        ((int)plVar9[0x2c] != *(int *)((longlong)param_1 + 8))) ||
       ((cVar16 = (**(code **)(*plVar9 + 0x3d0))(), cVar16 != *(char *)((longlong)param_1 + 0xc) ||
        (this_00 = *(UTexture **)((longlong)param_1 + 0x18),
        (uint)(this_00->Filter).Value != *(uint *)((longlong)param_1 + 0x10))))) ||
      (((this_00[1]._padding_ & 0x200000000) == 0 ||
       (pFVar20 = UTexture::GetResource(this_00), pFVar20 == (FTextureResource *)0x0)))))) {
    puVar1 = (uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0x154);
    *puVar1 = *puVar1 | 2;
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x109) =
         *(undefined1 *)((longlong)param_1 + 0x10);
    UTextureRenderTargetVolume::Init
              (*(UTextureRenderTargetVolume **)((longlong)param_1 + 0x18),*(uint *)param_1,
               *(uint *)((longlong)param_1 + 4),*(uint *)((longlong)param_1 + 8),
               *(EPixelFormat *)((longlong)param_1 + 0xc));
    UTextureRenderTargetVolume::UpdateResourceImmediate
              (*(UTextureRenderTargetVolume **)((longlong)param_1 + 0x18),true);
  }
  if (bVar17) {
    pcVar13 = (code *)this->_padding_;
    if ((pcVar13 == (code *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypedProxy != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                            ,0x3a0,L""), bVar17)) {
      pcVar13 = (code *)swi(3);
      uVar15 = (*pcVar13)();
      return (bool)uVar15;
    }
    if (*(UTextureRenderTarget **)((longlong)param_1 + 0x18) == (UTextureRenderTarget *)0x0) {
      local_100 = (FTextureRenderTargetResource *)0x0;
    }
    else {
      local_100 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                            (*(UTextureRenderTarget **)((longlong)param_1 + 0x18));
    }
    pcVar10 = (code *)param_2->ID;
    pcVar2 = *(code **)param_1;
    uVar5 = *(undefined4 *)((longlong)param_1 + 8);
    uVar15 = *(undefined1 *)((longlong)param_1 + 0xc);
    uVar6 = *(undefined4 *)((longlong)param_1 + 0x10);
    uVar3 = *(undefined1 *)((longlong)param_1 + 0x14);
    pcVar11 = *(code **)((longlong)param_1 + 0x18);
    uVar7 = *(undefined4 *)((longlong)param_1 + 0x20);
    pcVar12 = *(code **)((longlong)param_1 + 0x28);
    FNiagaraVariable::FNiagaraVariable(&local_128,(FNiagaraVariable *)((longlong)param_1 + 0x30));
    local_108 = *(undefined4 *)((longlong)param_1 + 0x50);
    local_b8[0] = (code *)0x0;
    local_90 = FMemory::Malloc(0x78,8);
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate'::`27'::<lambda_1>,1,1>
                         ::_vftable_;
    local_90[1] = pcVar13;
    local_90[2] = pcVar10;
    local_90[3] = pcVar2;
    *(undefined4 *)(local_90 + 4) = uVar5;
    *(undefined1 *)((longlong)local_90 + 0x24) = uVar15;
    *(undefined4 *)(local_90 + 5) = uVar6;
    *(undefined1 *)((longlong)local_90 + 0x2c) = uVar3;
    local_90[6] = pcVar11;
    *(undefined4 *)(local_90 + 7) = uVar7;
    local_90[8] = pcVar12;
    local_90[9] = (code *)local_128._padding_;
    *(undefined4 *)(local_90 + 10) = (undefined4)local_128._padding_;
    local_90[0xb] = (code *)0x0;
    local_90[0xb] = (code *)local_128.VarData.AllocatorInstance.Data;
    local_128.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_90 + 0xc) = local_128.VarData.ArrayNum;
    *(int *)((longlong)local_90 + 100) = local_128.VarData.ArrayMax;
    local_128.VarData.ArrayNum = 0;
    local_128.VarData.ArrayMax = 0;
    *(undefined4 *)(local_90 + 0xd) = local_108;
    local_90[0xe] = (code *)local_100;
    if (local_90 + 1 != (code **)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate'::__l27::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_02 = FRenderCommandList::GetInstanceTLS();
    if (this_02 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate_::__l27::TSTR_NDIRenderTargetVolumeUpdate1086>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_03 = FRenderCommandList::GetRenderThread(this_02);
      local_88._0_8_ = local_b8[0];
      local_b8[0] = (code *)0x0;
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_88._16_8_ = local_a8[0];
      local_88._24_8_ = local_a8[1];
      local_88._32_8_ = local_a8[2];
      local_58 = 2;
      pFVar21 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetVolume::PerInstanceTickPostSimulate'::__l27::TSTR_NDIRenderTargetVolumeUpdate1086>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_03,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar21);
      uVar24 = (ulonglong)local_58;
      if ((2 < uVar24) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                              ,0xd4,L""), bVar17)) {
        pcVar13 = (code *)swi(3);
        uVar15 = (*pcVar13)();
        return (bool)uVar15;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar24] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar23 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar23 = local_60;
          }
          (**(code **)(*ppcVar23 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar24])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar23 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar23 = local_90;
      }
      (**(code **)(*ppcVar23 + 0x10))();
    }
    if (local_128.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.VarData.AllocatorInstance.Data);
    }
  }
  return false;
}

// PostInitProperties @ 1491d7ce0

void __thiscall
UNiagaraDataInterfaceRenderTargetVolume::PostInitProperties
          (UNiagaraDataInterfaceRenderTargetVolume *this)

{
  TObjectPtr<UObject>_u_0 local_res8;
  TObjectPtr<UObject>_u_0 local_38;
  FNiagaraTypeDefinitionHandle local_30;
  undefined8 local_2c;
  undefined4 local_24;
  TObjectPtr<UObject>_u_0 local_20;
  undefined2 local_18;
  undefined1 local_16;
  undefined8 local_14;
  undefined4 local_c;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) != 0) {
    local_38 = (TObjectPtr<UObject>_u_0)this->_padding_;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_38.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_38.DebugPtr);
    }
    local_30.RegisteredTypeIndex._2_1_ = 0;
    local_30.RegisteredTypeIndex._0_2_ = 1;
    local_2c = 0xffffffffffffffff;
    local_24 = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_38.ObjectPtr);
    FNiagaraTypeRegistry::Register
              ((FNiagaraTypeDefinition *)&local_38.ObjectPtr,AllowParameter|AllowAnyVariable);
    ::FName::FName((FName *)&local_res8.ObjectPtr,L"RenderTarget");
    local_20.DebugPtr = (UObject *)Z_Construct_UClass_UTexture_NoRegister();
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UClass *)local_20.DebugPtr != (UClass *)0x0)) {
      UE::GC::MarkAsReachable(local_20.DebugPtr);
    }
    local_18 = 1;
    local_16 = 0;
    local_14 = 0xffffffffffffffff;
    local_c = 0xffffffff;
    FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_20.ObjectPtr);
    local_38 = local_res8;
    ExposedRTVar.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&local_30,(FNiagaraTypeDefinition *)&local_20.ObjectPtr);
    ExposedRTVar.Name = (FName)local_38.ObjectPtr.field0_0x0;
  }
  return;
}

// ProvidePerInstanceDataForRenderThread @ 1491d9340

void __thiscall
UNiagaraDataInterfaceRenderTargetVolume::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceRenderTargetVolume *this,void *param_1,void *param_2,
          ulong64 *param_3)

{
  return;
}

// SetShaderParameters @ 1491e1570

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceRenderTargetVolume::SetShaderParameters
          (UNiagaraDataInterfaceRenderTargetVolume *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  int *piVar1;
  char cVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  FRDGBuilder *this_00;
  FRDGTexture *pFVar4;
  FResource *pFVar5;
  uchar *puVar6;
  FRHISamplerState *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  ulong64 uVar12;
  FRenderTargetVolumeRWInstanceData_RenderThread *pFVar13;
  FRDGTextureSRV *pFVar14;
  FRDGTextureUAV *pFVar15;
  FRDGExternalAccessQueue *pFVar16;
  FShaderParametersMetadata *pFVar17;
  TRefCountPtr<FRHISamplerState> TVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  FString local_88;
  FString local_78;
  FString local_68;
  FRDGTextureSRVDesc local_58;
  
  if ((param_1->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("DataInterfaceProxy",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x1c1,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar3 = param_1->DataInterfaceProxy;
  uVar12 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar13 = TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTargetVolumeRWInstanceData_RenderThread,0>_>
                    *)(pFVar3 + 1),uVar12);
  if ((pFVar13 == (FRenderTargetVolumeRWInstanceData_RenderThread *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceData_RT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRenderTargetVolume.cpp"
                         ,0x1c3,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = param_1->GraphBuilder;
  if ((pFVar13->TransientRDGTexture == (FRDGTexture *)0x0) &&
     ((pFVar13->RenderTarget).Reference != (IPooledRenderTarget *)0x0)) {
    local_58.Texture = FRDGBuilder::RegisterExternalTexture(this_00,&pFVar13->RenderTarget,None);
    pFVar13->TransientRDGTexture = local_58.Texture;
    local_58._padding_._4_4_ = 0;
    local_58._padding_._0_1_ = 0;
    local_58._padding_._2_1_ = 0;
    local_58._padding_._0_2_ = 0;
    local_58._padding_._3_1_ = 0;
    local_58._padding_._2_1_ = ((local_58.Texture)->Desc).field_0x30;
    cVar2 = ((local_58.Texture)->Desc).field_0x32;
    if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
      local_58._padding_._4_4_ = (uint)*(ushort *)&((local_58.Texture)->Desc).field_0x2e << 0x10;
    }
    pFVar14 = FRDGBuilder::CreateSRV(this_00,&local_58);
    pFVar13->TransientRDGSRV = pFVar14;
    pFVar15 = FRDGBuilder::CreateUAV(this_00,pFVar13->TransientRDGTexture,None,PF_Unknown);
    pFVar13->TransientRDGUAV = pFVar15;
    FRDGBuilder::UseInternalAccessMode(this_00,(FRDGViewableResource *)pFVar13->TransientRDGTexture)
    ;
    pFVar16 = FNiagaraDataInterfaceSetShaderParametersContext::GetRDGExternalAccessQueue(param_1);
    pFVar4 = pFVar13->TransientRDGTexture;
    if (pFVar4 != (FRDGTexture *)0x0) {
      piVar1 = &(pFVar16->Resources).ArrayMax;
      iVar11 = (pFVar16->Resources).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                           (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)pFVar16,
                            piVar1);
      }
      (pFVar16->Resources).ArrayNum = iVar11 + 1;
      pFVar5 = (pFVar16->Resources).AllocatorInstance.Data;
      pFVar5[iVar11].Resource = (FRDGViewableResource *)pFVar4;
      pFVar5[iVar11].Access = SRVMask;
      pFVar5[iVar11].Pipelines = Graphics;
    }
  }
  uVar20 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar17 = TShaderParameterStructTypeInfo<NDIRenderTargetVolumeLocal::FShaderParameters>::
            GetStructMetadata();
  puVar6 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar17->Size + uVar20;
  *(undefined8 *)(puVar6 + uVar20) = *(undefined8 *)&(pFVar13->Size).field0_0x0;
  *(int *)(puVar6 + (ulonglong)uVar20 + 8) = (pFVar13->Size).field0_0x0._s_0.Z;
  *(int *)(puVar6 + (ulonglong)uVar20 + 0xc) = pFVar13->MipLevels;
  bVar9 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound
                    (param_1,puVar6 + (ulonglong)uVar20 + 0x10);
  bVar10 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound
                     (param_1,puVar6 + (ulonglong)uVar20 + 0x18);
  if (bVar9) {
    if ((pFVar13->RenderTarget).Reference == (IPooledRenderTarget *)0x0) {
      pFVar15 = FNiagaraGpuComputeDispatchInterface::GetEmptyTextureUAV
                          (param_1->ComputeDispatchInterface,this_00,PF_A16B16G16R16,Texture3D);
      *(FRDGTextureUAV **)(puVar6 + (ulonglong)uVar20 + 0x10) = pFVar15;
    }
    else {
      *(FRDGTextureUAV **)(puVar6 + (ulonglong)uVar20 + 0x10) = pFVar13->TransientRDGUAV;
      pFVar13->bWroteThisFrame = true;
    }
  }
  if (bVar10) {
    if ((bVar9) || ((pFVar13->RenderTarget).Reference == (IPooledRenderTarget *)0x0)) {
      FNiagaraDataInterfaceSetShaderParametersContext::GetDebugString(param_1,&local_68);
      ::FString::PrintfImpl
                (&local_88,
                 L"RenderTarget is read and wrote in the same stage, this is not allowed, read will be invalid. (%s)"
                );
      FVar19.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar19.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_78,(wchar_t *)FVar19.Data);
      UEngine::AddOnScreenDebugMessage
                (GEngine,(ulong64)this,__real_3f800000,FColor::White,&local_78,true,
                 &UE::Math::TVector2<double>::UnitVector);
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar14 = FNiagaraGpuComputeDispatchInterface::GetBlackTextureSRV
                          (param_1->ComputeDispatchInterface,this_00,Texture3D);
    }
    else {
      pFVar14 = pFVar13->TransientRDGSRV;
      pFVar13->bReadThisFrame = true;
    }
    *(FRDGTextureSRV **)(puVar6 + (ulonglong)uVar20 + 0x18) = pFVar14;
    pFVar7 = (pFVar13->SamplerStateRHI).Reference;
    TVar18 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI;
    if (pFVar7 != (FRHISamplerState *)0x0) {
      TVar18.Reference = pFVar7;
    }
    *(FRHISamplerState **)(puVar6 + (ulonglong)uVar20 + 0x20) = TVar18.Reference;
  }
  return;
}

// SimCacheBeginWrite @ 1491e1cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __thiscall
UNiagaraDataInterfaceRenderTargetVolume::SimCacheBeginWrite
          (UNiagaraDataInterfaceRenderTargetVolume *this,UObject *param_1,
          FNiagaraSystemInstance *param_2,void *param_3,FNiagaraSimCacheFeedbackContext *param_4)

{
  int iVar1;
  FName FVar2;
  FNameEntryId FVar3;
  UClass *pUVar4;
  UObject *pUVar5;
  UNDIRenderTargetSimCacheData *pUVar6;
  undefined4 extraout_var;
  FString *pFVar7;
  uint uVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStack_d8 [32];
  FString local_b8;
  FString local_a8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  if (param_3 != (void *)0x0) {
    if (NDIRenderTargetVolumeLocal::GSimCacheDataStorageMode == 1) {
      if (param_1 == (UObject *)0x0) {
        pFVar7 = GetTypeName<UNiagaraSimCache>(&local_b8);
        if ((pFVar7->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar10);
      }
      pUVar4 = Z_Construct_UClass_UNiagaraSimCache_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        FObjectInitializer::AssertIfInConstructor
                  (param_1,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
        pUVar4 = Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister();
        FStaticConstructObjectParameters::FStaticConstructObjectParameters
                  ((FStaticConstructObjectParameters *)local_98,pUVar4);
        local_98._8_8_ = param_1;
        pUVar5 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
        if (local_98._64_8_ != 0) {
          plVar9 = (longlong *)(local_98 + 0x50);
          if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
            plVar9 = (longlong *)local_98._104_8_;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
        (**(code **)(*(longlong *)pUVar5 + 0x318))(pUVar5,1);
        return pUVar5;
      }
      pFVar7 = GetTypeName<UNiagaraSimCache>(&local_b8);
      pwVar10 = L"";
      if ((pFVar7->Data).ArrayNum == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
      pFVar7 = GetFullNameForCastLogError<UObject>(&local_a8,param_1);
      if ((pFVar7->Data).ArrayNum != 0) {
        pwVar10 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar10,pwVar11);
    }
    if (NDIRenderTargetVolumeLocal::GSimCacheEnabled != 0) {
      pUVar6 = NewObject<UNDIRenderTargetSimCacheData>(param_1);
      if (NDIRenderTargetVolumeLocal::GSimCacheCompressed == 0) {
        uVar8 = 0;
      }
      else {
        FVar3 = FNameEntryId::FromValidEName((EName)&local_b8);
        uVar8 = *(uint *)CONCAT44(extraout_var,FVar3.Value);
      }
      FVar2.Number = 0;
      FVar2.ComparisonIndex.Value = uVar8;
      pUVar6->CompressionType = FVar2;
      return (UObject *)pUVar6;
    }
  }
  return (UObject *)0x0;
}

// SimCacheEndWrite @ 1491e1f60

bool __thiscall
UNiagaraDataInterfaceRenderTargetVolume::SimCacheEndWrite
          (UNiagaraDataInterfaceRenderTargetVolume *this,UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (NDIRenderTargetVolumeLocal::GSimCacheDataStorageMode == 1) {
    if (param_1 == (UObject *)0x0) {
      pFVar3 = GetTypeName<UAnimatedSparseVolumeTexture>(&local_28);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar4);
    }
    pUVar2 = Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar2->_padding_)) {
      pFVar3 = GetTypeName<UAnimatedSparseVolumeTexture>(&local_28);
      pwVar4 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar4,pwVar5);
    }
    (**(code **)(*(longlong *)param_1 + 0x328))(param_1);
    (**(code **)(*(longlong *)param_1 + 0x98))(param_1);
  }
  return true;
}

// SimCacheReadFrame @ 1491e2450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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

bool __thiscall
UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame
          (UNiagaraDataInterfaceRenderTargetVolume *this,
          FNiagaraSimCacheDataInterfaceReadContext *param_1)

{
  int iVar1;
  UObject *pUVar2;
  undefined8 *puVar3;
  longlong lVar4;
  USparseVolumeTexture *pUVar5;
  FNiagaraSystemInstance *pFVar6;
  FScriptContainerElement *pFVar7;
  ulong64 uVar8;
  UNDIRenderTargetSimCacheData *this_00;
  code *pcVar9;
  undefined1 *puVar10;
  bool bVar11;
  undefined1 uVar12;
  EPixelFormat EVar13;
  UClass *pUVar14;
  USparseVolumeTextureFrame *pUVar15;
  IStreamingManager *pIVar16;
  FRenderCommandList *pFVar17;
  FCommandList *pFVar18;
  FRenderCommandTag *pFVar19;
  longlong *plVar20;
  TIntVector3<int> *pTVar21;
  FNiagaraDataInterfaceProxyRenderTargetVolumeProxy *pFVar22;
  uint uVar23;
  longlong *plVar24;
  ulonglong uVar25;
  int *piVar26;
  undefined1 in_XMM3 [16];
  undefined1 auVar27 [16];
  undefined1 auStackY_1f8 [32];
  undefined8 local_1b8;
  undefined4 local_1b0;
  FScriptContainerElement *local_1a8;
  ulong64 uStack_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong local_188;
  Type TStack_180;
  undefined4 uStack_17c;
  FNiagaraDataInterfaceProxyRenderTargetVolumeProxy *local_178;
  ulong64 uStack_170;
  FTextureRenderTargetResource *local_168;
  UNDIRenderTargetSimCacheData *pUStack_160;
  int local_158;
  undefined4 uStack_154;
  TIntVector3<int> local_150 [2];
  undefined1 local_138 [40];
  longlong *local_110;
  undefined1 local_108 [40];
  longlong *local_e0;
  undefined1 local_d8 [48];
  byte local_a8;
  undefined1 local_98 [48];
  byte local_68;
  ulonglong local_58;
  
  puVar10 = local_108;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  if ((param_1->OptionalPerInstanceData == (void *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("OptionalPerInstanceData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraSimCacheCustomStorageInterface.h"
                          ,0x1d,L""), bVar11)) {
    pcVar9 = (code *)swi(3);
    uVar12 = (*pcVar9)();
    return (bool)uVar12;
  }
  pUVar2 = param_1->StorageObject;
  puVar3 = param_1->OptionalPerInstanceData;
  if (pUVar2 != (UObject *)0x0) {
    pUVar14 = Z_Construct_UClass_UVolumeCache_NoRegister();
    lVar4 = *(longlong *)&pUVar2->field_0x10;
    iVar1 = (int)pUVar14->_padding_;
    if ((iVar1 <= *(int *)(lVar4 + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar14->_padding_)) {
      if ((byte)LogNiagara._0_1_ < 2) {
        return true;
      }
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      return true;
    }
  }
  pUVar5 = (USparseVolumeTexture *)param_1->StorageObject;
  if (pUVar5 != (USparseVolumeTexture *)0x0) {
    pUVar14 = Z_Construct_UClass_UAnimatedSparseVolumeTexture_NoRegister();
    iVar1 = (int)pUVar14->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar14->_padding_)) {
      uVar23 = ((uint)((ulonglong)&this[-1]._padding_ >> 0x14) & 0xffff ^
               (uint)((ulonglong)&this[-1]._padding_ >> 4)) * -0x7a143595;
      uVar23 = (uVar23 >> 0xd ^ uVar23) * -0x3d4d51cb;
      auVar27 = roundps(in_XMM3,ZEXT416((uint)((float)param_1->FrameIndexA + param_1->FrameInterp +
                                              __real_3f000000)),1);
      pUVar15 = USparseVolumeTextureFrame::GetFrameAndIssueStreamingRequest
                          (pUVar5,uVar23 >> 0x10 ^ uVar23,0.0,auVar27._0_4_,0.0,true,false);
      pIVar16 = UE::SVT::GetStreamingManager();
      (**(code **)((longlong)*pIVar16 + 0x18))(pIVar16);
      pFVar6 = param_1->SystemInstance;
      (**(code **)(*(longlong *)pUVar5 + 0x2e0))(pUVar5,&local_1b8);
      *puVar3 = local_1b8;
      *(undefined4 *)(puVar3 + 1) = local_1b0;
      uVar12 = (**(code **)(*(longlong *)pUVar5 + 0x2e8))(pUVar5,0);
      *(undefined4 *)(puVar3 + 2) = 3;
      *(undefined1 *)((longlong)puVar3 + 0xc) = uVar12;
      (**(code **)(this[-1]._padding_ + 0x2f8))(&this[-1]._padding_,puVar3,pFVar6);
      (**(code **)(this[-1]._padding_ + 0x300))(&this[-1]._padding_,puVar3,pFVar6);
      pFVar7 = this[-1].RenderTargetUserParameter.Parameter.VarData.AllocatorInstance.Data;
      if ((pFVar7 == (FScriptContainerElement *)0x0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypedProxy != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                              ,0x3a0,L""), bVar11)) {
        pcVar9 = (code *)swi(3);
        uVar12 = (*pcVar9)();
        return (bool)uVar12;
      }
      uVar8 = pFVar6->ID;
      local_188 = 0;
      if (pUVar15 != (USparseVolumeTextureFrame *)0x0) {
        local_188 = (**(code **)(*(longlong *)pUVar15 + 0x310))(pUVar15);
      }
      local_198 = CONCAT31(local_198._1_3_,*(undefined1 *)((longlong)puVar3 + 0xc));
      uStack_18c = local_1b0;
      TStack_180 = pFVar6->FeatureLevel;
      uStack_194 = (undefined4)local_1b8;
      uStack_190 = (undefined4)((ulonglong)local_1b8 >> 0x20);
      local_138._0_8_ = (code *)0x0;
      local_1a8 = pFVar7;
      uStack_1a0 = uVar8;
      local_110 = FMemory::Malloc(0x38,8);
      *local_110 = (longlong)
                   &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::`27'::<lambda_1>,1,1>
                    ::_vftable_;
      local_110[1] = (longlong)local_1a8;
      local_110[2] = uStack_1a0;
      local_110[3] = CONCAT44(uStack_194,local_198);
      local_110[4] = CONCAT44(uStack_18c,uStack_190);
      local_110[5] = local_188;
      local_110[6] = CONCAT44(uStack_17c,TStack_180);
      if (local_110 + 1 != (longlong *)0x0) {
        local_138._0_8_ =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l27::<lambda_1>,void,FRHICommandListImmediate_&>
             ::Call;
      }
      pFVar17 = FRenderCommandList::GetInstanceTLS();
      if (pFVar17 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame_::__l27::TSTR_NDIRenderTargetVolumeUpdate764>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_138);
      }
      else {
        pFVar18 = FRenderCommandList::GetRenderThread(pFVar17);
        local_d8._0_8_ = local_138._0_8_;
        local_138._0_8_ = (code *)0x0;
        local_d8._40_8_ = local_110;
        local_110 = (longlong *)0x0;
        local_d8._16_8_ = local_138._16_8_;
        local_d8._24_8_ = local_138._24_8_;
        local_d8._32_8_ = local_138._32_8_;
        local_a8 = 2;
        pFVar19 = (FRenderCommandTag *)
                  TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l27::TSTR_NDIRenderTargetVolumeUpdate764>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (pFVar18,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_d8,pFVar19);
        uVar25 = (ulonglong)local_a8;
        if ((2 < uVar25) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                                ,0xd4,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          uVar12 = (*pcVar9)();
          return (bool)uVar12;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar25] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_d8._0_8_ != (code *)0x0) {
            plVar20 = (longlong *)(local_d8 + 0x10);
            if ((longlong *)local_d8._40_8_ != (longlong *)0x0) {
              plVar20 = (longlong *)local_d8._40_8_;
            }
            (**(code **)(*plVar20 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar25])(local_d8);
        }
      }
      if ((code *)local_138._0_8_ == (code *)0x0) {
        return true;
      }
      puVar10 = local_138;
      plVar20 = local_110;
      goto LAB_1491e2818;
    }
  }
  this_00 = (UNDIRenderTargetSimCacheData *)param_1->StorageObject;
  if (this_00 == (UNDIRenderTargetSimCacheData *)0x0) {
    return true;
  }
  pUVar14 = Z_Construct_UClass_UNDIRenderTargetSimCacheData_NoRegister();
  iVar1 = (int)pUVar14->_padding_;
  if (*(int *)(this_00->_padding_ + 0x38) < iVar1) {
    return true;
  }
  if ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
      != &pUVar14->_padding_) {
    return true;
  }
  piVar26 = &param_1->FrameIndexB;
  if (param_1->FrameInterp <= __real_3f000000 && __real_3f000000 != param_1->FrameInterp) {
    piVar26 = &param_1->FrameIndexA;
  }
  iVar1 = *piVar26;
  if ((iVar1 < 0) || ((this_00->Frames).ArrayNum <= iVar1)) {
    return false;
  }
  pFVar6 = param_1->SystemInstance;
  pTVar21 = UNDIRenderTargetSimCacheData::GetTextureSize(this_00,local_150,iVar1);
  *puVar3 = *(undefined8 *)&pTVar21->field0_0x0;
  *(int *)(puVar3 + 1) = (pTVar21->field0_0x0)._s_0.Z;
  EVar13 = UNDIRenderTargetSimCacheData::GetTextureFormat(this_00,iVar1);
  *(EPixelFormat *)((longlong)puVar3 + 0xc) = EVar13;
  *(undefined4 *)(puVar3 + 2) = 3;
  (**(code **)(this[-1]._padding_ + 0x2f8))(&this[-1]._padding_,puVar3,pFVar6);
  (**(code **)(this[-1]._padding_ + 0x300))(&this[-1]._padding_,puVar3,pFVar6);
  if (puVar3[3] == 0) {
    return true;
  }
  bVar11 = UNDIRenderTargetSimCacheData::HasPixelData(this_00,iVar1);
  if (!bVar11) {
    return true;
  }
  pFVar22 = UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyRenderTargetVolumeProxy>
                      ((UNiagaraDataInterface *)&this[-1]._padding_);
  local_168 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                        ((UTextureRenderTarget *)puVar3[3]);
  uStack_170 = pFVar6->ID;
  local_108._0_8_ = (code *)0x0;
  local_178 = pFVar22;
  pUStack_160 = this_00;
  local_158 = iVar1;
  local_e0 = FMemory::Malloc(0x30,8);
  *local_e0 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::`37'::<lambda_2>,1,1>
               ::_vftable_;
  local_e0[1] = (longlong)local_178;
  local_e0[2] = uStack_170;
  local_e0[3] = (longlong)local_168;
  local_e0[4] = (longlong)pUStack_160;
  local_e0[5] = CONCAT44(uStack_154,local_158);
  if (local_e0 + 1 != (longlong *)0x0) {
    local_108._0_8_ =
         UE::Core::Private::Function::
         TFunctionRefCaller<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l37::<lambda_2>,void,FRHICommandListImmediate_&>
         ::Call;
  }
  pFVar17 = FRenderCommandList::GetInstanceTLS();
  if (pFVar17 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame_::__l37::TSTR_NDIRenderTargetVolumeUpdate874>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_108);
  }
  else {
    pFVar18 = FRenderCommandList::GetRenderThread(pFVar17);
    local_98._0_8_ = local_108._0_8_;
    local_108._0_8_ = (code *)0x0;
    local_98._40_8_ = local_e0;
    local_e0 = (longlong *)0x0;
    local_98._16_8_ = local_108._16_8_;
    local_98._24_8_ = local_108._24_8_;
    local_98._32_8_ = local_108._32_8_;
    local_68 = 2;
    pFVar19 = (FRenderCommandTag *)
              TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheReadFrame'::__l37::TSTR_NDIRenderTargetVolumeUpdate874>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar18,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_98,pFVar19);
    uVar25 = (ulonglong)local_68;
    if ((2 < uVar25) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar11)) {
      pcVar9 = (code *)swi(3);
      uVar12 = (*pcVar9)();
      return (bool)uVar12;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar25] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_98._0_8_ != (code *)0x0) {
        plVar20 = (longlong *)(local_98 + 0x10);
        if ((longlong *)local_98._40_8_ != (longlong *)0x0) {
          plVar20 = (longlong *)local_98._40_8_;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar25])(local_98);
    }
  }
  plVar20 = local_e0;
  if ((code *)local_108._0_8_ == (code *)0x0) {
    return true;
  }
LAB_1491e2818:
  plVar24 = (longlong *)(puVar10 + 0x10);
  if (plVar20 != (longlong *)0x0) {
    plVar24 = plVar20;
  }
  (**(code **)(*plVar24 + 0x10))();
  return true;
}

// SimCacheWriteFrame @ 1491e2ec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

bool __thiscall
UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame
          (UNiagaraDataInterfaceRenderTargetVolume *this,UObject *param_1,int param_2,
          FNiagaraSystemInstance *param_3,void *param_4,FNiagaraSimCacheFeedbackContext *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined1 uVar6;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar7;
  UNDIRenderTargetSimCacheData *this_02;
  code **ppcVar8;
  ulonglong uVar9;
  undefined1 auStackY_158 [32];
  uchar *local_128;
  undefined8 local_120;
  TIntVector3<int>_u_0 local_118;
  uchar *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FScriptContainerElement *local_f8;
  code *pcStack_f0;
  FTextureRenderTargetResource *local_e8;
  uchar **ppuStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  TArrayView<unsigned_char,int> local_c8;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  if (param_4 == (void *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OptionalPerInstanceData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRenderTargetVolume.cpp"
                       ,0x268,L"");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return (bool)uVar6;
    }
  }
  if (*(longlong *)((longlong)param_4 + 0x18) != 0) {
    pFVar1 = this[-1].RenderTargetUserParameter.Parameter.VarData.AllocatorInstance.Data;
    if (pFVar1 == (FScriptContainerElement *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a8,L"");
      if (bVar5) {
        pcVar2 = (code *)swi(3);
        uVar6 = (*pcVar2)();
        return (bool)uVar6;
      }
    }
    local_e8 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                         (*(UTextureRenderTarget **)((longlong)param_4 + 0x18));
    pcStack_f0 = (code *)param_3->ID;
    uVar3 = *(undefined4 *)param_4;
    uVar4 = *(undefined4 *)((longlong)param_4 + 4);
    ppuStack_e0 = &local_128;
    uStack_d0 = *(undefined4 *)((longlong)param_4 + 8);
    local_128 = (uchar *)0x0;
    local_120 = 0;
    local_b8[0] = (code *)0x0;
    local_f8 = pFVar1;
    local_90 = FMemory::Malloc(0x38,8);
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame'::`12'::<lambda_1>,1,1>
                         ::_vftable_;
    local_90[1] = (code *)local_f8;
    local_90[2] = pcStack_f0;
    local_90[3] = (code *)local_e8;
    local_90[4] = (code *)ppuStack_e0;
    *(undefined4 *)(local_90 + 5) = uVar3;
    *(undefined4 *)((longlong)local_90 + 0x2c) = uVar4;
    *(undefined4 *)(local_90 + 6) = uStack_d0;
    *(undefined4 *)((longlong)local_90 + 0x34) = uStack_cc;
    if (local_90 + 1 != (code **)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    local_d8 = uVar3;
    uStack_d4 = uVar4;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame_::__l12::TSTR_NDIRenderTargetVolume_CacheFrame628>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_88._0_8_ = local_b8[0];
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_88._16_8_ = local_a8[0];
      local_88._24_8_ = local_a8[1];
      local_88._32_8_ = local_a8[2];
      local_b8[0] = (code *)0x0;
      local_58 = 2;
      pFVar7 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceRenderTargetVolume::SimCacheWriteFrame'::__l12::TSTR_NDIRenderTargetVolume_CacheFrame628>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar7);
      uVar9 = (ulonglong)local_58;
      if (2 < uVar9) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar8 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar8 = local_60;
          }
          (**(code **)(*ppcVar8 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar9])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar8 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar8 = local_90;
      }
      (**(code **)(*ppcVar8 + 0x10))();
    }
    FlushRenderingCommands();
    if ((0 < (int)local_120) && (NDIRenderTargetVolumeLocal::GSimCacheDataStorageMode != 1)) {
      this_02 = CastChecked<UNDIRenderTargetSimCacheData,UObject>(param_1);
      iStack_100 = (int)local_120;
      local_108 = local_128;
      if ((int)local_120 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar5) {
          pcVar2 = (code *)swi(3);
          uVar6 = (*pcVar2)();
          return (bool)uVar6;
        }
      }
      local_118._s_0.Z = *(int *)((longlong)param_4 + 8);
      local_118._0_8_ = *(undefined8 *)param_4;
      local_c8._12_4_ = uStack_fc;
      local_c8.ArrayNum = iStack_100;
      local_c8.DataPtr = local_108;
      UNDIRenderTargetSimCacheData::SetPixelData
                (this_02,param_2,(TIntVector3<int> *)&local_118._s_0,
                 *(EPixelFormat *)((longlong)param_4 + 0xc),&local_c8);
    }
    if (local_128 != (uchar *)0x0) {
      FMemory::Free(local_128);
    }
  }
  return true;
}

// StaticRegisterNativesUNiagaraDataInterfaceRenderTargetVolume @ 1491e3630

void __cdecl
UNiagaraDataInterfaceRenderTargetVolume::
StaticRegisterNativesUNiagaraDataInterfaceRenderTargetVolume(void)

{
  return;
}

// VMGetNumMipLevels @ 1491e6230

void __thiscall
UNiagaraDataInterfaceRenderTargetVolume::VMGetNumMipLevels
          (UNiagaraDataInterfaceRenderTargetVolume *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread>::
  FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread>(&local_18,param_1);
  iVar2 = 0;
  local_18.Ptr._0_4_ = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,(int *)&local_18.Ptr);
  pfVar1 = pfVar1 + (int)local_18.Ptr * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      iVar2 = iVar2 + 1;
      *pfVar1 = 1.4013e-45;
      pfVar1 = pfVar1 + (int)local_18.Ptr;
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// VMGetSize @ 1491e64f0

void __thiscall
UNiagaraDataInterfaceRenderTargetVolume::VMGetSize
          (UNiagaraDataInterfaceRenderTargetVolume *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_40 [4];
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread>::
  FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread>(&local_18,param_1);
  iVar6 = 0;
  local_40[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_40);
  iVar4 = local_40[0] * param_1->PerInstanceFnInstanceIdx;
  local_30[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar5 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  if (0 < param_1->NumInstances) {
    pfVar2 = pfVar2 + iVar5;
    pfVar1 = pfVar1 + iVar4;
    pfVar3 = pfVar3 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      iVar6 = iVar6 + 1;
      *pfVar1 = (float)((local_18.Ptr)->Size).field0_0x0._s_0.X;
      *pfVar2 = (float)((local_18.Ptr)->Size).field0_0x0._s_0.Y;
      *pfVar3 = (float)((local_18.Ptr)->Size).field0_0x0._s_0.Z;
      pfVar2 = pfVar2 + local_30[0];
      pfVar1 = pfVar1 + local_40[0];
      pfVar3 = pfVar3 + local_20[0];
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

// VMSetFormat @ 1491e6e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceRenderTargetVolume::VMSetFormat
          (UNiagaraDataInterfaceRenderTargetVolume *this,FVectorVMExternalFunctionContext *param_1)

{
  EPixelFormat EVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  TObjectPtr<UObject> this_00;
  UClass *pUVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  float local_res10 [2];
  float *local_res18;
  undefined1 local_res20 [8];
  int local_70 [2];
  int local_68 [2];
  FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread> local_60 [2];
  
  VectorVM::FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread>::
  FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread>(local_60,param_1);
  local_68[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  lVar8 = (longlong)local_68[0];
  local_70[0] = 0;
  pfVar3 = pfVar3 + local_68[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_70);
  lVar7 = (longlong)local_70[0];
  iVar9 = 0;
  iVar10 = param_1->NumInstances;
  pfVar4 = pfVar4 + local_70[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < iVar10) {
    do {
      local_res10[0] = *pfVar3;
      pfVar3 = pfVar3 + lVar8;
      if ((local_60[0].Ptr == (FRenderTargetVolumeRWInstanceData_GameThread *)0x0) || (iVar10 != 1))
      {
        *pfVar4 = 0.0;
      }
      else {
        *pfVar4 = -NAN;
        switch(local_res10[0]) {
        case 0.0:
          EVar1 = PF_G8;
          break;
        case 1.4013e-45:
          EVar1 = PF_R8G8;
          break;
        case 2.8026e-45:
        case 4.2039e-45:
          EVar1 = PF_B8G8R8A8;
          break;
        case 5.60519e-45:
          EVar1 = PF_R16F;
          break;
        case 7.00649e-45:
          EVar1 = PF_G16R16F;
          break;
        case 8.40779e-45:
          EVar1 = PF_FloatRGBA;
          break;
        case 9.80909e-45:
          EVar1 = PF_R32_FLOAT;
          break;
        case 1.12104e-44:
          EVar1 = PF_G32R32F;
          break;
        case 1.26117e-44:
          EVar1 = PF_A32B32G32R32F;
          break;
        case 1.4013e-44:
          EVar1 = PF_A2B10G10R10;
          break;
        default:
          local_res18 = local_res10;
          `GetPixelFormatFromRenderTargetFormat'::__l2::<lambda_1>::operator()(&local_res18);
          EVar1 = PF_Unknown;
        }
        (local_60[0].Ptr)->Format = EVar1;
        if ((this->bInheritUserParameterSettings != 0) &&
           (((local_60[0].Ptr)->RTUserParamBinding).UObjectOffset != -1)) {
          this_00 = FNiagaraParameterStore::GetUObject
                              (((local_60[0].Ptr)->RTUserParamBinding).BoundStore,(int)local_res20);
          if (*(longlong *)this_00.field0_0x0 == 0) {
LAB_1491e6fe4:
            lVar6 = 0;
          }
          else {
            pUVar5 = Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
            bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar5);
            if (!bVar2) goto LAB_1491e6fe4;
            lVar6 = *(longlong *)this_00.field0_0x0;
          }
          if ((lVar6 != 0) && (2 < (byte)LogNiagara._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          }
        }
      }
      pfVar4 = pfVar4 + lVar7;
      iVar10 = param_1->NumInstances;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar10);
  }
  return;
}

// VMSetSize @ 1491e7860

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceRenderTargetVolume::VMSetSize
          (UNiagaraDataInterfaceRenderTargetVolume *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  TRHIGlobal<int> TVar4;
  bool bVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  TObjectPtr<UObject> this_00;
  UClass *pUVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  float *local_res10;
  undefined1 local_70 [8];
  int local_68 [2];
  int local_60 [2];
  FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread> local_58;
  
  VectorVM::FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread>::
  FUserPtrHandler<FRenderTargetVolumeRWInstanceData_GameThread>(&local_58,param_1);
  iVar14 = 0;
  local_60[0] = 0;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  iVar6 = local_60[0];
  lVar13 = (longlong)local_60[0];
  local_60[0] = 0;
  pfVar7 = pfVar7 + iVar6 * param_1->PerInstanceFnInstanceIdx;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  iVar6 = local_60[0];
  lVar15 = (longlong)local_60[0];
  local_60[0] = 0;
  pfVar8 = pfVar8 + iVar6 * param_1->PerInstanceFnInstanceIdx;
  local_res10 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  lVar16 = (longlong)local_60[0];
  local_68[0] = 0;
  local_res10 = local_res10 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar9 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_68);
  lVar12 = (longlong)local_68[0];
  pfVar9 = pfVar9 + local_68[0] * param_1->PerInstanceFnInstanceIdx;
  iVar6 = param_1->NumInstances;
  if (0 < iVar6) {
    do {
      fVar1 = *pfVar7;
      fVar2 = *pfVar8;
      fVar3 = *local_res10;
      if ((((local_58.Ptr == (FRenderTargetVolumeRWInstanceData_GameThread *)0x0) || (iVar6 != 1))
          || ((int)fVar1 < 1)) || (((int)fVar2 < 1 || ((int)fVar3 < 1)))) {
        *pfVar9 = 0.0;
      }
      else {
        *pfVar9 = -NAN;
        iVar6 = (int)((float)(int)fVar1 *
                     NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
        TVar4 = GRHIGlobals.MaxVolumeTextureDimensions;
        if (iVar6 < GRHIGlobals.MaxVolumeTextureDimensions.Value) {
          TVar4.Value = iVar6;
        }
        iVar6 = 1;
        if (1 < TVar4.Value) {
          iVar6 = TVar4.Value;
        }
        ((local_58.Ptr)->Size).field0_0x0._s_0.X = iVar6;
        iVar6 = (int)((float)(int)fVar2 *
                     NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
        TVar4 = GRHIGlobals.MaxVolumeTextureDimensions;
        if (iVar6 < GRHIGlobals.MaxVolumeTextureDimensions.Value) {
          TVar4.Value = iVar6;
        }
        iVar6 = 1;
        if (1 < TVar4.Value) {
          iVar6 = TVar4.Value;
        }
        ((local_58.Ptr)->Size).field0_0x0._s_0.Y = iVar6;
        iVar6 = (int)((float)(int)fVar3 *
                     NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
        TVar4 = GRHIGlobals.MaxVolumeTextureDimensions;
        if (iVar6 < GRHIGlobals.MaxVolumeTextureDimensions.Value) {
          TVar4.Value = iVar6;
        }
        iVar6 = 1;
        if (1 < TVar4.Value) {
          iVar6 = TVar4.Value;
        }
        ((local_58.Ptr)->Size).field0_0x0._s_0.Z = iVar6;
        if ((this->bInheritUserParameterSettings != 0) &&
           (((local_58.Ptr)->RTUserParamBinding).UObjectOffset != -1)) {
          this_00 = FNiagaraParameterStore::GetUObject
                              (((local_58.Ptr)->RTUserParamBinding).BoundStore,(int)local_70);
          if (*(longlong *)this_00.field0_0x0 == 0) {
LAB_1491e7a8f:
            lVar11 = 0;
          }
          else {
            pUVar10 = Z_Construct_UClass_UTextureRenderTargetVolume_NoRegister();
            bVar5 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar10);
            if (!bVar5) goto LAB_1491e7a8f;
            lVar11 = *(longlong *)this_00.field0_0x0;
          }
          if ((lVar11 != 0) && (2 < (byte)LogNiagara._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          }
        }
      }
      pfVar9 = pfVar9 + lVar12;
      iVar6 = param_1->NumInstances;
      iVar14 = iVar14 + 1;
      pfVar7 = pfVar7 + lVar13;
      pfVar8 = pfVar8 + lVar15;
      local_res10 = local_res10 + lVar16;
    } while (iVar14 < iVar6);
  }
  return;
}

// _getUObject @ 1491e8630

UObject * __thiscall
UNiagaraDataInterfaceRenderTargetVolume::_getUObject(UNiagaraDataInterfaceRenderTargetVolume *this)

{
  return (UObject *)&this[-1]._padding_;
}

