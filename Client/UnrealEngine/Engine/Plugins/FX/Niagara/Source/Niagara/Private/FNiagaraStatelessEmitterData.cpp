// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// ~FNiagaraStatelessEmitterData @ 149476f40

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterData::~FNiagaraStatelessEmitterData(FNiagaraStatelessEmitterData *this)

{
  FRHIBuffer *pFVar1;
  FRHIShaderResourceView *pFVar2;
  FParticleSimulationExecData *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  
  bVar6 = IsInRenderingThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessEmitterData.cpp"
                       ,0xc,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  (this->StaticDataBufferGpu).NumBytes = 0;
  pFVar1 = (this->StaticDataBufferGpu).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->StaticDataBufferGpu).Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->StaticDataBufferGpu).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->StaticDataBufferGpu).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar3 = this->ParticleSimExecData;
  if (pFVar3 != (FParticleSimulationExecData *)0x0) {
    DestructItems<NiagaraStateless::FParticleSimulationExecData::FCallback,int>
              ((FCallback *)(pFVar3->SimulateFunctions).AllocatorInstance.Data,
               (pFVar3->SimulateFunctions).ArrayNum);
    pFVar4 = (pFVar3->SimulateFunctions).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar3->RequiredComponentOffsets).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    pFVar4 = (pFVar3->VariableComponentOffsets).AllocatorInstance.Data;
    if (pFVar4 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar4);
    }
    ::operator_delete(pFVar3,0x38);
    this->ParticleSimExecData = (FParticleSimulationExecData *)0x0;
  }
  pFVar2 = (this->StaticDataBufferGpu).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  pFVar1 = (this->StaticDataBufferGpu).Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar4 = (this->StaticDataBufferCpu).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->BuiltData).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TTuple<int,FInstancedStruct>,int>
            ((TTuple<int,FInstancedStruct> *)(this->Expressions).AllocatorInstance.Data,
             (this->Expressions).ArrayNum);
  pFVar4 = (this->Expressions).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FNiagaraParameterStore::~FNiagaraParameterStore(&this->RendererBindings);
  pFVar4 = (this->BoundParameterCollections).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->RendererProperties).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<FNiagaraStatelessSpawnInfo,int>
            ((FNiagaraStatelessSpawnInfo *)(this->SpawnInfos).AllocatorInstance.Data,
             (this->SpawnInfos).ArrayNum);
  pFVar4 = (this->SpawnInfos).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  FInstancedStruct::Reset((FInstancedStruct *)&(this->EmitterState).LoopDelay._padding_);
  FInstancedStruct::Reset((FInstancedStruct *)&(this->EmitterState).LoopDuration._padding_);
  pFVar4 = (this->ShaderOutputVariableOffsets).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ParticleDataSetCompiledData).SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 1494774c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FNiagaraStatelessEmitterData::InitRenderResources'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  void *_Dst;
  
  FByteAddressBuffer::Initialize
            ((FByteAddressBuffer *)(*(longlong *)this + 0x210),(FRHICommandListBase *)param_1,
             L"NiagaraStatelessEmitterData_StaticDataBuffer",*(uint *)(*(longlong *)this + 0x208),
             Static);
  _Dst = FRHICommandListBase::LockBuffer
                   ((FRHICommandListBase *)param_1,*(FRHIBuffer **)(*(longlong *)this + 0x210),0,
                    *(uint *)(*(longlong *)this + 0x220),RLM_WriteOnly);
  memcpy(_Dst,*(void **)(*(longlong *)this + 0x200),(ulonglong)*(uint *)(*(longlong *)this + 0x220))
  ;
  FRHICommandListBase::UnlockBuffer
            ((FRHICommandListBase *)param_1,*(FRHIBuffer **)(*(longlong *)this + 0x210));
  return;
}

// CalculateActiveParticles @ 149478810

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

uint __thiscall
FNiagaraStatelessEmitterData::CalculateActiveParticles
          (FNiagaraStatelessEmitterData *this,int param_1,
          TArrayView<FNiagaraStatelessRuntimeSpawnInfo_const_,int> *param_2,TOptional<float> param_3
          ,FSpawnInfoShaderParameters *param_4)

