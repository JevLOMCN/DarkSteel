// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// FRuntimeVirtualTextureProducer @ 1458cbfd0

FRuntimeVirtualTextureProducer * __thiscall
FRuntimeVirtualTextureProducer::FRuntimeVirtualTextureProducer
          (FRuntimeVirtualTextureProducer *this,FVTProducerDescription *param_1,int param_2,
          ERuntimeVirtualTextureMaterialType param_3,bool param_4,FSceneInterface *param_5,
          TTransform<double> *param_6,TBox<double> *param_7)

{
  TVector4<float>_u_0 local_18;
  
  this->_padding_ = (longlong)&___7FRuntimeVirtualTextureProducer__6B_;
  local_18._0_8_ = 0;
  local_18._8_8_ = 0;
  FRuntimeVirtualTextureFinalizer::FRuntimeVirtualTextureFinalizer
            (&this->Finalizer,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
             (TVector4<float> *)&local_18._s_0);
  return this;
}

// FRuntimeVirtualTextureProducer @ 1458cc040

FRuntimeVirtualTextureProducer * __thiscall
FRuntimeVirtualTextureProducer::FRuntimeVirtualTextureProducer
          (FRuntimeVirtualTextureProducer *this,FVTProducerDescription *param_1,int param_2,
          ERuntimeVirtualTextureMaterialType param_3,bool param_4,FSceneInterface *param_5,
          TTransform<double> *param_6,TBox<double> *param_7,TVector4<float> *param_8)

{
  this->_padding_ = (longlong)&___7FRuntimeVirtualTextureProducer__6B_;
  FRuntimeVirtualTextureFinalizer::FRuntimeVirtualTextureFinalizer
            (&this->Finalizer,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return this;
}

// ~FRuntimeVirtualTextureProducer @ 1458cf610

void __thiscall
FRuntimeVirtualTextureProducer::~FRuntimeVirtualTextureProducer
          (FRuntimeVirtualTextureProducer *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRuntimeVirtualTextureProducer__6B_;
  (this->Finalizer)._padding_ = (longlong)&___7FRuntimeVirtualTextureFinalizer__6B_;
  pFVar1 = (this->Finalizer).Batches.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Finalizer).Tiles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IVirtualTexture__6B_;
  return;
}

// IsPageStreamed @ 14590eb90

bool __thiscall
FRuntimeVirtualTextureProducer::IsPageStreamed
          (FRuntimeVirtualTextureProducer *this,uchar param_1,uint param_2)

{
  return false;
}

// ProducePageData @ 1459133a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IVirtualTextureFinalizer * __thiscall
FRuntimeVirtualTextureProducer::ProducePageData
          (FRuntimeVirtualTextureProducer *this,FRHICommandListBase *param_1,Type param_2,
          EVTProducePageFlags param_3,FVirtualTextureProducerHandle *param_4,uchar param_5,
          uchar param_6,ulong64 param_7,ulong64 param_8,FVTProduceTargetLayer *param_9)

