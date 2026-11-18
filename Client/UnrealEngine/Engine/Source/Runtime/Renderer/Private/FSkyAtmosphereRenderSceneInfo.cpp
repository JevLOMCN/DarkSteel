// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 8

// FSkyAtmosphereRenderSceneInfo @ 145666270

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FSkyAtmosphereRenderSceneInfo * __thiscall
FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo
          (FSkyAtmosphereRenderSceneInfo *this,FSkyAtmosphereSceneProxy *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  FSkyAtmosphereRenderSceneInfo *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  TUniformBufferRef<FAtmosphereUniformShaderParameters> *pTStack_70;
  FAtmosphereUniformShaderParameters *local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  TUniformBufferRef<FAtmosphereUniformShaderParameters> *pTStack_40;
  FAtmosphereUniformShaderParameters *local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  this->SkyAtmosphereSceneProxy = param_1;
  pTStack_70 = &this->AtmosphereUniformBuffer;
  this->InternalCommonParametersUniformBuffer =
       (TUniformBufferRef<FSkyAtmosphereInternalCommonParameters>)0x0;
  (this->TransmittanceLutTexture).Reference = (IPooledRenderTarget *)0x0;
  (this->MultiScatteredLuminanceLutTexture).Reference = (IPooledRenderTarget *)0x0;
  (this->DistantSkyLightLutBuffer).Reference = (FRDGPooledBuffer *)0x0;
  this->DistantSkyLightLutBufferSRV = (FRHIShaderResourceView *)0x0;
  (this->MobileDistantSkyLightLutBuffer).Reference = (FRDGPooledBuffer *)0x0;
  this->MobileDistantSkyLightLutBufferSRV = (FRHIShaderResourceView *)0x0;
  local_68 = &this->AtmosphereUniformShaderParameters;
  *pTStack_70 = (TUniformBufferRef<FAtmosphereUniformShaderParameters>)0x0;
  local_60 = (undefined ***)0x0;
  local_68->MultiScatteringFactor = (param_1->AtmosphereSetup).MultiScatteringFactor;
  (this->AtmosphereUniformShaderParameters).BottomRadiusKm =
       (param_1->AtmosphereSetup).BottomRadiusKm;
  (this->AtmosphereUniformShaderParameters).TopRadiusKm = (param_1->AtmosphereSetup).TopRadiusKm;
  (this->AtmosphereUniformShaderParameters).RayleighDensityExpScale =
       (param_1->AtmosphereSetup).RayleighDensityExpScale;
  uVar2 = *(undefined8 *)((longlong)&(param_1->AtmosphereSetup).RayleighScattering.field0_0x0 + 8);
  *(undefined8 *)&(this->AtmosphereUniformShaderParameters).RayleighScattering.field0_0x0 =
       *(undefined8 *)&(param_1->AtmosphereSetup).RayleighScattering.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->AtmosphereUniformShaderParameters).RayleighScattering.field0_0x0 + 8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->AtmosphereSetup).MieScattering.field0_0x0 + 8);
  *(undefined8 *)&(this->AtmosphereUniformShaderParameters).MieScattering.field0_0x0 =
       *(undefined8 *)&(param_1->AtmosphereSetup).MieScattering.field0_0x0;
  *(undefined8 *)((longlong)&(this->AtmosphereUniformShaderParameters).MieScattering.field0_0x0 + 8)
       = uVar2;
  (this->AtmosphereUniformShaderParameters).MieDensityExpScale =
       (param_1->AtmosphereSetup).MieDensityExpScale;
  uVar2 = *(undefined8 *)((longlong)&(param_1->AtmosphereSetup).MieExtinction.field0_0x0 + 8);
  *(undefined8 *)&(this->AtmosphereUniformShaderParameters).MieExtinction.field0_0x0 =
       *(undefined8 *)&(param_1->AtmosphereSetup).MieExtinction.field0_0x0;
  *(undefined8 *)((longlong)&(this->AtmosphereUniformShaderParameters).MieExtinction.field0_0x0 + 8)
       = uVar2;
  (this->AtmosphereUniformShaderParameters).MiePhaseG = (param_1->AtmosphereSetup).MiePhaseG;
  uVar2 = *(undefined8 *)((longlong)&(param_1->AtmosphereSetup).MieAbsorption.field0_0x0 + 8);
  *(undefined8 *)&(this->AtmosphereUniformShaderParameters).MieAbsorption.field0_0x0 =
       *(undefined8 *)&(param_1->AtmosphereSetup).MieAbsorption.field0_0x0;
  *(undefined8 *)((longlong)&(this->AtmosphereUniformShaderParameters).MieAbsorption.field0_0x0 + 8)
       = uVar2;
  (this->AtmosphereUniformShaderParameters).AbsorptionDensity0LayerWidth =
       (param_1->AtmosphereSetup).AbsorptionDensity0LayerWidth;
  (this->AtmosphereUniformShaderParameters).AbsorptionDensity0ConstantTerm =
       (param_1->AtmosphereSetup).AbsorptionDensity0ConstantTerm;
  (this->AtmosphereUniformShaderParameters).AbsorptionDensity0LinearTerm =
       (param_1->AtmosphereSetup).AbsorptionDensity0LinearTerm;
  (this->AtmosphereUniformShaderParameters).AbsorptionDensity1ConstantTerm =
       (param_1->AtmosphereSetup).AbsorptionDensity1ConstantTerm;
  (this->AtmosphereUniformShaderParameters).AbsorptionDensity1LinearTerm =
       (param_1->AtmosphereSetup).AbsorptionDensity1LinearTerm;
  uVar2 = *(undefined8 *)((longlong)&(param_1->AtmosphereSetup).AbsorptionExtinction.field0_0x0 + 8)
  ;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  *(undefined8 *)&(this->AtmosphereUniformShaderParameters).AbsorptionExtinction.field0_0x0 =
       *(undefined8 *)&(param_1->AtmosphereSetup).AbsorptionExtinction.field0_0x0;
  *(undefined8 *)
   ((longlong)&(this->AtmosphereUniformShaderParameters).AbsorptionExtinction.field0_0x0 + 8) =
       uVar2;
  uVar2 = *(undefined8 *)((longlong)&(param_1->AtmosphereSetup).GroundAlbedo.field0_0x0 + 8);
  *(undefined8 *)&(this->AtmosphereUniformShaderParameters).GroundAlbedo.field0_0x0 =
       *(undefined8 *)&(param_1->AtmosphereSetup).GroundAlbedo.field0_0x0;
  *(undefined8 *)((longlong)&(this->AtmosphereUniformShaderParameters).GroundAlbedo.field0_0x0 + 8)
       = uVar2;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo_::__l2::TSTR_FCreateUniformBuffer530>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pTStack_40 = pTStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo'::__l2::TSTR_FCreateUniformBuffer530>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar4);
    uVar7 = (ulonglong)local_28;
    if (2 < uVar7) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pFVar5 = (FSkyAtmosphereRenderSceneInfo *)(*pcVar1)();
        return pFVar5;
      }
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar6 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar6 = local_30;
        }
        (*(code *)(*pppuVar6)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar7])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar6 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar6 = local_60;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  return this;
}

