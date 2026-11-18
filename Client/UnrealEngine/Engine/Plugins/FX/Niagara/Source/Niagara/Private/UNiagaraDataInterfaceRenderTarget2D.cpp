// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 44

// StaticClass @ 149198bd0

UClass * __cdecl UNiagaraDataInterfaceRenderTarget2D::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRenderTarget2D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceRenderTarget2D,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceRenderTarget2D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTarget2D>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.InnerSingleton;
}

// UNiagaraDataInterfaceRenderTarget2D @ 1491ac310

UNiagaraDataInterfaceRenderTarget2D * __thiscall
UNiagaraDataInterfaceRenderTarget2D::UNiagaraDataInterfaceRenderTarget2D
          (UNiagaraDataInterfaceRenderTarget2D *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceRWBase::UNiagaraDataInterfaceRWBase
            ((UNiagaraDataInterfaceRWBase *)this,param_1);
  this->MipMapGeneration = Disabled;
  this->MipMapGenerationType = Linear;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  (this->OverrideRenderTargetFilter).Value = '\x03';
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->RenderTargetUserParameter);
  *(undefined8 *)&this->SystemInstancesToProxyData_GT = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x8 = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x20 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x28 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x34 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x40 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  return this;
}

// UNiagaraDataInterfaceRenderTarget2D @ 1491ac3a0

UNiagaraDataInterfaceRenderTarget2D * __thiscall
UNiagaraDataInterfaceRenderTarget2D::UNiagaraDataInterfaceRenderTarget2D
          (UNiagaraDataInterfaceRenderTarget2D *this,FObjectInitializer *param_1)

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
  this->MipMapGeneration = Disabled;
  this->MipMapGenerationType = Linear;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  (this->OverrideRenderTargetFilter).Value = '\x03';
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->RenderTargetUserParameter);
  puVar3 = (undefined8 *)0x0;
  *(undefined8 *)&this->SystemInstancesToProxyData_GT = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x8 = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x20 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x28 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x34 = 0;
  *(undefined8 *)&(this->SystemInstancesToProxyData_GT).field_0x40 = 0;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  puVar2 = ::operator_new(0x60);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    *puVar2 = &___7FNiagaraDataInterfaceProxyRenderTarget2DProxy__6B_;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
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

// ~UNiagaraDataInterfaceRenderTarget2D @ 1491ad660

void __thiscall
UNiagaraDataInterfaceRenderTarget2D::~UNiagaraDataInterfaceRenderTarget2D
          (UNiagaraDataInterfaceRenderTarget2D *this)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraDataInterfaceRWBase__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraSimCacheCustomStorageInterface__;
  *(undefined4 *)&(this->SystemInstancesToProxyData_GT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_GT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_GameThread_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_GT);
  pFVar2 = (this->RenderTargetUserParameter).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this->_padding_ = (longlong)&___7INiagaraSimCacheCustomStorageInterface__6B_;
  UNiagaraDataInterfaceRWBase::~UNiagaraDataInterfaceRWBase((UNiagaraDataInterfaceRWBase *)this);
  return;
}

// operator() @ 1491b09b0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHIResource *this_00;
  FRHITexture *this_01;
  longlong lVar1;
  FRenderTarget2DRWInstanceData_RenderThread *this_02;
  ulong64 local_res8;
  
  this_02 = TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
                    *)(*(longlong *)this + 0x10),*(ulong64 *)((longlong)this + 8));
  if (this_02 != (FRenderTarget2DRWInstanceData_RenderThread *)0x0) {
    this_00 = (FRHIResource *)(this_02->SamplerStateRHI).Reference;
    if (this_00 != (FRHIResource *)0x0) {
      (this_02->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
      FRHIResource::Release(this_00);
    }
    this_01 = (this_02->TextureRHI).Reference;
    if (this_01 != (FRHITexture *)0x0) {
      (this_02->TextureRHI).Reference = (FRHITexture *)0x0;
      FRHIResource::Release((FRHIResource *)this_01);
    }
    FRenderTarget2DRWInstanceData_RenderThread::UpdateMemoryStats(this_02);
  }
  lVar1 = *(longlong *)this;
  local_res8 = *(ulong64 *)((longlong)this + 8);
  if (*(int *)(lVar1 + 0x18) != *(int *)(lVar1 + 0x44)) {
    TSet<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>,FDefaultSetAllocator>
                *)(lVar1 + 0x10),(int)(local_res8 >> 0x20) * 0x17 + (int)local_res8,&local_res8);
  }
  return;
}

// operator() @ 1491b1ea0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame'::__l9::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHITexture *pFVar1;
  FRenderTarget2DRWInstanceData_RenderThread *pFVar2;
  FLLMScope local_res8 [5];
  FMemScope local_res18;
  FMemScope local_res20;
  FMemScope local_78;
  uchar *local_70 [2];
  int local_60;
  FRHITexture *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined2 local_3c;
  
  pFVar2 = TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)this + 0x10),*(ulong64 *)((longlong)this + 8));
  if (pFVar2 != (FRenderTarget2DRWInstanceData_RenderThread *)0x0) {
    pFVar1 = (pFVar2->TextureRHI).Reference;
    FLLMScope::FLLMScope((FLLMScope *)&local_res18,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_78,Textures,true);
    local_50 = 0;
    local_48 = 0;
    local_40 = 1;
    local_3c = 0x101;
    local_58 = pFVar1;
    FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_res20,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1e0))(GDynamicRHI,local_70,param_1,&local_58);
    FMemScope::~FMemScope(&local_res20);
    FLLMScope::~FLLMScope(local_res8);
    FMemScope::~FMemScope(&local_78);
    FLLMScope::~FLLMScope((FLLMScope *)&local_res18);
    UNDIRenderTargetSimCacheData::GetPixelData
              (*(UNDIRenderTargetSimCacheData **)((longlong)this + 0x18),
               *(int *)((longlong)this + 0x20),local_70[0],local_60,0);
    local_58 = (pFVar2->TextureRHI).Reference;
    local_50 = 0;
    local_40 = 3;
    local_48 = 0;
    local_3c = 0x101;
    FLLMScope::FLLMScope(local_res8,Textures,false,None,Default,true);
    FMemScope::FMemScope(&local_res18,Textures,true);
    (**(code **)(GDynamicRHI->_padding_ + 0x1e8))(GDynamicRHI,param_1,&local_58);
    FMemScope::~FMemScope(&local_res18);
    FLLMScope::~FLLMScope(local_res8);
  }
  return;
}

// operator() @ 1491b2af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame'::__l12::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  ForAnyElementType *pFVar4;
  FRenderTarget2DRWInstanceData_RenderThread *pFVar5;
  FName *pFVar6;
  void *_Src;
  longlong lVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [12];
  uint uStack_fc;
  int local_f8 [2];
  TIntVector3<int>_u_0 local_f0;
  FRHITransitionInfo local_e0;
  int local_b0 [2];
  FRHIGPUTextureReadback local_a8;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_138;
  pFVar5 = TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
           ::Find((TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
                   *)(*(longlong *)this + 0x10),*(ulong64 *)((longlong)this + 8));
  if (pFVar5 != (FRenderTarget2DRWInstanceData_RenderThread *)0x0) {
    local_e0.field1_0x8 = (FRHITransitionInfo_u_8)(pFVar5->TextureRHI).Reference;
    local_108._8_4_ = 1;
    local_108._0_8_ = &local_e0;
    local_e0._padding_._0_4_ = 0xffffffff;
    local_e0._padding_._4_2_ = 0xffff;
    local_e0.Type = Texture;
    local_e0.AccessBefore = SRVMask;
    local_e0.AccessAfter = CopySrc;
    local_e0.Flags = None;
    local_e0.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_1,
               (TArrayView<FRHITransitionInfo_const_,int> *)local_108,None);
    pFVar6 = ::FName::FName((FName *)&local_f0._s_0,"ReadRTTexture");
    FRHIGPUTextureReadback::FRHIGPUTextureReadback(&local_a8,*pFVar6);
    local_f0._s_0.X = *(int *)((longlong)this + 0x20);
    iVar8 = 0;
    local_f0._s_0.Y = *(int *)((longlong)this + 0x24);
    local_f0._s_0.Z = 1;
    local_108._0_8_ = (FRHITransitionInfo *)0x0;
    stack0xffffffffffffff00 = (ulonglong)uStack_fc << 0x20;
    FRHIGPUTextureReadback::EnqueueCopy
              (&local_a8,(FRHICommandList *)param_1,(pFVar5->TextureRHI).Reference,
               (TIntVector3<int> *)local_108,0,(TIntVector3<int> *)&local_f0._s_0);
    FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
    FRHICommandListImmediate::FlushResources(param_1);
    _Src = FRHIGPUTextureReadback::Lock(&local_a8,local_f8,local_b0);
    lVar7 = (**(code **)(((pFVar5->TextureRHI).Reference)->_padding_ + 0x20))();
    pFVar4 = *(ForAnyElementType **)((longlong)this + 0x18);
    iVar2 = GPixelFormats[*(byte *)(lVar7 + 0x33)].BlockBytes;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar2 * (pFVar5->Size).field0_0x0._s_0.Y * (pFVar5->Size).field0_0x0._s_0.X,
               pFVar4,(int *)(pFVar4 + 1),(int *)((longlong)&pFVar4[1].Data + 4));
    if (0 < (pFVar5->Size).field0_0x0._s_0.Y) {
      do {
        iVar3 = (pFVar5->Size).field0_0x0._s_0.X;
        memcpy((void *)((ulonglong)(uint)(iVar3 * iVar8 * iVar2) +
                       **(longlong **)((longlong)this + 0x18)),_Src,(ulonglong)(uint)(iVar3 * iVar2)
              );
        iVar8 = iVar8 + 1;
        _Src = (void *)((longlong)_Src + (ulonglong)(uint)(iVar2 * local_f8[0]));
      } while (iVar8 < (pFVar5->Size).field0_0x0._s_0.Y);
    }
    FRHIGPUTextureReadback::Unlock(&local_a8);
    local_e0.field1_0x8 = (FRHITransitionInfo_u_8)(pFVar5->TextureRHI).Reference;
    local_108._8_4_ = 1;
    local_108._0_8_ = &local_e0;
    local_e0._padding_._0_4_ = 0xffffffff;
    local_e0._padding_._4_2_ = 0xffff;
    local_e0.Type = Texture;
    local_e0.AccessBefore = CopySrc;
    local_e0.AccessAfter = SRVMask;
    local_e0.Flags = None;
    local_e0.CommitInfo.bIsSet = false;
    FRHIComputeCommandList::Transition
              ((FRHIComputeCommandList *)param_1,
               (TArrayView<FRHITransitionInfo_const_,int> *)local_108,None);
    puVar9 = local_50;
    lVar7 = 8;
    do {
      puVar1 = (undefined8 *)(puVar9 + -8);
      puVar9 = puVar9 + -8;
      lVar7 = lVar7 + -1;
      if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)*puVar1);
      }
    } while (lVar7 != 0);
    local_a8._padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)local_a8._padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)local_a8._padding_);
    }
  }
  return;
}