{
  int *piVar1;
  TArray<FRuntimeVirtualTextureFinalizer::FTileEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  IVirtualTextureFinalizer *pIVar7;
  longlong lVar8;
  undefined1 auStack_d8 [32];
  IPooledRenderTarget **local_b8;
  FScriptContainerElement *local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined8 local_98;
  IPooledRenderTarget *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  FRHITexture *pFStack_70;
  IPooledRenderTarget *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  FRHITexture *pFStack_50;
  IPooledRenderTarget *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  FRHITexture *pFStack_30;
  ulong64 local_28;
  uchar uStack_20;
  undefined7 uStack_1f;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_78 = CONCAT44(local_78._4_4_,UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z);
  local_58 = CONCAT44(local_58._4_4_,UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z);
  local_38 = CONCAT44(local_38._4_4_,UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z);
  local_28 = param_7;
  uStack_20 = param_6;
  local_88 = (IPooledRenderTarget *)0x0;
  uStack_80 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  pFStack_70 = (FRHITexture *)0x0;
  local_68 = (IPooledRenderTarget *)0x0;
  uStack_60 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  pFStack_50 = (FRHITexture *)0x0;
  local_48 = (IPooledRenderTarget *)0x0;
  uStack_40 = UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._0_8_;
  pFStack_30 = (FRHITexture *)0x0;
  if (param_9->PooledRenderTarget != (IPooledRenderTarget *)0x0) {
    local_88 = param_9->PooledRenderTarget;
    uStack_80 = *(undefined8 *)&(param_9->pPageLocation).field0_0x0;
    local_78 = *(undefined8 *)((longlong)&(param_9->pPageLocation).field0_0x0 + 8);
    pFStack_70 = param_9->TextureRHI;
  }
  if (param_9[1].PooledRenderTarget != (IPooledRenderTarget *)0x0) {
    local_68 = param_9[1].PooledRenderTarget;
    uStack_60 = *(undefined8 *)&param_9[1].pPageLocation.field0_0x0;
    local_58 = *(undefined8 *)((longlong)&param_9[1].pPageLocation.field0_0x0 + 8);
    pFStack_50 = param_9[1].TextureRHI;
  }
  if (param_9[2].PooledRenderTarget != (IPooledRenderTarget *)0x0) {
    local_48 = param_9[2].PooledRenderTarget;
    uStack_40 = *(undefined8 *)&param_9[2].pPageLocation.field0_0x0;
    local_38 = *(undefined8 *)((longlong)&param_9[2].pPageLocation.field0_0x0 + 8);
    pFStack_30 = param_9[2].TextureRHI;
  }
  pTVar2 = &(this->Finalizer).Tiles;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)&local_88) &&
     (lVar8 = (longlong)(this->Finalizer).Tiles.ArrayMax,
     (FScriptContainerElement *)&local_88 < pFVar3 + lVar8 * 0x70)) {
    local_a0 = (longlong)(this->Finalizer).Tiles.ArrayNum;
    local_98 = 0x70;
    local_b8 = &local_88;
    local_b0 = pFVar3;
    local_a8 = lVar8;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pIVar7 = (IVirtualTextureFinalizer *)(*pcVar4)();
      return pIVar7;
    }
  }
  iVar6 = (this->Finalizer).Tiles.ArrayNum;
  piVar1 = &(this->Finalizer).Tiles.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x870,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->Finalizer).Tiles.ArrayNum = iVar6 + 1;
  lVar8 = (longlong)iVar6 * 0x70;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(IPooledRenderTarget **)(pFVar3 + lVar8) = local_88;
  *(undefined8 *)(pFVar3 + lVar8 + 8) = uStack_80;
  *(undefined8 *)(pFVar3 + lVar8 + 0x10) = local_78;
  *(FRHITexture **)(pFVar3 + lVar8 + 0x10 + 8) = pFStack_70;
  *(IPooledRenderTarget **)(pFVar3 + lVar8 + 0x20) = local_68;
  *(undefined8 *)(pFVar3 + lVar8 + 0x20 + 8) = uStack_60;
  *(undefined8 *)(pFVar3 + lVar8 + 0x30) = local_58;
  *(FRHITexture **)(pFVar3 + lVar8 + 0x30 + 8) = pFStack_50;
  *(IPooledRenderTarget **)(pFVar3 + lVar8 + 0x40) = local_48;
  *(undefined8 *)(pFVar3 + lVar8 + 0x40 + 8) = uStack_40;
  *(undefined8 *)(pFVar3 + lVar8 + 0x50) = local_38;
  *(FRHITexture **)(pFVar3 + lVar8 + 0x50 + 8) = pFStack_30;
  *(ulong64 *)(pFVar3 + lVar8 + 0x60) = local_28;
  *(ulonglong *)(pFVar3 + lVar8 + 0x60 + 8) = CONCAT71(uStack_1f,uStack_20);
  return (IVirtualTextureFinalizer *)&this->Finalizer;
}

// RequestPageData @ 14591b230

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVTRequestPageResult * __thiscall
FRuntimeVirtualTextureProducer::RequestPageData
          (FRuntimeVirtualTextureProducer *this,FVTRequestPageResult *__return_storage_ptr__,
          FRHICommandListBase *param_1,FVirtualTextureProducerHandle *param_2,uchar param_3,
          uchar param_4,ulong64 param_5,EVTRequestPagePriority param_6)

{
  FSceneInterface *pFVar1;
  longlong lVar2;
  
  pFVar1 = (this->Finalizer).Scene;
  __return_storage_ptr__->Status = Invalid;
  __return_storage_ptr__->Handle = 0;
  if (pFVar1 != (FSceneInterface *)0x0) {
    lVar2 = (**(code **)(pFVar1->_padding_ + 0x420))(pFVar1);
    if (lVar2 != 0) {
      lVar2 = (**(code **)(pFVar1->_padding_ + 0x420))(pFVar1);
      if (*(char *)(lVar2 + 0x38e1) != '\0') {
        __return_storage_ptr__->Status = Available;
        return __return_storage_ptr__;
      }
    }
  }
  __return_storage_ptr__->Status = Saturated;
  return __return_storage_ptr__;
}