{
  FNiagaraStatelessRuntimeSpawnInfo *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FNiagaraStatelessRuntimeSpawnInfo *pFVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  
  fVar4 = __real_3f000000;
  fVar3 = __real_3f800000;
  pFVar10 = param_2->DataPtr;
  pFVar1 = pFVar10 + param_2->ArrayNum;
  uVar6 = 0;
  uVar12 = 0;
  for (; pFVar10 != pFVar1; pFVar10 = pFVar10 + 1) {
    if ((*(char *)((longlong)param_3 + 4) == '\0') ||
       ((pFVar10->SpawnTimeStart < *(float *)param_3 || pFVar10->SpawnTimeStart == *(float *)param_3
        && (fVar13 = pFVar10->SpawnTimeEnd + pFVar10->LifetimeMax,
           *(float *)param_3 <= fVar13 && fVar13 != *(float *)param_3)))) {
      uVar9 = 0;
      uVar11 = pFVar10->Amount;
      fVar14 = 0.0;
      fVar13 = pFVar10->SpawnTimeStart;
      if (pFVar10->Type != Burst) {
        if (pFVar10->Type == Rate) {
          if (*(char *)((longlong)param_3 + 4) != '\0') {
            fVar14 = (*(float *)param_3 - fVar13) - pFVar10->LifetimeMax;
            if (fVar14 <= 0.0) {
              fVar14 = 0.0;
            }
            uVar7 = (int)ROUND((fVar14 + fVar14) * pFVar10->Rate - fVar4) >> 1;
            fVar14 = *(float *)param_3 - fVar13;
            uVar9 = uVar11;
            if (uVar7 < uVar11) {
              uVar9 = uVar7;
            }
            if (fVar14 <= 0.0) {
              fVar14 = 0.0;
            }
            uVar7 = (int)ROUND((fVar14 + fVar14) * pFVar10->Rate - fVar4) >> 1;
            if (uVar7 < uVar11) {
              uVar11 = uVar7;
            }
            uVar11 = uVar11 - uVar9;
          }
          fVar14 = fVar3 / pFVar10->Rate;
          fVar13 = fVar13 + fVar14;
        }
        else {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessEmitterData.cpp"
                             ,0x66,L"");
          if (bVar5) {
            pcVar2 = (code *)swi(3);
            uVar6 = (*pcVar2)();
            return uVar6;
          }
        }
      }
      if (uVar11 != 0) {
        if (7 < uVar6) break;
        if (param_4 != (FSpawnInfoShaderParameters *)0x0) {
          uVar8 = uVar6 & 3;
          uVar7 = uVar6 >> 2;
          *(uint *)(&(param_4->SpawnInfo_NumActive).Elements[0].field_0x0 + (ulonglong)uVar6 * 4) =
               uVar11;
          *(uint *)(&(param_4->SpawnInfo_ParticleOffset).Elements[uVar7].field_0x0 +
                   (ulonglong)(uVar6 & 3) * 4) = uVar9;
          *(uint *)(&(param_4->SpawnInfo_UniqueOffset).Elements[uVar7].field_0x0 +
                   (ulonglong)(uVar6 & 3) * 4) = pFVar10->UniqueOffset;
          (param_4->SpawnInfo_Time).Elements[uVar7].field0_0x0.XYZW[uVar8] = fVar13;
          (param_4->SpawnInfo_Rate).Elements[uVar7].field0_0x0.XYZW[uVar8] = fVar14;
          (param_4->SpawnInfo_Probability).Elements[uVar7].field0_0x0.XYZW[uVar8] =
               pFVar10->Probability;
          (param_4->SpawnInfo_LifetimeScale).Elements[uVar7].field0_0x0.XYZW[uVar8] =
               pFVar10->LifetimeMax - pFVar10->LifetimeMin;
          uVar6 = uVar6 + 1;
          (param_4->SpawnInfo_LifetimeBias).Elements[uVar7].field0_0x0.XYZW[uVar8] =
               pFVar10->LifetimeMin;
        }
        uVar12 = uVar12 + uVar11;
      }
    }
  }
  if (param_4 != (FSpawnInfoShaderParameters *)0x0) {
    for (; uVar6 < 8; uVar6 = uVar6 + 1) {
      uVar9 = uVar6 & 3;
      uVar11 = uVar6 >> 2;
      *(undefined4 *)(&(param_4->SpawnInfo_NumActive).Elements[0].field_0x0 + (ulonglong)uVar6 * 4)
           = 0;
      *(undefined4 *)
       (&(param_4->SpawnInfo_ParticleOffset).Elements[uVar11].field_0x0 + (ulonglong)(uVar6 & 3) * 4
       ) = 0;
      *(undefined4 *)
       (&(param_4->SpawnInfo_UniqueOffset).Elements[uVar11].field_0x0 + (ulonglong)(uVar6 & 3) * 4)
           = 0;
      (param_4->SpawnInfo_Time).Elements[uVar11].field0_0x0.XYZW[uVar9] = 0.0;
      (param_4->SpawnInfo_Rate).Elements[uVar11].field0_0x0.XYZW[uVar9] = 0.0;
      (param_4->SpawnInfo_Probability).Elements[uVar11].field0_0x0.XYZW[uVar9] = 0.0;
      (param_4->SpawnInfo_LifetimeScale).Elements[uVar11].field0_0x0.XYZW[uVar9] = 0.0;
      (param_4->SpawnInfo_LifetimeBias).Elements[uVar11].field0_0x0.XYZW[uVar9] = 0.0;
    }
  }
  return uVar12;
}