// operator() @ 1491b34e0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::__l35::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FRHIResource *pFVar1;
  FRHITexture *pFVar2;
  longlong *plVar3;
  FRHIResource *this_00;
  FRHITexture *this_01;
  FRenderTarget2DRWInstanceData_RenderThread *this_02;
  longlong lVar4;
  uint uVar5;
  
  this_02 = TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
            ::FindOrAddImpl<unsigned___int64_const_&>
                      ((TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
                        *)(*(longlong *)this + 0x10),
                       (int)((ulonglong)*(undefined8 *)((longlong)this + 8) >> 0x20) * 0x17 +
                       (int)*(undefined8 *)((longlong)this + 8),(ulong64 *)((longlong)this + 8));
  uVar5 = 0;
  (this_02->Size).field0_0x0 = *(TIntPoint<int>_u_0 *)((longlong)this + 0x14);
  this_02->MipLevels = 1;
  this_02->MipMapGeneration = *(ENiagaraMipMapGeneration *)((longlong)this + 0x24);
  this_02->MipMapGenerationType = *(ENiagaraMipMapGenerationType *)((longlong)this + 0x25);
  pFVar1 = (FRHIResource *)(this_02->SamplerStateRHI).Reference;
  if (pFVar1 != (FRHIResource *)0x0) {
    (this_02->SamplerStateRHI).Reference = (FRHISamplerState *)0x0;
    FRHIResource::Release(pFVar1);
  }
  pFVar2 = (this_02->TextureRHI).Reference;
  if (pFVar2 != (FRHITexture *)0x0) {
    (this_02->TextureRHI).Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  if (*(longlong *)((longlong)this + 0x68) != 0) {
    plVar3 = *(longlong **)(*(longlong *)((longlong)this + 0x68) + 0x20);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x20))();
      uVar5 = (uint)*(byte *)(lVar4 + 0x30);
    }
    this_02->MipLevels = uVar5;
    lVar4 = (**(code **)(**(longlong **)((longlong)this + 0x68) + 0xa0))();
    if (lVar4 != 0) {
      pFVar1 = *(FRHIResource **)(lVar4 + 0x28);
      this_00 = (FRHIResource *)(this_02->SamplerStateRHI).Reference;
      if (this_00 != pFVar1) {
        (this_02->SamplerStateRHI).Reference = (FRHISamplerState *)pFVar1;
        if (pFVar1 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(pFVar1);
        }
        if (this_00 != (FRHIResource *)0x0) {
          FRHIResource::Release(this_00);
        }
      }
      pFVar2 = *(FRHITexture **)(lVar4 + 0x20);
      this_01 = (this_02->TextureRHI).Reference;
      if (this_01 != pFVar2) {
        (this_02->TextureRHI).Reference = pFVar2;
        if (pFVar2 != (FRHITexture *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar2);
        }
        if (this_01 != (FRHITexture *)0x0) {
          FRHIResource::Release((FRHIResource *)this_01);
        }
      }
    }
  }
  FRenderTarget2DRWInstanceData_RenderThread::UpdateMemoryStats(this_02);
  return;
}

// BuildShaderParameters @ 1491b5ed0

void __thiscall
UNiagaraDataInterfaceRenderTarget2D::BuildShaderParameters
          (UNiagaraDataInterfaceRenderTarget2D *this,FNiagaraShaderParametersBuilder *param_1)

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
  pFVar5 = TShaderParameterStructTypeInfo<NDIRenderTarget2DLocal::FShaderParameters>::
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

// CanExecuteOnTarget @ 1491b6d10

bool __thiscall
UNiagaraDataInterfaceRenderTarget2D::CanExecuteOnTarget
          (UNiagaraDataInterfaceRenderTarget2D *this,ENiagaraSimTarget param_1)

{
  return true;
}

// CanExposeVariables @ 1491b6d60

bool __thiscall
UNiagaraDataInterfaceRenderTarget2D::CanExposeVariables(UNiagaraDataInterfaceRenderTarget2D *this)

{
  return true;
}

// CanRenderVariablesToCanvas @ 1491b6da0

bool __thiscall
UNiagaraDataInterfaceRenderTarget2D::CanRenderVariablesToCanvas
          (UNiagaraDataInterfaceRenderTarget2D *this)

{
  return true;
}

// CopyToInternal @ 1491b8060

bool __thiscall
UNiagaraDataInterfaceRenderTarget2D::CopyToInternal
          (UNiagaraDataInterfaceRenderTarget2D *this,UNiagaraDataInterface *param_1)

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
      bVar5 = *(byte *)((longlong)&param_1[1]._padding_ + 4);
      param_1[1]._padding_ = (longlong)(this->Size).field0_0x0;
      *(ENiagaraMipMapGeneration *)&param_1[1]._padding_ = this->MipMapGeneration;
      *(ENiagaraMipMapGenerationType *)((longlong)&param_1[1]._padding_ + 1) =
           this->MipMapGenerationType;
      *(uchar *)((longlong)&param_1[1]._padding_ + 2) = (this->OverrideRenderTargetFormat).Value;
      *(uchar *)((longlong)&param_1[1]._padding_ + 3) = (this->OverrideRenderTargetFilter).Value;
      bVar5 = (bVar5 ^ this->bInheritUserParameterSettings) & 1 ^
              *(byte *)((longlong)&param_1[1]._padding_ + 4);
      *(byte *)((longlong)&param_1[1]._padding_ + 4) = bVar5;
      *(byte *)((longlong)&param_1[1]._padding_ + 4) = (bVar5 ^ this->field_0x4c) & 2 ^ bVar5;
      FNiagaraVariable::operator=
                ((FNiagaraVariable *)&param_1[1]._padding_,
                 &(this->RenderTargetUserParameter).Parameter);
      return true;
    }
    pFVar4 = GetTypeName<UNiagaraDataInterfaceRenderTarget2D>(&local_28);
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
  pFVar4 = GetTypeName<UNiagaraDataInterfaceRenderTarget2D>(&local_28);
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar6);
}

