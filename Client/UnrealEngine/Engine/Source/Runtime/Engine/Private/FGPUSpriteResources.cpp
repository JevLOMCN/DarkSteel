// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// FGPUSpriteResources @ 1480f3550

FGPUSpriteResources * __thiscall FGPUSpriteResources::FGPUSpriteResources(FGPUSpriteResources *this)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  *(undefined ***)this = &___7FGPUSpriteResources__6B_;
  this->UniformBuffer = (TUniformBufferRef<FGPUSpriteEmitterUniformParameters>)0x0;
  (this->EmitterSimulationResources).SimulationUniformBuffer =
       (TUniformBufferRef<FParticleSimulationParameters>)0x0;
  (this->ColorTexelAllocation).X = 0;
  (this->ColorTexelAllocation).Y = 0;
  (this->ColorTexelAllocation).Size = 0;
  (this->MiscTexelAllocation).X = 0;
  *(undefined8 *)&(this->MiscTexelAllocation).Y = 0;
  (this->SimulationAttrTexelAllocation).Size = 0;
  *(undefined8 *)&(this->UniformParameters).ColorCurve.field0_0x0 = 0;
  (this->UniformParameters).ColorCurve.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->UniformParameters).ColorScale.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->UniformParameters).ColorBias.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->UniformParameters).MiscCurve.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->UniformParameters).MiscScale.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->UniformParameters).MiscBias.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->UniformParameters).SizeBySpeed.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->UniformParameters).SubImageSize.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->UniformParameters).TangentSelector.field0_0x0 + 4) = 0;
  *(undefined8 *)&(this->SimulationParameters).AttributeCurve.field0_0x0 = 0;
  (this->SimulationParameters).AttributeCurve.field0_0x0._s_0.Z = 0.0;
  *(undefined8 *)((longlong)&(this->SimulationParameters).AttributeCurveScale.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->SimulationParameters).AttributeCurveBias.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->SimulationParameters).AttributeScale.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->SimulationParameters).AttributeBias.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->SimulationParameters).MiscCurve.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->SimulationParameters).MiscScale.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->SimulationParameters).MiscBias.field0_0x0 + 4) = 0;
  *(undefined8 *)((longlong)&(this->UniformParameters).ColorCurve.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->UniformParameters).ColorScale.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->UniformParameters).ColorBias.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->UniformParameters).MiscCurve.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->UniformParameters).MiscScale.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->UniformParameters).MiscBias.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->UniformParameters).SizeBySpeed.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->UniformParameters).SubImageSize.field0_0x0 + 0xc) = 0x3f800000;
  (this->UniformParameters).TangentSelector.field0_0x0._s_0.W = 1.0;
  *(undefined8 *)((longlong)&(this->SimulationParameters).AttributeCurve.field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->SimulationParameters).AttributeCurveScale.field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->SimulationParameters).AttributeCurveBias.field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->SimulationParameters).AttributeScale.field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->SimulationParameters).AttributeBias.field0_0x0 + 0xc) =
       0x3f800000;
  *(undefined8 *)((longlong)&(this->SimulationParameters).MiscCurve.field0_0x0 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)&(this->SimulationParameters).MiscScale.field0_0x0 + 0xc) = 0x3f800000;
  (this->SimulationParameters).MiscBias.field0_0x0._s_0.W = 1.0;
  (this->NumRefs).Counter = 0;
  return this;
}

// InitRHI @ 148120690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FGPUSpriteResources::InitRHI(FGPUSpriteResources *this,FRHICommandListBase *param_1)

