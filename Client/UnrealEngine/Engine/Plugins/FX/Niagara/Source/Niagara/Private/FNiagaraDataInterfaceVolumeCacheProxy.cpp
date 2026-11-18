// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ConsumePerInstanceDataFromGameThread @ 1492225f0

void __thiscall
FNiagaraDataInterfaceVolumeCacheProxy::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceVolumeCacheProxy *this,void *param_1,ulong64 *param_2)

{
  FVolumeCacheInstanceData_RenderThread *pFVar1;
  
  pFVar1 = TMapBase<unsigned___int64,FVolumeCacheInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FVolumeCacheInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_RenderThread,0>_>
                   *)&this->InstanceData_RT,*param_2);
  if ((param_1 != (void *)0x0) && (pFVar1 != (FVolumeCacheInstanceData_RenderThread *)0x0)) {
    pFVar1->CurrFrame = *(int *)param_1;
    pFVar1->ReadFile = *(bool *)((longlong)param_1 + 0x14);
    (pFVar1->TextureSize).field0_0x0._s_0.X = (float)*(int *)((longlong)param_1 + 8);
    (pFVar1->TextureSize).field0_0x0._s_0.Y = (float)*(int *)((longlong)param_1 + 0xc);
    (pFVar1->TextureSize).field0_0x0._s_0.Z = (float)*(int *)((longlong)param_1 + 0x10);
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 149244720

int __thiscall
FNiagaraDataInterfaceVolumeCacheProxy::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceVolumeCacheProxy *this)

{
  return 0x18;
}

// PreStage @ 1492470a0

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
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceVolumeCacheProxy::PreStage
          (FNiagaraDataInterfaceVolumeCacheProxy *this,FNDIGpuComputePreStageContext *param_1)

{
  TRefCountPtr<FRHITexture> *pTVar1;
  FRHITexture *this_00;
  FRHIResource *this_01;
  FVolumeCacheData *pFVar2;
  code *pcVar3;
  TRefCountPtr<FRHISamplerState> this_02;
  bool bVar4;
  ulong64 uVar5;
  FVolumeCacheInstanceData_RenderThread *pFVar6;
  TRefCountPtr<FRHITexture> TVar7;
  undefined1 auStack_1e8 [32];
  int local_1c8;
  int iStack_1c4;
  undefined1 local_1c0 [32];
  longlong local_1a0;
  longlong local_198;
  undefined4 local_190;
  int local_18c;
  undefined4 local_188;
  undefined8 local_184;
  undefined2 local_17c;
  undefined4 local_17a;
  undefined4 local_176;
  void *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  FName local_158;
  FName local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  FRHITextureDesc local_128;
  FName local_d8;
  uint local_d0;
  uint local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  FRHITextureDesc local_a8;
  FName local_58;
  uint local_50;
  uint local_4c;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1e8;
  uVar5 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  pFVar6 = TMapBase<unsigned___int64,FVolumeCacheInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FVolumeCacheInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVolumeCacheInstanceData_RenderThread,0>_>
                   *)&this->InstanceData_RT,uVar5);
  bVar4 = FNDIGpuComputePrePostStageContext::IsInputStage
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  if ((((bVar4) && (pFVar6 != (FVolumeCacheInstanceData_RenderThread *)0x0)) &&
      (pFVar6->ReadFile != false)) && ((pFVar6->VolumeCacheData).Object != (FVolumeCacheData *)0x0))
  {
    pTVar1 = &pFVar6->ResolvedTextureRHI;
    if ((pFVar6->ResolvedTextureRHI).Reference == (FRHITexture *)0x0) {
      local_1c0._24_8_ = 0;
      local_1a0 = 1;
      local_18c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
      local_198 = 0;
      local_158 = (FName)0x151db3c80;
      local_190 = 0;
      local_1c8 = (int)(pFVar6->TextureSize).field0_0x0._s_0.X;
      local_17c = (undefined2)(int)(pFVar6->TextureSize).field0_0x0._s_0.Z;
      local_188 = 0;
      local_17a = 0x1010001;
      local_176 = 0xff000a02;
      local_168 = (void *)0x0;
      local_160 = 0;
      local_15c = 1;
      local_150.ComparisonIndex.Value = 0;
      local_150.Number = 0;
      iStack_1c4 = (int)(pFVar6->TextureSize).field0_0x0._s_0.Y;
      local_148 = 0;
      local_140 = 0;
      local_138 = 0;
      local_184._4_4_ = iStack_1c4;
      local_184._0_4_ = local_1c8;
      FRHITextureDesc::FRHITextureDesc(&local_128,(FRHITextureDesc *)(local_1c0 + 0x18));
      local_d8 = local_158;
      local_d0 = local_150.ComparisonIndex.Value;
      local_cc = local_150.Number;
      local_c8 = local_148;
      local_c0 = local_140;
      local_b8 = local_138;
      if (local_168 != (void *)0x0) {
        FMemory::Free(local_168);
      }
      local_128.Flags = NoTiling|ShaderResource;
      FRHITextureDesc::FRHITextureDesc(&local_a8,&local_128);
      local_58 = local_d8;
      local_50 = local_d0;
      local_4c = local_cc;
      local_48 = local_c8;
      local_40 = local_c0;
      local_38 = local_b8;
      if (local_128.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_128.AliasableFormats.AllocatorInstance.SecondaryData);
      }
      TVar7 = FRHICommandListBase::CreateTexture
                        (*(FRHICommandListBase **)(*(longlong *)param_1 + 0xc0),
                         (FRHITextureCreateDesc *)local_1c0);
      if ((FRHITexture *)pTVar1 != TVar7.Reference) {
        this_00 = pTVar1->Reference;
        pTVar1->Reference = (FRHITexture *)(TVar7.Reference)->_padding_;
        (TVar7.Reference)->_padding_ = 0;
        if (this_00 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00);
        }
      }
      if ((FRHIResource *)local_1c0._0_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_1c0._0_8_);
      }
      this_02.Reference =
           TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      this_01 = (FRHIResource *)(pFVar6->SamplerStateRHI).Reference;
      if (this_01 !=
          (FRHIResource *)
          TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
          ::StaticResource.StateRHI.Reference) {
        (pFVar6->SamplerStateRHI).Reference =
             TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI.Reference;
        if (this_02.Reference != (FRHISamplerState *)0x0) {
          FRHIResource::AddRef((FRHIResource *)this_02.Reference);
        }
        if (this_01 != (FRHIResource *)0x0) {
          FRHIResource::Release(this_01);
        }
      }
      if (local_a8.AliasableFormats.AllocatorInstance.SecondaryData !=
          (ForElementType<EPixelFormat>)0x0) {
        FMemory::Free((void *)local_a8.AliasableFormats.AllocatorInstance.SecondaryData);
      }
    }
    if ((pFVar6->VolumeCacheData).Object == (FVolumeCacheData *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    local_1c0._8_8_ = pTVar1->Reference;
    pFVar2 = (pFVar6->VolumeCacheData).Object;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x38);
    if ((FRHITexture *)local_1c0._8_8_ != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_1c0._8_8_);
    }
    (*pcVar3)(pFVar2,pFVar6->CurrFrame,local_1c0 + 8);
  }
  return;
}