// DestroyPerInstanceData @ 1491be880

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
UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData
          (UNiagaraDataInterfaceRenderTarget2D *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar4;
  FNiagaraWorldManager *this_02;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_c8 [32];
  ulong64 local_a8 [2];
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
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_a8[0] = param_2->ID;
  if (*(int *)&(this->SystemInstancesToProxyData_GT).field_0x8 !=
      *(int *)&(this->SystemInstancesToProxyData_GT).field_0x34) {
    TSet<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<unsigned___int64>
              ((TSet<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
                *)&this->SystemInstancesToProxyData_GT,
               (int)(local_a8[0] >> 0x20) * 0x17 + (int)local_a8[0],local_a8);
  }
  lVar1 = this->_padding_;
  if (lVar1 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  local_70 = (undefined ***)0x0;
  local_88 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_78 = param_2->ID;
  local_98[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                ::Call;
  lStack_80 = lVar1;
  this_00 = FRenderCommandList::GetInstanceTLS();
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData_::__l2::TSTR_FNiagaraDIDestroyInstanceData531>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_98);
  }
  else {
    this_01 = FRenderCommandList::GetRenderThread(this_00);
    local_68._0_8_ = local_98[0];
    local_40 = local_70;
    local_58 = local_88;
    lStack_50 = lStack_80;
    local_48 = local_78;
    local_98[0] = (code *)0x0;
    local_38 = 2;
    pFVar4 = (FRenderCommandTag *)
             TRenderCommandTag<`UNiagaraDataInterfaceRenderTarget2D::DestroyPerInstanceData'::__l2::TSTR_FNiagaraDIDestroyInstanceData531>
             ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_68,pFVar4);
    uVar6 = (ulonglong)local_38;
    if (2 < uVar6) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
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
  if ((*(char *)((longlong)param_1 + 0x16) != '\0') &&
     (*(longlong *)((longlong)param_1 + 0x18) != 0)) {
    this_02 = FNiagaraSystemInstance::GetWorldManager(param_2);
    if (this_02 != (FNiagaraWorldManager *)0x0) {
      *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x178) = 0;
      FNiagaraWorldManager::ObjectPoolReturn(this_02,*(UObject **)((longlong)param_1 + 0x18));
      FNiagaraWorldManager::RemoveReferencedObject(this_02,*(UObject **)((longlong)param_1 + 0x18));
      *(undefined8 *)((longlong)param_1 + 0x18) = 0;
      *(undefined1 *)((longlong)param_1 + 0x16) = 0;
    }
  }
  if (*(void **)((longlong)param_1 + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x40));
  }
  return;
}

// Equals @ 1491c14c0

bool __thiscall
UNiagaraDataInterfaceRenderTarget2D::Equals
          (UNiagaraDataInterfaceRenderTarget2D *this,UNiagaraDataInterface *param_1)

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
      pFVar5 = GetTypeName<UNiagaraDataInterfaceRenderTarget2D_const_>(&local_28);
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
      pFVar5 = GetTypeName<UNiagaraDataInterfaceRenderTarget2D_const_>(&local_28);
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
         ((ENiagaraMipMapGeneration)param_1[1]._padding_ == this->MipMapGeneration)))) &&
       ((*(ENiagaraMipMapGenerationType *)((longlong)&param_1[1]._padding_ + 1) ==
         this->MipMapGenerationType &&
        ((*(uchar *)((longlong)&param_1[1]._padding_ + 2) ==
          (this->OverrideRenderTargetFormat).Value &&
         (*(uchar *)((longlong)&param_1[1]._padding_ + 3) ==
          (this->OverrideRenderTargetFilter).Value)))))) {
      bVar1 = *(byte *)((longlong)&param_1[1]._padding_ + 4);
      if ((((bVar1 ^ this->bInheritUserParameterSettings) & 1) == 0) &&
         (((bVar1 ^ this->field_0x4c) & 2) == 0)) {
        return true;
      }
    }
  }
  return false;
}

// GetCanvasVariables @ 1491c77f0

void __thiscall
UNiagaraDataInterfaceRenderTarget2D::GetCanvasVariables
          (UNiagaraDataInterfaceRenderTarget2D *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      ::FName::FName(&NAME_RenderTarget,L"RenderTarget");
      _Init_thread_footer(&::_TSS0);
    }
  }
  iVar2 = param_1->ArrayNum;
  if (iVar2 == param_1->ArrayMax) {
    iVar2 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar2 + 1;
  pFVar1 = (FName *)((param_1->AllocatorInstance).Data + (longlong)iVar2 * 0xc);
  *pFVar1 = NAME_RenderTarget;
  uVar3 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)(pFVar1 + 1),&FNiagaraTypeDefinition::Vec4Def);
  pFVar1[1].ComparisonIndex.Value = uVar3;
  return;
}

// GetExposedVariableValue @ 1491c7e70

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
UNiagaraDataInterfaceRenderTarget2D::GetExposedVariableValue
          (UNiagaraDataInterfaceRenderTarget2D *this,FNiagaraVariableBase *param_1,void *param_2,
          FNiagaraSystemInstance *param_3,void *param_4)

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

// GetExposedVariables @ 1491c80b0

void __thiscall
UNiagaraDataInterfaceRenderTarget2D::GetExposedVariables
          (UNiagaraDataInterfaceRenderTarget2D *this,
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

// GetPrivateStaticClass @ 1491ca3e0

UClass * __cdecl UNiagaraDataInterfaceRenderTarget2D::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceRenderTarget2D",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceRenderTarget2D,0xc0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceRenderTarget2D>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceRenderTarget2D>,local_res8,
               UNiagaraDataInterfaceRWBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceRenderTarget2D.InnerSingleton;
}

// GetVMExternalFunction @ 1491cf720

void __thiscall
UNiagaraDataInterfaceRenderTarget2D::GetVMExternalFunction
          (UNiagaraDataInterfaceRenderTarget2D *this,FVMExternalFunctionBindingInfo *param_1,
          void *param_2,
          TDelegate<void___cdecl(FVectorVMExternalFunctionContext_&),FDefaultDelegateUserPolicy>
          *param_3)

{
  FName FVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  UNiagaraDataInterfaceRenderTarget2D *local_res10;
  code *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  bool local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  FVar1 = param_1->Name;
  if (FVar1 == NDIRenderTarget2DLocal::GetSizeFunctionName) {
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTarget2D____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTarget2D *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTarget2D *)0x0)) {
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
  else if (FVar1 == NDIRenderTarget2DLocal::SetSizeFunctionName) {
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTarget2D____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTarget2D *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTarget2D *)0x0)) {
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
  else if (FVar1 == NDIRenderTarget2DLocal::ReleaseResourcesFunctionName) {
    local_78 = VMReleaseResources;
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTarget2D____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTarget2D *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTarget2D *)0x0)) {
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
  else if (FVar1 == NDIRenderTarget2DLocal::GetNumMipLevelsName) {
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTarget2D____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTarget2D *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTarget2D *)0x0)) {
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
    if (FVar1 != NDIRenderTarget2DLocal::SetFormatFunctionName) {
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
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUNiagaraDataInterfaceRenderTarget2D____A6AXAEAVFVectorVMExternalFunctionContext___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTarget2D *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_res10 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UNiagaraDataInterfaceRenderTarget2D *)0x0)) {
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

// HasPostSimulateTick @ 1491d1190

bool __thiscall
UNiagaraDataInterfaceRenderTarget2D::HasPostSimulateTick(UNiagaraDataInterfaceRenderTarget2D *this)

{
  return true;
}

// HasPreSimulateTick @ 1491d1220

bool __thiscall
UNiagaraDataInterfaceRenderTarget2D::HasPreSimulateTick(UNiagaraDataInterfaceRenderTarget2D *this)

{
  return true;
}

// InitPerInstanceData @ 1491d3380

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
UNiagaraDataInterfaceRenderTarget2D::InitPerInstanceData
          (UNiagaraDataInterfaceRenderTarget2D *this,void *param_1,FNiagaraSystemInstance *param_2)

{
  code *pcVar1;
  TRHIGlobal<int> TVar2;
  bool bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  ETextureRenderTargetFormat local_res8 [2];
  undefined1 local_res10 [8];
  FRenderTarget2DRWInstanceData_GameThread **local_res18;
  ulong64 local_res20;
  undefined1 local_48 [8];
  FWeakObjectPtr local_40;
  ForAnyElementType local_38;
  
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Proxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRenderTarget2D.cpp"
                       ,0x1eb,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
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
  *(undefined4 *)((longlong)param_1 + 0xc) = 6;
  *(undefined4 *)((longlong)param_1 + 0x10) = 3;
  *(undefined1 *)((longlong)param_1 + 0x15) = 1;
  *(undefined4 *)((longlong)param_1 + 0x20) = 0xffffffff;
  iVar6 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)((longlong)param_1 + 0x38),
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)((longlong)param_1 + 0x38) = iVar6;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined8 *)((longlong)param_1 + 0x48) = 0;
  local_res20 = param_2->ID;
  local_40 = (FWeakObjectPtr)&local_res20;
  local_38.Data = (FScriptContainerElement *)&local_res18;
  local_res18 = param_1;
  TSet<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_&&,FRenderTarget2DRWInstanceData_GameThread_*_&>_>
            ((TSet<TTuple<unsigned___int64,FRenderTarget2DRWInstanceData_GameThread_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_GameThread_*,0>,FDefaultSetAllocator>
              *)&this->SystemInstancesToProxyData_GT,
             (TPairInitializer<unsigned___int64_&&,FRenderTarget2DRWInstanceData_GameThread_*_&> *)
             local_res10,(bool *)(local_48 + 8));
  if ((NiagaraDataInterfaceRenderTargetCommon::GIgnoreCookedOut == 0) ||
     (((uint)this->_padding_ >> 2 & 1) != 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  bVar5 = NiagaraDataInterfaceRenderTargetCommon::GetRenderTargetFormat
                    (this->bOverrideFormat,(uint)(this->OverrideRenderTargetFormat).Value,local_res8
                    );
  if (bVar5) {
    iVar6 = (int)((float)(this->Size).field0_0x0._s_0.X *
                 NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
    TVar2 = GRHIGlobals.MaxTextureDimensions;
    if (iVar6 < GRHIGlobals.MaxTextureDimensions.Value) {
      TVar2.Value = iVar6;
    }
    iVar6 = 1;
    if (1 < TVar2.Value) {
      iVar6 = TVar2.Value;
    }
    *(int *)((longlong)local_res18 + 4) = iVar6;
    iVar6 = (int)((float)(this->Size).field0_0x0._s_0.Y *
                 NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
    TVar2 = GRHIGlobals.MaxTextureDimensions;
    if (iVar6 < GRHIGlobals.MaxTextureDimensions.Value) {
      TVar2.Value = iVar6;
    }
    iVar6 = 1;
    if (1 < TVar2.Value) {
      iVar6 = TVar2.Value;
    }
    *(int *)(local_res18 + 1) = iVar6;
    *(ENiagaraMipMapGeneration *)((longlong)local_res18 + 0x14) = this->MipMapGeneration;
    *(ENiagaraMipMapGenerationType *)((longlong)local_res18 + 0x15) = this->MipMapGenerationType;
    *(ETextureRenderTargetFormat *)((longlong)local_res18 + 0xc) = local_res8[0];
    *(uint *)(local_res18 + 2) = (uint)(this->OverrideRenderTargetFilter).Value;
    FNiagaraParameterDirectBinding<UObject_*>::Init
              ((FNiagaraParameterDirectBinding<UObject_*> *)(local_res18 + 4),
               (FNiagaraParameterStore *)local_48,(FNiagaraVariable *)&param_2->InstanceParameters);
  }
  else if (bVar3) {
    if (2 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    return false;
  }
  return true;
}

// PerInstanceDataSize @ 1491d53d0

int __thiscall
UNiagaraDataInterfaceRenderTarget2D::PerInstanceDataSize(UNiagaraDataInterfaceRenderTarget2D *this)

{
  return 0x58;
}

// PerInstanceTick @ 1491d54c0

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
UNiagaraDataInterfaceRenderTarget2D::PerInstanceTick
          (UNiagaraDataInterfaceRenderTarget2D *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  ENiagaraMipMapGeneration EVar1;
  ENiagaraMipMapGenerationType EVar2;
  UTextureRenderTarget2D *pUVar3;
  
  if (*(char *)param_1 == '\0') {
    pUVar3 = FNiagaraParameterDirectBinding<UObject_*>::GetValue<UTextureRenderTarget2D>
                       ((FNiagaraParameterDirectBinding<UObject_*> *)((longlong)param_1 + 0x20));
    if ((pUVar3 != (UTextureRenderTarget2D *)0x0) &&
       (*(UTextureRenderTarget2D **)((longlong)param_1 + 0x18) != pUVar3)) {
      NiagaraDataInterfaceRenderTargetCommon::
      ReleaseRenderTarget<FRenderTarget2DRWInstanceData_GameThread>(param_2,param_1);
      *(UTextureRenderTarget2D **)((longlong)param_1 + 0x18) = pUVar3;
    }
    if (this->bInheritUserParameterSettings != 0) {
      if (pUVar3 == (UTextureRenderTarget2D *)0x0) {
        if (1 < (byte)LogNiagara._0_1_) {
          UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        }
      }
      else {
        *(int *)((longlong)param_1 + 4) = pUVar3->SizeX;
        *(int *)((longlong)param_1 + 8) = pUVar3->SizeY;
        if (pUVar3->bAutoGenerateMips == '\0') {
          *(undefined1 *)((longlong)param_1 + 0x14) = 0;
          EVar2 = Unfiltered;
        }
        else {
          EVar1 = this->MipMapGeneration;
          if (this->MipMapGeneration == Disabled) {
            EVar1 = PostStage;
          }
          *(ENiagaraMipMapGeneration *)((longlong)param_1 + 0x14) = EVar1;
          EVar2 = this->MipMapGenerationType;
        }
        *(ENiagaraMipMapGenerationType *)((longlong)param_1 + 0x15) = EVar2;
        *(uint *)((longlong)param_1 + 0xc) =
             (uint)*(byte *)(*(longlong *)((longlong)param_1 + 0x18) + 0x173);
        *(uint *)((longlong)param_1 + 0x10) =
             (uint)*(byte *)(*(longlong *)((longlong)param_1 + 0x18) + 0x109);
      }
    }
  }
  return false;
}

// PerInstanceTickPostSimulate @ 1491d5eb0

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate
          (UNiagaraDataInterfaceRenderTarget2D *this,void *param_1,FNiagaraSystemInstance *param_2,
          float param_3)

{
  uint *puVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong lVar4;
  UTexture *this_00;
  code *pcVar5;
  undefined1 uVar6;
  bool bVar7;
  FNiagaraWorldManager *pFVar8;
  UClass *pUVar9;
  UObject *pUVar10;
  FTextureResource *pFVar11;
  FTextureRenderTargetResource *pFVar12;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar13;
  FString *pFVar14;
  FScriptContainerElement *pFVar15;
  code **ppcVar16;
  ulonglong uVar17;
  wchar_t *pwVar18;
  wchar_t *pwVar19;
  bool bVar20;
  undefined1 auStack_1a8 [32];
  FNiagaraSystemInstance *local_188;
  code *local_180;
  code *local_178;
  undefined1 local_170;
  undefined8 local_16c;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_15c;
  undefined1 local_15b;
  undefined1 local_15a;
  code *local_158;
  undefined4 local_150;
  code *local_148;
  FNiagaraVariable local_140;
  undefined4 local_120;
  FTextureRenderTargetResource *local_118;
  TObjectPtr<UObject>_u_0 local_110;
  FNiagaraSystemInstance **local_108;
  FString local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  FString local_e0;
  FString local_d0;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  if ((NiagaraDataInterfaceRenderTargetCommon::GIgnoreCookedOut == 0) ||
     (((uint)this->_padding_ >> 2 & 1) != 0)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  pFVar12 = (FTextureRenderTargetResource *)0x0;
  pwVar19 = L"";
  local_188 = param_2;
  if (*(char *)param_1 == '\0') {
    if ((*(longlong *)((longlong)param_1 + 0x18) == 0) ||
       ((*(uint *)(*(longlong *)((longlong)param_1 + 0x18) + 8) >> 0x1e & 1) != 0)) {
      *(undefined8 *)((longlong)param_1 + 0x18) = 0;
    }
    if (((bVar7) && (this->bInheritUserParameterSettings == 0)) &&
       (*(longlong *)((longlong)param_1 + 0x18) == 0)) {
      pFVar8 = FNiagaraSystemInstance::GetWorldManager(param_2);
      if (pFVar8 == (FNiagaraWorldManager *)0x0) {
        return false;
      }
      *(undefined1 *)((longlong)param_1 + 0x16) = 1;
      pUVar9 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
      pUVar10 = FNiagaraWorldManager::ObjectPoolGetOrCreate(pFVar8,pUVar9);
      if (pUVar10 == (UObject *)0x0) {
        pFVar14 = GetTypeName<UTextureRenderTarget2D>(&local_100);
        if ((pFVar14->Data).ArrayNum != 0) {
          pwVar19 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(L"nullptr",pwVar19);
      }
      pUVar9 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
      iVar3 = (int)pUVar9->_padding_;
      if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar9->_padding_)) {
        pFVar14 = GetTypeName<UTextureRenderTarget2D>(&local_e0);
        pwVar19 = L"";
        if ((pFVar14->Data).ArrayNum == 0) {
          pwVar18 = L"";
        }
        else {
          pwVar18 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
        pFVar14 = GetFullNameForCastLogError<UObject>(&local_d0,pUVar10);
        if ((pFVar14->Data).ArrayNum != 0) {
          pwVar19 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
        }
                    /* WARNING: Subroutine does not return */
        CastLogError(pwVar19,pwVar18);
      }
      *(UObject **)((longlong)param_1 + 0x18) = pUVar10;
      FNiagaraWorldManager::AddReferencedObject(pFVar8,pUVar10);
      if ((*(longlong *)((longlong)param_1 + 0x18) == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("InstanceData->TargetTexture",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRenderTarget2D.cpp"
                              ,0x3a7,L""), bVar20)) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
      local_f0 = 0;
      uStack_e8 = 0;
      puVar1 = (uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0x154);
      *puVar1 = *puVar1 | 2;
      *(byte *)(*(longlong *)((longlong)param_1 + 0x18) + 0x174) =
           -(*(char *)((longlong)param_1 + 0x14) != '\0') & 2U |
           *(byte *)(*(longlong *)((longlong)param_1 + 0x18) + 0x174) & 0xfd;
      *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x173) =
           *(undefined1 *)((longlong)param_1 + 0xc);
      lVar4 = *(longlong *)((longlong)param_1 + 0x18);
      *(undefined8 *)(lVar4 + 0x160) = 0;
      *(undefined8 *)(lVar4 + 0x168) = 0;
      *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x109) =
           *(undefined1 *)((longlong)param_1 + 0x10);
      UTextureRenderTarget2D::InitAutoFormat
                (*(UTextureRenderTarget2D **)((longlong)param_1 + 0x18),
                 *(uint *)((longlong)param_1 + 4),*(uint *)((longlong)param_1 + 8));
      UTextureRenderTarget2D::UpdateResourceImmediate
                (*(UTextureRenderTarget2D **)((longlong)param_1 + 0x18),true);
    }
    this_00 = *(UTexture **)((longlong)param_1 + 0x18);
    if ((this_00 != (UTexture *)0x0) &&
       (((((bVar20 = *(char *)((longlong)param_1 + 0x14) != '\0',
           (int)this_00[1]._padding_ != *(int *)((longlong)param_1 + 4) ||
           (*(int *)((longlong)&this_00[1]._padding_ + 4) != *(int *)((longlong)param_1 + 8))) ||
          ((uint)*(byte *)((longlong)&this_00[1]._padding_ + 3) !=
           *(uint *)((longlong)param_1 + 0xc))) ||
         (((uint)(this_00->Filter).Value != *(uint *)((longlong)param_1 + 0x10) ||
          ((this_00[1]._padding_ & 0x200000000) == 0)))) ||
        (((bool)(*(byte *)((longlong)&this_00[1]._padding_ + 4) >> 1 & 1) != bVar20 ||
         (pFVar11 = UTexture::GetResource(this_00), pFVar11 == (FTextureResource *)0x0)))))) {
      puVar1 = (uint *)(*(longlong *)((longlong)param_1 + 0x18) + 0x154);
      *puVar1 = *puVar1 | 2;
      *(byte *)(*(longlong *)((longlong)param_1 + 0x18) + 0x174) =
           bVar20 * '\x02' | *(byte *)(*(longlong *)((longlong)param_1 + 0x18) + 0x174) & 0xfd;
      *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x173) =
           *(undefined1 *)((longlong)param_1 + 0xc);
      *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x109) =
           *(undefined1 *)((longlong)param_1 + 0x10);
      UTextureRenderTarget2D::InitAutoFormat
                (*(UTextureRenderTarget2D **)((longlong)param_1 + 0x18),
                 *(uint *)((longlong)param_1 + 4),*(uint *)((longlong)param_1 + 8));
      UTextureRenderTarget2D::UpdateResourceImmediate
                (*(UTextureRenderTarget2D **)((longlong)param_1 + 0x18),true);
    }
  }
  else if (((*(longlong *)((longlong)param_1 + 0x18) != 0) &&
           (*(char *)((longlong)param_1 + 0x16) != '\0')) &&
          (pFVar8 = FNiagaraSystemInstance::GetWorldManager(param_2),
          pFVar8 != (FNiagaraWorldManager *)0x0)) {
    *(undefined1 *)(*(longlong *)((longlong)param_1 + 0x18) + 0x178) = 0;
    FNiagaraWorldManager::ObjectPoolReturn(pFVar8,*(UObject **)((longlong)param_1 + 0x18));
    pFVar15 = (pFVar8->ReferencedObjects).AllocatorInstance.Data;
    local_110 = (TObjectPtr<UObject>_u_0)
                ((TObjectPtr<UObject>_u_0 *)((longlong)param_1 + 0x18))->DebugPtr;
    pFVar2 = pFVar15 + (longlong)(pFVar8->ReferencedObjects).ArrayNum * 8;
    for (; pFVar15 != pFVar2; pFVar15 = pFVar15 + 8) {
      if (*(UObject **)pFVar15 == (UObject *)0x0) {
        bVar20 = local_110.DebugPtr == (UObject *)0x0;
      }
      else {
        bVar20 = *(UObject **)pFVar15 == local_110.DebugPtr;
      }
      if (bVar20) goto LAB_1491d5fb9;
    }
    bVar20 = ::FDebug::CheckVerifyFailedImpl2
                       ("ReferencedObjects.Contains(InObject)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraWorldManager.h"
                        ,0x135,L"");
    if (bVar20) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
LAB_1491d5fb9:
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_110.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_110.DebugPtr);
    }
    TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::RemoveSwap
              (&pFVar8->ReferencedObjects,(TObjectPtr<UObject> *)&local_110.ObjectPtr,Default);
    *(undefined8 *)((longlong)param_1 + 0x18) = 0;
    *(undefined1 *)((longlong)param_1 + 0x16) = 0;
  }
  if (bVar7) {
    pcVar5 = (code *)this->_padding_;
    if ((pcVar5 == (code *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypedProxy != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                           ,0x3a0,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar6 = (*pcVar5)();
      return (bool)uVar6;
    }
    if (*(UTextureRenderTarget **)((longlong)param_1 + 0x18) != (UTextureRenderTarget *)0x0) {
      pFVar12 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                          (*(UTextureRenderTarget **)((longlong)param_1 + 0x18));
    }
    if ((*(char *)param_1 == '\0') && (pFVar12 == (FTextureRenderTargetResource *)0x0)) {
      local_108 = &local_188;
      `UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::__l35::<lambda_1>::
      operator()(&local_108);
    }
    local_178 = (code *)local_188->ID;
    local_170 = *(undefined1 *)param_1;
    local_16c = *(undefined8 *)((longlong)param_1 + 4);
    local_164 = *(undefined4 *)((longlong)param_1 + 0xc);
    local_160 = *(undefined4 *)((longlong)param_1 + 0x10);
    local_15c = *(undefined1 *)((longlong)param_1 + 0x14);
    local_15b = *(undefined1 *)((longlong)param_1 + 0x15);
    local_15a = *(undefined1 *)((longlong)param_1 + 0x16);
    local_158 = *(code **)((longlong)param_1 + 0x18);
    local_150 = *(undefined4 *)((longlong)param_1 + 0x20);
    local_148 = *(code **)((longlong)param_1 + 0x28);
    local_180 = pcVar5;
    FNiagaraVariable::FNiagaraVariable(&local_140,(FNiagaraVariable *)((longlong)param_1 + 0x30));
    local_120 = *(undefined4 *)((longlong)param_1 + 0x50);
    local_b8[0] = (code *)0x0;
    local_118 = pFVar12;
    local_90 = FMemory::Malloc(0x78,8);
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::`35'::<lambda_2>,1,1>
                         ::_vftable_;
    local_90[1] = local_180;
    local_90[2] = local_178;
    *(undefined1 *)(local_90 + 3) = local_170;
    *(undefined8 *)((longlong)local_90 + 0x1c) = local_16c;
    *(undefined4 *)((longlong)local_90 + 0x24) = local_164;
    *(undefined4 *)(local_90 + 5) = local_160;
    *(undefined1 *)((longlong)local_90 + 0x2c) = local_15c;
    *(undefined1 *)((longlong)local_90 + 0x2d) = local_15b;
    *(undefined1 *)((longlong)local_90 + 0x2e) = local_15a;
    local_90[6] = local_158;
    *(undefined4 *)(local_90 + 7) = local_150;
    local_90[8] = local_148;
    local_90[9] = (code *)local_140._padding_;
    *(undefined4 *)(local_90 + 10) = (undefined4)local_140._padding_;
    local_90[0xb] = (code *)0x0;
    local_90[0xb] = (code *)local_140.VarData.AllocatorInstance.Data;
    local_140.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)(local_90 + 0xc) = local_140.VarData.ArrayNum;
    *(int *)((longlong)local_90 + 100) = local_140.VarData.ArrayMax;
    local_140.VarData.ArrayNum = 0;
    local_140.VarData.ArrayMax = 0;
    *(undefined4 *)(local_90 + 0xd) = local_120;
    local_90[0xe] = (code *)local_118;
    if (local_90 + 1 != (code **)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::__l35::<lambda_2>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_01 = FRenderCommandList::GetInstanceTLS();
    if (this_01 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate_::__l35::TSTR_NDIRenderTarget2DUpdate974>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
    }
    else {
      this_02 = FRenderCommandList::GetRenderThread(this_01);
      local_88._0_8_ = local_b8[0];
      local_b8[0] = (code *)0x0;
      local_60 = local_90;
      local_90 = (code **)0x0;
      local_88._16_8_ = local_a8[0];
      local_88._24_8_ = local_a8[1];
      local_88._32_8_ = local_a8[2];
      local_58 = 2;
      pFVar13 = (FRenderCommandTag *)
                TRenderCommandTag<`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::__l35::TSTR_NDIRenderTarget2DUpdate974>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar13);
      uVar17 = (ulonglong)local_58;
      if ((2 < uVar17) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar7)) {
        pcVar5 = (code *)swi(3);
        uVar6 = (*pcVar5)();
        return (bool)uVar6;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar16 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar16 = local_60;
          }
          (**(code **)(*ppcVar16 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar17])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar16 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar16 = local_90;
      }
      (**(code **)(*ppcVar16 + 0x10))();
    }
    if (local_140.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_140.VarData.AllocatorInstance.Data);
    }
  }
  return false;
}