{
  TUniformBufferRef<FGPUSpriteEmitterUniformParameters> *pTVar1;
  FParticleEmitterSimulationResources *pFVar2;
  TUniformBufferRef<FGPUSpriteEmitterUniformParameters> this_00;
  TUniformBufferRef<FGPUSpriteEmitterUniformParameters> TVar3;
  TUniformBufferRef<FParticleSimulationParameters> this_01;
  TUniformBufferRef<FParticleSimulationParameters> this_02;
  code *pcVar4;
  bool bVar5;
  FShaderParametersMetadata *pFVar6;
  TRefCountPtr<FRHIUniformBuffer> TVar7;
  FRHIResource *local_res8;
  FRHIResource *local_res18;
  longlong local_28;
  undefined8 local_20;
  
  pFVar6 = FGPUSpriteEmitterUniformParameters::GetStructMetadata();
  if (((pFVar6->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TVar7 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)&this->UniformParameters,
                     (EUniformBufferUsage)(pFVar6->Layout).Reference,2);
  this_00 = (TUniformBufferRef<FGPUSpriteEmitterUniformParameters>)(TVar7.Reference)->_padding_;
  if (this_00 != (TUniformBufferRef<FGPUSpriteEmitterUniformParameters>)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
    pFVar6 = FGPUSpriteEmitterUniformParameters::GetStructMetadata();
    if (((pFVar6->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((FName)(pFVar6->Layout).Reference != *(FName *)((longlong)this_00 + 0x40)) {
      pFVar6 = FGPUSpriteEmitterUniformParameters::GetStructMetadata();
      if (((pFVar6->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x96,
                         L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  pTVar1 = &this->UniformBuffer;
  if (pTVar1 != (TUniformBufferRef<FGPUSpriteEmitterUniformParameters> *)&local_28) {
    TVar3 = *pTVar1;
    *pTVar1 = this_00;
    this_00 = TVar3;
  }
  if (this_00 != (TUniformBufferRef<FGPUSpriteEmitterUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  pFVar6 = FParticleSimulationParameters::GetStructMetadata();
  if (((pFVar6->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TVar7 = RHICreateUniformBuffer
                    (&local_res18,(FRHIUniformBufferLayout *)&this->SimulationParameters,
                     (EUniformBufferUsage)(pFVar6->Layout).Reference,2);
  this_01 = (TUniformBufferRef<FParticleSimulationParameters>)(TVar7.Reference)->_padding_;
  if (this_01 != (TUniformBufferRef<FParticleSimulationParameters>)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_01);
    pFVar6 = FParticleSimulationParameters::GetStructMetadata();
    if (((pFVar6->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((FName)(pFVar6->Layout).Reference != ((FRHIResource *)((longlong)this_01 + 0x30))->OwnerName
       ) {
      pFVar6 = FParticleSimulationParameters::GetStructMetadata();
      if (((pFVar6->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x96,
                         L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  if (local_res18 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res18);
  }
  pFVar2 = &this->EmitterSimulationResources;
  if (pFVar2 == (FParticleEmitterSimulationResources *)&local_20) {
    if (this_01 != (TUniformBufferRef<FParticleSimulationParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
      return;
    }
  }
  else {
    this_02 = pFVar2->SimulationUniformBuffer;
    pFVar2->SimulationUniformBuffer = this_01;
    if (this_02 != (TUniformBufferRef<FParticleSimulationParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_02);
      return;
    }
  }
  return;
}

// Release @ 148128bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FGPUSpriteResources::Release(FGPUSpriteResources *this)

{
  FThreadSafeCounter *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FGPUSpriteResources *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FGPUSpriteResources *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  LOCK();
  pFVar1 = &this->NumRefs;
  iVar2 = pFVar1->Counter;
  pFVar1->Counter = pFVar1->Counter + -1;
  UNLOCK();
  uVar8 = iVar2 - 1;
  if ((int)uVar8 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Refs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleGpuSimulation.cpp"
                       ,0xac1,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar8 = (*pcVar3)();
      return uVar8;
    }
  }
  else if (uVar8 == 0) {
    local_60 = (undefined ***)0x0;
    local_78 = &
               ___7__TFunction_OwnedObject_V<lambda_1>__M___Release_FGPUSpriteResources__QEAAIXZ__00_0A__Function_Private_Core_UE__6B_
    ;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FGPUSpriteResources::Release'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FGPUSpriteResources::Release_::__l12::TSTR_ReleaseCommand2760>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
      pFVar5 = (FRenderCommandTag *)
               TRenderCommandTag<`FGPUSpriteResources::Release'::__l12::TSTR_ReleaseCommand2760>::
               Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar5);
      uVar7 = (ulonglong)local_28;
      if (2 < uVar7) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return uVar8;
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
  }
  return uVar8;
}

// ReleaseRHI @ 148128f30

void __thiscall FGPUSpriteResources::ReleaseRHI(FGPUSpriteResources *this)

{
  TUniformBufferRef<FGPUSpriteEmitterUniformParameters> this_00;
  TUniformBufferRef<FParticleSimulationParameters> this_01;
  
  this_00 = this->UniformBuffer;
  if (this_00 != (TUniformBufferRef<FGPUSpriteEmitterUniformParameters>)0x0) {
    this->UniformBuffer = (TUniformBufferRef<FGPUSpriteEmitterUniformParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->EmitterSimulationResources).SimulationUniformBuffer;
  if (this_01 != (TUniformBufferRef<FParticleSimulationParameters>)0x0) {
    (this->EmitterSimulationResources).SimulationUniformBuffer =
         (TUniformBufferRef<FParticleSimulationParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_01);
    return;
  }
  return;
}