// ~FSkyAtmosphereRenderSceneInfo @ 145667150

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FSkyAtmosphereRenderSceneInfo::~FSkyAtmosphereRenderSceneInfo(FSkyAtmosphereRenderSceneInfo *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  IPooledRenderTarget *pIVar3;
  longlong lVar4;
  
  pFVar2 = (this->MobileDistantSkyLightLutBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->DistantSkyLightLutBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pIVar3 = (this->MultiScatteredLuminanceLutTexture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->TransmittanceLutTexture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  if (this->InternalCommonParametersUniformBuffer !=
      (TUniformBufferRef<FSkyAtmosphereInternalCommonParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->InternalCommonParametersUniformBuffer);
  }
  if (this->AtmosphereUniformBuffer != (TUniformBufferRef<FAtmosphereUniformShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this->AtmosphereUniformBuffer);
  }
  return;
}

// operator() @ 1456689b0

void __thiscall
`FSkyAtmosphereRenderSceneInfo::FSkyAtmosphereRenderSceneInfo'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHIUniformBufferLayout *pFVar1;
  FRHIResource *this_00;
  undefined8 *puVar2;
  FRHIResource *this_01;
  code *pcVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  TRefCountPtr<FRHIUniformBuffer> TVar6;
  FRHIResource *local_res8;
  undefined8 local_28 [2];
  
  pFVar1 = *(FRHIUniformBufferLayout **)((longlong)this + 8);
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
                    (&local_res8,pFVar1,(EUniformBufferUsage)(pFVar5->Layout).Reference,2);
  this_00 = (FRHIResource *)(TVar6.Reference)->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this_00);
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
    if ((FName)(pFVar5->Layout).Reference != this_00[2].OwnerName) {
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
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  puVar2 = *(undefined8 **)this;
  if (puVar2 == local_28) {
    if (this_00 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_00);
      return;
    }
  }
  else {
    this_01 = (FRHIResource *)*puVar2;
    *puVar2 = this_00;
    if (this_01 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_01);
      return;
    }
  }
  return;
}

// CreateDistantSkyLightLutBufferAndSRV @ 1456796f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSkyAtmosphereRenderSceneInfo::CreateDistantSkyLightLutBufferAndSRV
          (FSkyAtmosphereRenderSceneInfo *this,FRDGBuilder *param_1)

{
  TRefCountPtr<FRDGPooledBuffer> *pTVar1;
  longlong lVar2;
  TRefCountPtr<FRDGPooledBuffer> TVar3;
  FRHIShaderResourceView *pFVar4;
  longlong *plVar5;
  FRDGPooledBuffer *pFVar6;
  FRDGPooledBuffer *pFVar7;
  FRDGPooledBuffer *local_res8;
  FRHIBufferSRVCreateInfo local_48;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_48.NumElements = 0x10109;
  local_48.Format = PF_G16R16F_FILTER;
  local_48._1_3_ = 0;
  pFVar7 = (FRDGPooledBuffer *)0x0;
  local_48.StartOffsetBytes = 1;
  local_30 = 0x100000010;
  uStack_28 = CONCAT44(local_48._12_4_,0x10109);
  local_48.RayTracingScene = (FRHIRayTracingScene *)0x0;
  local_20 = 0;
  TVar3 = AllocatePooledBuffer((FRDGBufferDesc *)&local_res8,(wchar_t *)&local_30,0xf0);
  pTVar1 = &this->DistantSkyLightLutBuffer;
  if ((FRDGPooledBuffer *)pTVar1 != TVar3.Reference) {
    pFVar6 = pTVar1->Reference;
    pTVar1->Reference = (FRDGPooledBuffer *)(TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (pFVar6 != (FRDGPooledBuffer *)0x0) {
      plVar5 = &pFVar6->_padding_;
      LOCK();
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        if (plVar5 == (longlong *)0x0) {
          pFVar6 = pFVar7;
        }
        if (pFVar6 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar6->_padding_)(pFVar6,1);
        }
      }
    }
  }
  if (local_res8 != (FRDGPooledBuffer *)0x0) {
    plVar5 = &local_res8->_padding_;
    LOCK();
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      pFVar6 = local_res8;
      if (plVar5 == (longlong *)0x0) {
        pFVar6 = pFVar7;
      }
      if (pFVar6 != (FRDGPooledBuffer *)0x0) {
        (**(code **)pFVar6->_padding_)(pFVar6,1);
      }
    }
  }
  local_48.Format = PF_A32B32G32R32F;
  local_48.StartOffsetBytes = 0;
  local_48.NumElements = 0xffffffff;
  local_48.RayTracingScene = (FRHIRayTracingScene *)0x0;
  pFVar4 = FRHIBufferViewCache::GetOrCreateSRV
                     (&pTVar1->Reference->ViewCache,(FRHICommandListBase *)param_1->_padding_,
                      (pTVar1->Reference->Buffer).Reference,&local_48);
  local_48.NumElements = 0x4109;
  local_48.Format = PF_G16R16F_FILTER;
  local_48._1_3_ = 0;
  local_48.StartOffsetBytes = 1;
  local_30 = 0x100000010;
  uStack_28 = CONCAT44(local_48._12_4_,0x4109);
  local_48.RayTracingScene = (FRHIRayTracingScene *)0x0;
  this->DistantSkyLightLutBufferSRV = pFVar4;
  local_20 = 0;
  TVar3 = AllocatePooledBuffer((FRDGBufferDesc *)&local_res8,(wchar_t *)&local_30,0x40);
  pTVar1 = &this->MobileDistantSkyLightLutBuffer;
  if ((FRDGPooledBuffer *)pTVar1 != TVar3.Reference) {
    pFVar6 = pTVar1->Reference;
    pTVar1->Reference = (FRDGPooledBuffer *)(TVar3.Reference)->_padding_;
    (TVar3.Reference)->_padding_ = 0;
    if (pFVar6 != (FRDGPooledBuffer *)0x0) {
      plVar5 = &pFVar6->_padding_;
      LOCK();
      lVar2 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        if (plVar5 == (longlong *)0x0) {
          pFVar6 = pFVar7;
        }
        if (pFVar6 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar6->_padding_)(pFVar6,1);
        }
      }
    }
  }
  if (local_res8 != (FRDGPooledBuffer *)0x0) {
    plVar5 = &local_res8->_padding_;
    LOCK();
    lVar2 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      if (plVar5 == (longlong *)0x0) {
        local_res8 = (FRDGPooledBuffer *)0x0;
      }
      if (local_res8 != (FRDGPooledBuffer *)0x0) {
        (**(code **)local_res8->_padding_)(local_res8,1);
      }
    }
  }
  local_48.Format = PF_A32B32G32R32F;
  local_48.StartOffsetBytes = 0;
  local_48.NumElements = 0xffffffff;
  local_48.RayTracingScene = (FRHIRayTracingScene *)0x0;
  pFVar4 = FRHIBufferViewCache::GetOrCreateSRV
                     (&pTVar1->Reference->ViewCache,(FRHICommandListBase *)param_1->_padding_,
                      (pTVar1->Reference->Buffer).Reference,&local_48);
  this->MobileDistantSkyLightLutBufferSRV = pFVar4;
  return;
}

// GetDistantSkyLightLutBuffer @ 145683080

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRefCountPtr<FRDGPooledBuffer> * __thiscall
FSkyAtmosphereRenderSceneInfo::GetDistantSkyLightLutBuffer(FSkyAtmosphereRenderSceneInfo *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  TRefCountPtr<FRDGPooledBuffer> *pTVar4;
  
  pTVar2 = CVarSkyAtmosphereDistantSkyLightLUT.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRefCountPtr<FRDGPooledBuffer> *)(*pcVar1)();
      return pTVar4;
    }
  }
  if (pTVar2->ShadowedValue[1] < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CVarSkyAtmosphereDistantSkyLightLUT.GetValueOnRenderThread() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SkyAtmosphereRendering.cpp"
                       ,0x228,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRefCountPtr<FRDGPooledBuffer> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return &this->DistantSkyLightLutBuffer;
}

// GetDistantSkyLightLutBufferSRV @ 145683110

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHIShaderResourceView * __thiscall
FSkyAtmosphereRenderSceneInfo::GetDistantSkyLightLutBufferSRV(FSkyAtmosphereRenderSceneInfo *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  FRHIShaderResourceView *pFVar4;
  
  pTVar2 = CVarSkyAtmosphereDistantSkyLightLUT.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRHIShaderResourceView *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (0 < pTVar2->ShadowedValue[1]) {
    return this->DistantSkyLightLutBufferSRV;
  }
  return (GBlackFloat4StructuredBufferWithSRV->ShaderResourceViewRHI).Reference;
}

// GetMobileDistantSkyLightLutBuffer @ 1456835b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRefCountPtr<FRDGPooledBuffer> * __thiscall
FSkyAtmosphereRenderSceneInfo::GetMobileDistantSkyLightLutBuffer
          (FSkyAtmosphereRenderSceneInfo *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  TRefCountPtr<FRDGPooledBuffer> *pTVar4;
  
  pTVar2 = CVarSkyAtmosphereDistantSkyLightLUT.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRefCountPtr<FRDGPooledBuffer> *)(*pcVar1)();
      return pTVar4;
    }
  }
  if (pTVar2->ShadowedValue[1] < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CVarSkyAtmosphereDistantSkyLightLUT.GetValueOnRenderThread() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SkyAtmosphereRendering.cpp"
                       ,0x22e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRefCountPtr<FRDGPooledBuffer> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return &this->MobileDistantSkyLightLutBuffer;
}

// GetMobileDistantSkyLightLutBufferSRV @ 145683640

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FRHIShaderResourceView * __thiscall
FSkyAtmosphereRenderSceneInfo::GetMobileDistantSkyLightLutBufferSRV
          (FSkyAtmosphereRenderSceneInfo *this)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  FRHIShaderResourceView *pFVar4;
  
  pTVar2 = CVarSkyAtmosphereDistantSkyLightLUT.Ref;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<6409875433831007955>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                       ,0x6d3,"IsInParallelRenderingThread()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRHIShaderResourceView *)(*pcVar1)();
      return pFVar4;
    }
  }
  if (0 < pTVar2->ShadowedValue[1]) {
    return this->MobileDistantSkyLightLutBufferSRV;
  }
  return (GBlackFloat4VertexBufferWithSRV->ShaderResourceViewRHI).Reference;
}