// PostInitProperties @ 1491d79b0

void __thiscall
UNiagaraDataInterfaceRenderTarget2D::PostInitProperties(UNiagaraDataInterfaceRenderTarget2D *this)

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

// ProvidePerInstanceDataForRenderThread @ 1491d9310

void __thiscall
UNiagaraDataInterfaceRenderTarget2D::ProvidePerInstanceDataForRenderThread
          (UNiagaraDataInterfaceRenderTarget2D *this,void *param_1,void *param_2,ulong64 *param_3)

{
  return;
}

// RenderVariableToCanvas @ 1491deb50

bool __thiscall
UNiagaraDataInterfaceRenderTarget2D::RenderVariableToCanvas
          (UNiagaraDataInterfaceRenderTarget2D *this,ulong64 param_1,FName param_2,FCanvas *param_3,
          TIntRect<int> *param_4)

{
  longlong lVar1;
  int iVar2;
  FTextureResource *pFVar3;
  undefined1 *puVar4;
  
  if ((param_3 != (FCanvas *)0x0) &&
     (*(int *)&(this->SystemInstancesToProxyData_GT).field_0x8 !=
      *(int *)&(this->SystemInstancesToProxyData_GT).field_0x34)) {
    puVar4 = *(undefined1 **)&(this->SystemInstancesToProxyData_GT).field_0x40;
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &(this->SystemInstancesToProxyData_GT).field_0x38;
    }
    iVar2 = *(int *)(puVar4 + (ulonglong)
                              (*(int *)&(this->SystemInstancesToProxyData_GT).field_0x48 - 1U &
                              (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4);
    if (iVar2 != -1) {
      do {
        lVar1 = *(longlong *)&this->SystemInstancesToProxyData_GT + (longlong)iVar2 * 0x18;
        if (*(ulong64 *)(*(longlong *)&this->SystemInstancesToProxyData_GT + (longlong)iVar2 * 0x18)
            == param_1) {
          if (lVar1 == 0) {
            return false;
          }
          lVar1 = *(longlong *)(lVar1 + 8);
          if (lVar1 == 0) {
            return false;
          }
          if (*(UTexture **)(lVar1 + 0x18) == (UTexture *)0x0) {
            return false;
          }
          pFVar3 = UTexture::GetResource(*(UTexture **)(lVar1 + 0x18));
          if (pFVar3 == (FTextureResource *)0x0) {
            return false;
          }
          pFVar3 = UTexture::GetResource(*(UTexture **)(lVar1 + 0x18));
          iVar2 = *(int *)((longlong)&param_4->field0_0x0 + 4);
          FCanvas::DrawTile(param_3,(double)*(int *)&param_4->field0_0x0,(double)iVar2,
                            (double)(*(int *)((longlong)&param_4->field0_0x0 + 8) -
                                    *(int *)&param_4->field0_0x0),
                            (double)(*(int *)((longlong)&param_4->field0_0x0 + 0xc) - iVar2),0.0,
                            __real_3f800000,__real_3f800000,0.0,&FLinearColor::White,
                            (FTexture *)pFVar3,false);
          return true;
        }
        iVar2 = *(int *)(lVar1 + 0x10);
      } while (iVar2 != -1);
    }
  }
  return false;
}

// SetShaderParameters @ 1491e0b70

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
UNiagaraDataInterfaceRenderTarget2D::SetShaderParameters
          (UNiagaraDataInterfaceRenderTarget2D *this,
          FNiagaraDataInterfaceSetShaderParametersContext *param_1)

{
  int *piVar1;
  char cVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  FRDGBuilder *this_00;
  FRHITexture *pFVar4;
  FResource *pFVar5;
  uchar *puVar6;
  FRHISamplerState *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  ulong64 uVar11;
  FRenderTarget2DRWInstanceData_RenderThread *pFVar12;
  FRDGTexture *pFVar13;
  TRefCountPtr<IPooledRenderTarget> TVar14;
  FRDGTextureSRV *pFVar15;
  FRDGTextureUAV *pFVar16;
  FRDGExternalAccessQueue *pFVar17;
  FShaderParametersMetadata *pFVar18;
  TRefCountPtr<FRHISamplerState> TVar19;
  ForAnyElementType FVar20;
  uint uVar21;
  char local_res10;
  undefined7 uStackX_11;
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
  uVar11 = FNiagaraDataInterfaceSetShaderParametersContext::GetSystemInstanceID(param_1);
  pFVar12 = TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
            ::Find((TMapBase<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FRenderTarget2DRWInstanceData_RenderThread,0>_>
                    *)(pFVar3 + 1),uVar11);
  if ((pFVar12 == (FRenderTarget2DRWInstanceData_RenderThread *)0x0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceData_RT",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRenderTarget2D.cpp"
                         ,0x1a7,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = param_1->GraphBuilder;
  if ((pFVar12->TransientRDGTexture == (FRDGTexture *)0x0) &&
     (pFVar4 = (pFVar12->TextureRHI).Reference, pFVar4 != (FRHITexture *)0x0)) {
    pFVar13 = FRDGBuilder::FindExternalTexture(this_00,pFVar4);
    pFVar12->TransientRDGTexture = pFVar13;
    if (pFVar13 == (FRDGTexture *)0x0) {
      TVar14 = CreateRenderTarget((FRHITexture *)&local_res10,
                                  (wchar_t *)(pFVar12->TextureRHI).Reference);
      pFVar13 = FRDGBuilder::RegisterExternalTexture
                          (this_00,(TRefCountPtr<IPooledRenderTarget> *)TVar14.Reference,None);
      pFVar12->TransientRDGTexture = pFVar13;
      if ((longlong *)CONCAT71(uStackX_11,local_res10) != (longlong *)0x0) {
        (**(code **)(*(longlong *)CONCAT71(uStackX_11,local_res10) + 0x38))();
      }
    }
    local_58.Texture = pFVar12->TransientRDGTexture;
    local_58._padding_._0_2_ = 0;
    local_58._padding_._3_1_ = 0;
    local_58._padding_._4_4_ = 0;
    local_58._padding_._0_1_ = 0;
    local_58._padding_._2_1_ = 0;
    local_58._padding_._2_1_ = ((local_58.Texture)->Desc).field_0x30;
    cVar2 = ((local_58.Texture)->Desc).field_0x32;
    if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
      local_58._padding_._4_4_ = (uint)*(ushort *)&((local_58.Texture)->Desc).field_0x2e << 0x10;
    }
    pFVar15 = FRDGBuilder::CreateSRV(this_00,&local_58);
    pFVar12->TransientRDGSRV = pFVar15;
    pFVar16 = FRDGBuilder::CreateUAV(this_00,pFVar12->TransientRDGTexture,None,PF_Unknown);
    pFVar12->TransientRDGUAV = pFVar16;
    FRDGBuilder::UseInternalAccessMode(this_00,(FRDGViewableResource *)pFVar12->TransientRDGTexture)
    ;
    pFVar17 = FNiagaraDataInterfaceSetShaderParametersContext::GetRDGExternalAccessQueue(param_1);
    pFVar13 = pFVar12->TransientRDGTexture;
    if (pFVar13 != (FRDGTexture *)0x0) {
      piVar1 = &(pFVar17->Resources).ArrayMax;
      iVar10 = (pFVar17->Resources).ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGExternalAccessQueue::FResource>_>
                           (0x810,(ForElementType<FRDGExternalAccessQueue::FResource> *)pFVar17,
                            piVar1);
      }
      (pFVar17->Resources).ArrayNum = iVar10 + 1;
      pFVar5 = (pFVar17->Resources).AllocatorInstance.Data;
      pFVar5[iVar10].Resource = (FRDGViewableResource *)pFVar13;
      pFVar5[iVar10].Access = SRVMask;
      pFVar5[iVar10].Pipelines = Graphics;
    }
  }
  uVar21 = param_1->ParametersOffset + 0xf & 0xfffffff0;
  pFVar18 = TShaderParameterStructTypeInfo<NDIRenderTarget2DLocal::FShaderParameters>::
            GetStructMetadata();
  puVar6 = param_1->BaseParameters;
  param_1->ParametersOffset = pFVar18->Size + uVar21;
  *(TIntPoint<int>_u_0 *)(puVar6 + uVar21) = (pFVar12->Size).field0_0x0;
  *(int *)(puVar6 + (ulonglong)uVar21 + 8) = pFVar12->MipLevels;
  bVar9 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound
                    (param_1,puVar6 + (ulonglong)uVar21 + 0x10);
  local_res10 = FNiagaraDataInterfaceSetShaderParametersContext::IsResourceBound
                          (param_1,puVar6 + (ulonglong)uVar21 + 0x18);
  if (bVar9) {
    if (pFVar12->TransientRDGUAV == (FRDGTextureUAV *)0x0) {
      pFVar16 = FNiagaraGpuComputeDispatchInterface::GetEmptyTextureUAV
                          (param_1->ComputeDispatchInterface,this_00,PF_A16B16G16R16,Texture2D);
      *(FRDGTextureUAV **)(puVar6 + (ulonglong)uVar21 + 0x10) = pFVar16;
    }
    else {
      *(FRDGTextureUAV **)(puVar6 + (ulonglong)uVar21 + 0x10) = pFVar12->TransientRDGUAV;
      pFVar12->bRebuildMips = true;
      pFVar12->bWroteThisFrame = true;
    }
  }
  if (local_res10 != '\0') {
    if ((bVar9) || (pFVar15 = pFVar12->TransientRDGSRV, pFVar15 == (FRDGTextureSRV *)0x0)) {
      FNiagaraDataInterfaceSetShaderParametersContext::GetDebugString(param_1,&local_68);
      ::FString::PrintfImpl
                (&local_88,
                 L"RenderTarget is read and wrote in the same stage, this is not allowed, read will be invalid. (%s)"
                );
      FVar20.Data = (FScriptContainerElement *)L"";
      if (local_88.Data.ArrayNum != 0) {
        FVar20.Data = local_88.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_78,(wchar_t *)FVar20.Data);
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
      pFVar15 = FNiagaraGpuComputeDispatchInterface::GetBlackTextureSRV
                          (param_1->ComputeDispatchInterface,this_00,Texture2D);
    }
    else {
      pFVar12->bReadThisFrame = true;
    }
    *(FRDGTextureSRV **)(puVar6 + (ulonglong)uVar21 + 0x18) = pFVar15;
    pFVar7 = (pFVar12->SamplerStateRHI).Reference;
    TVar19 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI;
    if (pFVar7 != (FRHISamplerState *)0x0) {
      TVar19.Reference = pFVar7;
    }
    *(FRHISamplerState **)(puVar6 + (ulonglong)uVar21 + 0x20) = TVar19.Reference;
  }
  return;
}

// SimCacheBeginWrite @ 1491e1c80

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

UObject * __thiscall
UNiagaraDataInterfaceRenderTarget2D::SimCacheBeginWrite
          (UNiagaraDataInterfaceRenderTarget2D *this,UObject *param_1,
          FNiagaraSystemInstance *param_2,void *param_3,FNiagaraSimCacheFeedbackContext *param_4)

{
  FName FVar1;
  FNameEntryId FVar2;
  UNDIRenderTargetSimCacheData *pUVar3;
  undefined4 extraout_var;
  uint uVar4;
  undefined1 local_res20 [8];
  
  if (param_3 == (void *)0x0) {
    return (UObject *)0x0;
  }
  pUVar3 = NewObject<UNDIRenderTargetSimCacheData>(param_1);
  if (NDIRenderTarget2DLocal::GSimCacheCompressed == 0) {
    uVar4 = 0;
  }
  else {
    FVar2 = FNameEntryId::FromValidEName((EName)local_res20);
    uVar4 = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  }
  FVar1.Number = 0;
  FVar1.ComparisonIndex.Value = uVar4;
  pUVar3->CompressionType = FVar1;
  return (UObject *)pUVar3;
}

// SimCacheCompareFrame @ 1491e1ed0

bool __thiscall
UNiagaraDataInterfaceRenderTarget2D::SimCacheCompareFrame
          (UNiagaraDataInterfaceRenderTarget2D *this,UObject *param_1,UObject *param_2,int param_3,
          TOptional<float> param_4,FString *param_5)

{
  float *pfVar1;
  bool bVar2;
  UNDIRenderTargetSimCacheData *this_00;
  UNDIRenderTargetSimCacheData *pUVar3;
  
  this_00 = CastChecked<UNDIRenderTargetSimCacheData,UObject_const_>(param_1);
  pUVar3 = CastChecked<UNDIRenderTargetSimCacheData,UObject_const_>(param_2);
  pfVar1 = (float *)CONCAT44(param_4._4_4_,param_4.TypedValue);
  bVar2 = *(bool *)(pfVar1 + 1);
  param_4.bIsSet = bVar2;
  if (bVar2 != false) {
    param_4.TypedValue = *pfVar1;
  }
  bVar2 = UNDIRenderTargetSimCacheData::CompareFrame
                    (this_00,pUVar3,param_3,(TOptional<float>)&param_4,param_5);
  return bVar2;
}

// SimCacheEndWrite @ 1491e1f50

bool __thiscall
UNiagaraDataInterfaceRenderTarget2D::SimCacheEndWrite
          (UNiagaraDataInterfaceRenderTarget2D *this,UObject *param_1)

{
  return true;
}

// SimCacheReadFrame @ 1491e2040

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
UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame
          (UNiagaraDataInterfaceRenderTarget2D *this,
          FNiagaraSimCacheDataInterfaceReadContext *param_1)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  FNiagaraSystemInstance *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  EPixelFormat EVar9;
  uint uVar10;
  undefined4 uVar11;
  UNDIRenderTargetSimCacheData *this_00;
  FNiagaraDataInterfaceProxyRenderTarget2DProxy *pFVar12;
  FRenderCommandList *this_01;
  FCommandList *this_02;
  FRenderCommandTag *pFVar13;
  longlong lVar14;
  code **ppcVar15;
  ulonglong uVar16;
  int *piVar17;
  undefined1 auStack_118 [32];
  longlong local_f8;
  longlong local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  FNiagaraDataInterfaceProxyRenderTarget2DProxy *local_d0;
  code *pcStack_c8;
  FTextureRenderTargetResource *local_c0;
  UNDIRenderTargetSimCacheData *pUStack_b8;
  uint local_b0;
  undefined4 uStack_ac;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  undefined1 local_78 [40];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  this_00 = CastChecked<UNDIRenderTargetSimCacheData,UObject>(param_1->StorageObject);
  if ((param_1->OptionalPerInstanceData == (void *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("OptionalPerInstanceData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraSimCacheCustomStorageInterface.h"
                         ,0x1d,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  piVar17 = &param_1->FrameIndexB;
  pvVar3 = param_1->OptionalPerInstanceData;
  if (param_1->FrameInterp <= __real_3f000000 && __real_3f000000 != param_1->FrameInterp) {
    piVar17 = &param_1->FrameIndexA;
  }
  uVar1 = *piVar17;
  if (((int)uVar1 < 0) || ((this_00->Frames).ArrayNum <= (int)uVar1)) {
    bVar7 = false;
  }
  else {
    iVar2 = (this_00->Frames).ArrayNum;
    uVar10 = 0;
    if ((int)uVar1 < iVar2) {
      uVar10 = ~uVar1 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (local_f8 = (longlong)(int)uVar1, local_f0 = (longlong)iVar2,
       bVar7 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar4 = (this_00->Frames).AllocatorInstance.Data;
    lVar14 = (longlong)(int)uVar1 * 0x40;
    local_e0 = *(undefined8 *)(pFVar4 + lVar14);
    local_d8 = *(undefined4 *)(pFVar4 + lVar14 + 8);
    EVar9 = UNDIRenderTargetSimCacheData::GetTextureFormat(this_00,uVar1);
    local_e8 = (undefined4)local_e0;
    uStack_e4 = local_e0._4_4_;
    *(undefined8 *)((longlong)pvVar3 + 4) = local_e0;
    switch(EVar9) {
    case PF_A32B32G32R32F:
      uVar11 = 9;
      break;
    case PF_G8:
      uVar11 = 0;
      break;
    default:
      if (1 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
    case PF_B8G8R8A8:
      uVar11 = 2;
      break;
    case PF_FloatRGBA:
      uVar11 = 6;
      break;
    case PF_R32_FLOAT:
      uVar11 = 7;
      break;
    case PF_G16R16F:
      uVar11 = 5;
      break;
    case PF_G32R32F:
      uVar11 = 8;
      break;
    case PF_A2B10G10R10:
      uVar11 = 10;
      break;
    case PF_R16F:
      uVar11 = 4;
      break;
    case PF_R8G8:
      uVar11 = 1;
    }
    *(undefined4 *)((longlong)pvVar3 + 0xc) = uVar11;
    *(undefined4 *)((longlong)pvVar3 + 0x10) = 3;
    pFVar5 = param_1->SystemInstance;
    (**(code **)(*(longlong *)&this[-1].SystemInstancesToProxyData_GT.field_0x18 + 0x2f8))
              (&this[-1].SystemInstancesToProxyData_GT.field_0x18,pvVar3,pFVar5,0);
    (**(code **)(*(longlong *)&this[-1].SystemInstancesToProxyData_GT.field_0x18 + 0x300))
              (&this[-1].SystemInstancesToProxyData_GT.field_0x18,pvVar3,pFVar5,0);
    if ((*(longlong *)((longlong)pvVar3 + 0x18) != 0) &&
       (bVar7 = UNDIRenderTargetSimCacheData::HasPixelData(this_00,uVar1), bVar7)) {
      pFVar12 = UNiagaraDataInterface::GetProxyAs<FNiagaraDataInterfaceProxyRenderTarget2DProxy>
                          ((UNiagaraDataInterface *)
                           &this[-1].SystemInstancesToProxyData_GT.field_0x18);
      local_c0 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                           (*(UTextureRenderTarget **)((longlong)pvVar3 + 0x18));
      pcStack_c8 = (code *)pFVar5->ID;
      local_a8[0] = (code *)0x0;
      local_d0 = pFVar12;
      pUStack_b8 = this_00;
      local_b0 = uVar1;
      local_80 = FMemory::Malloc(0x30,8);
      *local_80 = (code *)&UE::Core::Private::Function::
                           TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame'::`9'::<lambda_1>,1,1>
                           ::_vftable_;
      local_80[1] = (code *)local_d0;
      local_80[2] = pcStack_c8;
      local_80[3] = (code *)local_c0;
      local_80[4] = (code *)pUStack_b8;
      local_80[5] = (code *)CONCAT44(uStack_ac,local_b0);
      if (local_80 + 1 != (code **)0x0) {
        local_a8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame'::__l9::<lambda_1>,void,FRHICommandListImmediate_&>
                      ::Call;
      }
      this_01 = FRenderCommandList::GetInstanceTLS();
      if (this_01 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame_::__l9::TSTR_NDIRenderTargetUpdate722>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
      }
      else {
        this_02 = FRenderCommandList::GetRenderThread(this_01);
        local_78._0_8_ = local_a8[0];
        local_50 = local_80;
        local_80 = (code **)0x0;
        local_78._16_8_ = local_98[0];
        local_78._24_8_ = local_98[1];
        local_78._32_8_ = local_98[2];
        local_a8[0] = (code *)0x0;
        local_48 = 2;
        pFVar13 = (FRenderCommandTag *)
                  TRenderCommandTag<`UNiagaraDataInterfaceRenderTarget2D::SimCacheReadFrame'::__l9::TSTR_NDIRenderTargetUpdate722>
                  ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_78,pFVar13);
        uVar16 = (ulonglong)local_48;
        if ((2 < uVar16) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          uVar8 = (*pcVar6)();
          return (bool)uVar8;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar16] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_78._0_8_ != (code *)0x0) {
            ppcVar15 = (code **)(local_78 + 0x10);
            if (local_50 != (code **)0x0) {
              ppcVar15 = local_50;
            }
            (**(code **)(*ppcVar15 + 0x10))();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar16])(local_78);
        }
      }
      if (local_a8[0] != (code *)0x0) {
        ppcVar15 = local_a8 + 2;
        if (local_80 != (code **)0x0) {
          ppcVar15 = local_80;
        }
        (**(code **)(*ppcVar15 + 0x10))();
      }
    }
    bVar7 = true;
  }
  return bVar7;
}

// SimCacheToJson @ 1491e2ad0

TSharedPtr<FJsonObject,1> * __thiscall
UNiagaraDataInterfaceRenderTarget2D::SimCacheToJson
          (UNiagaraDataInterfaceRenderTarget2D *this,
          TSharedPtr<FJsonObject,1> *__return_storage_ptr__,UObject *param_1,int param_2,
          TOptional<FString> *param_3,TOptional<FString> *param_4)

{
  FScriptContainerElement *pFVar1;
  UNDIRenderTargetSimCacheData *this_00;
  TOptional<FString>_u_0 local_28;
  TOptional<FString>_u_0 local_18;
  
  this_00 = CastChecked<UNDIRenderTargetSimCacheData,UObject_const_>(param_1);
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_28.TypedValue.Data.ArrayMax = -1;
  if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) {
    ::FString::FString(&local_28.TypedValue,(FString *)param_4);
  }
  local_18.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_18.TypedValue.Data.ArrayNum = 0;
  local_18.TypedValue.Data.ArrayMax = -1;
  if (*(int *)((longlong)&param_3->field0_0x0 + 0xc) != -1) {
    ::FString::FString(&local_18.TypedValue,(FString *)param_3);
  }
  UNDIRenderTargetSimCacheData::FrameToJson
            (this_00,__return_storage_ptr__,param_2,(TOptional<FString> *)&local_18.TypedValue,
             (TOptional<FString> *)&local_28.TypedValue);
  if ((*(int *)((longlong)&param_3->field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (param_3->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  if ((*(int *)((longlong)&param_4->field0_0x0 + 0xc) != -1) &&
     (pFVar1 = (param_4->field0_0x0).TypedValue.Data.AllocatorInstance.Data,
     pFVar1 != (FScriptContainerElement *)0x0)) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// SimCacheWriteFrame @ 1491e2bc0

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
UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame
          (UNiagaraDataInterfaceRenderTarget2D *this,UObject *param_1,int param_2,
          FNiagaraSystemInstance *param_3,void *param_4,FNiagaraSimCacheFeedbackContext *param_5)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  EPixelFormat EVar6;
  FTextureRenderTargetResource *pFVar7;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar8;
  UNDIRenderTargetSimCacheData *this_02;
  code **ppcVar9;
  ulonglong uVar10;
  undefined1 auStackY_128 [32];
  uchar *local_f8;
  undefined8 local_f0;
  TIntVector3<int>_u_0 local_e8;
  uchar *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<unsigned_char,int> local_c8;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  undefined1 local_88 [40];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (param_4 == (void *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("OptionalPerInstanceData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceRenderTarget2D.cpp"
                       ,0x26a,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  if (*(longlong *)((longlong)param_4 + 0x18) != 0) {
    pcVar3 = *(code **)&this[-1].SystemInstancesToProxyData_GT.field_0x40;
    if (pcVar3 == (code *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypedProxy != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                         ,0x3a8,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return (bool)uVar5;
      }
    }
    pFVar7 = UTextureRenderTarget::GameThread_GetRenderTargetResource
                       (*(UTextureRenderTarget **)((longlong)param_4 + 0x18));
    pcVar1 = (code *)param_3->ID;
    pcVar2 = *(code **)((longlong)param_4 + 4);
    local_f8 = (uchar *)0x0;
    local_f0 = 0;
    local_b8[0] = (code *)0x0;
    local_90 = FMemory::Malloc(0x30,8);
    *local_90 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame'::`12'::<lambda_1>,1,1>
                         ::_vftable_;
    local_90[1] = pcVar3;
    local_90[2] = pcVar1;
    local_90[3] = (code *)pFVar7;
    local_90[4] = (code *)&local_f8;
    local_90[5] = pcVar2;
    if (local_90 + 1 != (code **)0x0) {
      local_b8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame'::__l12::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
    }
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame_::__l12::TSTR_NDIRenderTargetVolumeRead627>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
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
      pFVar8 = (FRenderCommandTag *)
               TRenderCommandTag<`UNiagaraDataInterfaceRenderTarget2D::SimCacheWriteFrame'::__l12::TSTR_NDIRenderTargetVolumeRead627>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_88,pFVar8);
      uVar10 = (ulonglong)local_58;
      if (2 < uVar10) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_88._0_8_ != (code *)0x0) {
          ppcVar9 = (code **)(local_88 + 0x10);
          if (local_60 != (code **)0x0) {
            ppcVar9 = local_60;
          }
          (**(code **)(*ppcVar9 + 0x10))();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar10])(local_88);
      }
    }
    if (local_b8[0] != (code *)0x0) {
      ppcVar9 = local_b8 + 2;
      if (local_90 != (code **)0x0) {
        ppcVar9 = local_90;
      }
      (**(code **)(*ppcVar9 + 0x10))();
    }
    FlushRenderingCommands();
    if (0 < (int)local_f0) {
      this_02 = CastChecked<UNDIRenderTargetSimCacheData,UObject>(param_1);
      iStack_d0 = (int)local_f0;
      local_d8 = local_f8;
      if ((int)local_f0 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return (bool)uVar5;
        }
      }
      EVar6 = GetPixelFormatFromRenderTargetFormat
                        (*(ETextureRenderTargetFormat *)((longlong)param_4 + 0xc));
      local_e8._s_0.X = *(int *)((longlong)param_4 + 4);
      local_c8._12_4_ = uStack_cc;
      local_c8.ArrayNum = iStack_d0;
      local_e8._s_0.Y = *(int *)((longlong)param_4 + 8);
      local_c8.DataPtr = local_d8;
      local_e8._s_0.Z = 1;
      UNDIRenderTargetSimCacheData::SetPixelData
                (this_02,param_2,(TIntVector3<int> *)&local_e8._s_0,EVar6,&local_c8);
    }
    if (local_f8 != (uchar *)0x0) {
      FMemory::Free(local_f8);
    }
  }
  return true;
}

// StaticRegisterNativesUNiagaraDataInterfaceRenderTarget2D @ 1491e3600

void __cdecl
UNiagaraDataInterfaceRenderTarget2D::StaticRegisterNativesUNiagaraDataInterfaceRenderTarget2D(void)

{
  return;
}

// VMGetNumMipLevels @ 1491e6070

void __thiscall
UNiagaraDataInterfaceRenderTarget2D::VMGetNumMipLevels
          (UNiagaraDataInterfaceRenderTarget2D *this,FVectorVMExternalFunctionContext *param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  int iVar6;
  int local_20 [2];
  FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread> local_18;
  int iVar5;
  
  VectorVM::FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread>::
  FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread>(&local_18,param_1);
  iVar6 = 0;
  local_20[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  pfVar2 = pfVar2 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
  fVar4 = 1.4013e-45;
  if ((local_18.Ptr)->TargetTexture == (UTextureRenderTarget2D *)0x0) {
    if ((local_18.Ptr)->MipMapGeneration != Disabled) {
      uVar3 = ((local_18.Ptr)->Size).field0_0x0._s_0.Y;
      if ((int)uVar3 < ((local_18.Ptr)->Size).field0_0x0._s_0.X) {
        uVar3 = ((local_18.Ptr)->Size).field0_0x0._s_0.X;
      }
      iVar1 = 0x1f;
      if (uVar3 != 0) {
        for (; uVar3 >> iVar1 == 0; iVar1 = iVar1 + -1) {
        }
      }
      iVar5 = 0;
      if (uVar3 != 0) {
        iVar5 = iVar1;
      }
      fVar4 = (float)(iVar5 + 1);
    }
  }
  else {
    fVar4 = (float)(local_18.Ptr)->TargetTexture->NumMips;
  }
  if (0 < param_1->NumInstances) {
    do {
      iVar6 = iVar6 + 1;
      *pfVar2 = fVar4;
      pfVar2 = pfVar2 + local_20[0];
    } while (iVar6 < param_1->NumInstances);
  }
  return;
}

// VMGetSize @ 1491e62b0

void __thiscall
UNiagaraDataInterfaceRenderTarget2D::VMGetSize
          (UNiagaraDataInterfaceRenderTarget2D *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  int local_30 [4];
  int local_20 [2];
  FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread> local_18;
  
  VectorVM::FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread>::
  FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread>(&local_18,param_1);
  iVar4 = 0;
  local_30[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_30);
  iVar3 = local_30[0] * param_1->PerInstanceFnInstanceIdx;
  local_20[0] = 0;
  pfVar2 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_20);
  if (0 < param_1->NumInstances) {
    pfVar1 = pfVar1 + iVar3;
    pfVar2 = pfVar2 + local_20[0] * param_1->PerInstanceFnInstanceIdx;
    do {
      iVar4 = iVar4 + 1;
      *pfVar1 = (float)((local_18.Ptr)->Size).field0_0x0._s_0.X;
      *pfVar2 = (float)((local_18.Ptr)->Size).field0_0x0._s_0.Y;
      pfVar1 = pfVar1 + local_30[0];
      pfVar2 = pfVar2 + local_20[0];
    } while (iVar4 < param_1->NumInstances);
  }
  return;
}

// VMReleaseResources @ 1491e6750

void __thiscall
UNiagaraDataInterfaceRenderTarget2D::VMReleaseResources
          (UNiagaraDataInterfaceRenderTarget2D *this,FVectorVMExternalFunctionContext *param_1)

{
  float *pfVar1;
  int iVar2;
  FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread> local_38 [2];
  int local_18 [4];
  
  VectorVM::FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread>::
  FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread>(local_38,param_1);
  iVar2 = 0;
  local_18[0] = 0;
  pfVar1 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_18);
  pfVar1 = pfVar1 + local_18[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < param_1->NumInstances) {
    do {
      if (*pfVar1 != 0.0) {
        (local_38[0].Ptr)->bReleaseResources = true;
        ((local_38[0].Ptr)->Size).field0_0x0._s_0.X = 1;
        ((local_38[0].Ptr)->Size).field0_0x0._s_0.Y = 1;
      }
      iVar2 = iVar2 + 1;
      pfVar1 = pfVar1 + local_18[0];
    } while (iVar2 < param_1->NumInstances);
  }
  return;
}

// VMSetFormat @ 1491e68e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceRenderTarget2D::VMSetFormat
          (UNiagaraDataInterfaceRenderTarget2D *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  bool bVar2;
  float *pfVar3;
  float *pfVar4;
  TObjectPtr<UObject> this_00;
  UClass *pUVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  undefined1 local_res10 [8];
  int local_60 [2];
  int local_58 [2];
  FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread> local_50;
  
  VectorVM::FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread>::
  FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread>(&local_50,param_1);
  local_58[0] = 0;
  pfVar3 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_58);
  lVar8 = (longlong)local_58[0];
  local_60[0] = 0;
  pfVar3 = pfVar3 + local_58[0] * param_1->PerInstanceFnInstanceIdx;
  pfVar4 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  lVar10 = (longlong)local_60[0];
  iVar9 = 0;
  iVar7 = param_1->NumInstances;
  pfVar4 = pfVar4 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < iVar7) {
    do {
      fVar1 = *pfVar3;
      pfVar3 = pfVar3 + lVar8;
      if ((local_50.Ptr == (FRenderTarget2DRWInstanceData_GameThread *)0x0) || (iVar7 != 1)) {
        *pfVar4 = 0.0;
      }
      else {
        *pfVar4 = -NAN;
        (local_50.Ptr)->Format = (ETextureRenderTargetFormat)fVar1;
        if ((this->bInheritUserParameterSettings != 0) &&
           (((local_50.Ptr)->RTUserParamBinding).UObjectOffset != -1)) {
          this_00 = FNiagaraParameterStore::GetUObject
                              (((local_50.Ptr)->RTUserParamBinding).BoundStore,(int)local_res10);
          if (*(longlong *)this_00.field0_0x0 == 0) {
LAB_1491e69e7:
            lVar6 = 0;
          }
          else {
            pUVar5 = Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
            bVar2 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar5);
            if (!bVar2) goto LAB_1491e69e7;
            lVar6 = *(longlong *)this_00.field0_0x0;
          }
          if ((lVar6 != 0) && (2 < (byte)LogNiagara._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          }
        }
      }
      pfVar4 = pfVar4 + lVar10;
      iVar7 = param_1->NumInstances;
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar7);
  }
  return;
}

// VMSetSize @ 1491e7370

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraDataInterfaceRenderTarget2D::VMSetSize
          (UNiagaraDataInterfaceRenderTarget2D *this,FVectorVMExternalFunctionContext *param_1)

{
  float fVar1;
  float fVar2;
  TRHIGlobal<int> TVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int local_60 [2];
  FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread> local_58 [2];
  int local_38 [4];
  
  VectorVM::FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread>::
  FUserPtrHandler<FRenderTarget2DRWInstanceData_GameThread>(local_58,param_1);
  local_38[0] = 0;
  pfVar5 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  iVar4 = local_38[0];
  lVar10 = (longlong)local_38[0];
  local_38[0] = 0;
  pfVar5 = pfVar5 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  pfVar6 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  iVar4 = local_38[0];
  lVar11 = (longlong)local_38[0];
  local_38[0] = 0;
  pfVar6 = pfVar6 + iVar4 * param_1->PerInstanceFnInstanceIdx;
  pfVar7 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_38);
  iVar9 = local_38[0] * param_1->PerInstanceFnInstanceIdx;
  local_60[0] = 0;
  pfVar8 = FVectorVMExternalFunctionContext::GetNextRegister(param_1,local_60);
  iVar12 = 0;
  iVar4 = param_1->NumInstances;
  pfVar8 = pfVar8 + local_60[0] * param_1->PerInstanceFnInstanceIdx;
  if (0 < iVar4) {
    pfVar7 = pfVar7 + iVar9;
    do {
      fVar1 = *pfVar5;
      fVar2 = *pfVar6;
      pfVar5 = pfVar5 + lVar10;
      pfVar6 = pfVar6 + lVar11;
      if ((((local_58[0].Ptr == (FRenderTarget2DRWInstanceData_GameThread *)0x0) || (iVar4 != 1)) ||
          ((int)fVar1 < 0)) || (((int)fVar2 < 0 || (*pfVar7 == 0.0)))) {
        *pfVar8 = 0.0;
      }
      else {
        *pfVar8 = -NAN;
        (local_58[0].Ptr)->bReleaseResources = false;
        iVar4 = (int)((float)(int)fVar1 *
                     NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
        TVar3 = GRHIGlobals.MaxTextureDimensions;
        if (iVar4 < GRHIGlobals.MaxTextureDimensions.Value) {
          TVar3.Value = iVar4;
        }
        iVar4 = 1;
        if (1 < TVar3.Value) {
          iVar4 = TVar3.Value;
        }
        ((local_58[0].Ptr)->Size).field0_0x0._s_0.X = iVar4;
        iVar4 = (int)((float)(int)fVar2 *
                     NiagaraDataInterfaceRenderTargetCommon::GResolutionMultiplier);
        TVar3 = GRHIGlobals.MaxTextureDimensions;
        if (iVar4 < GRHIGlobals.MaxTextureDimensions.Value) {
          TVar3.Value = iVar4;
        }
        iVar4 = 1;
        if (1 < TVar3.Value) {
          iVar4 = TVar3.Value;
        }
        ((local_58[0].Ptr)->Size).field0_0x0._s_0.Y = iVar4;
      }
      iVar4 = param_1->NumInstances;
      pfVar8 = pfVar8 + local_60[0];
      iVar12 = iVar12 + 1;
      pfVar7 = pfVar7 + local_38[0];
    } while (iVar12 < iVar4);
  }
  return;
}

// _getUObject @ 1491e8620

UObject * __thiscall
UNiagaraDataInterfaceRenderTarget2D::_getUObject(UNiagaraDataInterfaceRenderTarget2D *this)

{
  return (UObject *)&this[-1].SystemInstancesToProxyData_GT.field_0x18;
}

// operator() @ 15053e780

bool __thiscall
`UNiagaraDataInterfaceRenderTarget2D::PerInstanceTickPostSimulate'::__l35::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5251113490961136691>);
  if (bVar2) {
    if (*(longlong *)(**(longlong **)this + 0x50) == 0) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      local_res10[0] = *(FName *)(*(longlong *)(**(longlong **)this + 0x50) + 0x18);
      ::FName::ToString(local_res10,&local_18);
    }
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5251113490961136691>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053e814;
    }
  }
  bVar2 = false;
LAB_15053e814:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