// GetShader @ 14947b400

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable> * __thiscall
FNiagaraStatelessEmitterData::GetShader
          (FNiagaraStatelessEmitterData *this,
          TShaderRefBase<NiagaraStateless::FSimulationShader,FShaderMapPointerTable>
          *__return_storage_ptr__)

{
  UNiagaraStatelessEmitterTemplate *pUVar1;
  wchar_t *pwVar2;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
  {
    _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
    if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1) {
      pwVar2 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar2,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
  }
  if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
      (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
       false)) &&
     (pUVar1 = this->EmitterTemplate, pUVar1 != (UNiagaraStatelessEmitterTemplate *)0x0)) {
    (**(code **)(pUVar1->_padding_ + 0x2c0))(pUVar1,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->ShaderContent = (FSimulationShader *)0x0;
  __return_storage_ptr__->ShaderMap = (FShaderMapBase *)0x0;
  return __return_storage_ptr__;
}

// GetShaderParametersMetadata @ 14947b4e0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

FShaderParametersMetadata * __thiscall
FNiagaraStatelessEmitterData::GetShaderParametersMetadata(FNiagaraStatelessEmitterData *this)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  
  if (this->EmitterTemplate == (UNiagaraStatelessEmitterTemplate *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EmitterTemplate",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\Stateless\\NiagaraStatelessEmitterData.cpp"
                       ,0x2f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FShaderParametersMetadata *)(*pcVar1)();
      return pFVar3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00014947b528. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar3 = (FShaderParametersMetadata *)(**(code **)(this->EmitterTemplate->_padding_ + 0x2b8))();
  return pFVar3;
}

// InitRenderResources @ 14947c670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
FNiagaraStatelessEmitterData::InitRenderResources(FNiagaraStatelessEmitterData *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FNiagaraStatelessEmitterData *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FNiagaraStatelessEmitterData *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_60 = (undefined ***)0x0;
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FNiagaraStatelessEmitterData::InitRenderResources'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FNiagaraStatelessEmitterData::InitRenderResources'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  pFStack_70 = this;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FNiagaraStatelessEmitterData::InitRenderResources_::__l2::TSTR_InitNiagaraStatelessEmitterData24>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_58._0_8_ = local_88[0];
    local_30 = local_60;
    local_48 = local_78;
    pFStack_40 = pFStack_70;
    local_38 = local_68;
    local_88[0] = (code *)0x0;
    local_28 = 2;
    pFVar3 = (FRenderCommandTag *)
             TRenderCommandTag<`FNiagaraStatelessEmitterData::InitRenderResources'::__l2::TSTR_InitNiagaraStatelessEmitterData24>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_58,pFVar3);
    uVar5 = (ulonglong)local_28;
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
                  ::__l2::Destructors)[uVar5] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_58._0_8_ != (code *)0x0) {
        pppuVar4 = (undefined ***)(local_58 + 0x10);
        if (local_30 != (undefined ***)0x0) {
          pppuVar4 = local_30;
        }
        (*(code *)(*pppuVar4)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar5])(local_58);
    }
  }
  if (local_88[0] != (code *)0x0) {
    pppuVar4 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar4 = local_60;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  return;
}

