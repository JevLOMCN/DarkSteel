// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// ~FVirtualTextureAdapterProducer @ 1489b9cb0

void __thiscall
FVirtualTextureAdapterProducer::~FVirtualTextureAdapterProducer
          (FVirtualTextureAdapterProducer *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->Finalizer).TilesToRender.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<FRHIShaderResourceView>,int>
            ((TRefCountPtr<FRHIShaderResourceView> *)
             (this->Finalizer).SourceSRVs.AllocatorInstance.Data,
             (this->Finalizer).SourceSRVs.ArrayNum);
  pFVar1 = (this->Finalizer).SourceSRVs.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IVirtualTexture__6B_;
  return;
}

// IsPageStreamed @ 1489f96e0

bool __thiscall
FVirtualTextureAdapterProducer::IsPageStreamed
          (FVirtualTextureAdapterProducer *this,uchar param_1,uint param_2)

{
  return false;
}

// ProducePageData @ 148a03340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

IVirtualTextureFinalizer * __thiscall
FVirtualTextureAdapterProducer::ProducePageData
          (FVirtualTextureAdapterProducer *this,FRHICommandListBase *param_1,Type param_2,
          EVTProducePageFlags param_3,FVirtualTextureProducerHandle *param_4,uchar param_5,
          uchar param_6,ulong64 param_7,ulong64 param_8,FVTProduceTargetLayer *param_9)

{
  int *piVar1;
  TArray<FVirtualTextureAdapterFinalizer::FTileEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  IVirtualTextureFinalizer *pIVar7;
  longlong lVar8;
  IPooledRenderTarget *local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  FRHITexture *pFStack_20;
  ulong64 local_18;
  uchar uStack_10;
  undefined7 uStack_f;
  
  pTVar2 = &(this->Finalizer).TilesToRender;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  local_38 = param_9->PooledRenderTarget;
  uStack_30 = *(undefined8 *)&(param_9->pPageLocation).field0_0x0;
  local_28 = *(undefined8 *)((longlong)&(param_9->pPageLocation).field0_0x0 + 8);
  pFStack_20 = param_9->TextureRHI;
  local_18 = param_7;
  uStack_10 = param_6;
  if ((pFVar3 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 <
      pFVar3 + (longlong)(this->Finalizer).TilesToRender.ArrayMax * 0x30)) {
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
  iVar6 = (this->Finalizer).TilesToRender.ArrayNum;
  piVar1 = &(this->Finalizer).TilesToRender.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&pTVar2->AllocatorInstance,piVar1);
  }
  lVar8 = (longlong)iVar6;
  (this->Finalizer).TilesToRender.ArrayNum = iVar6 + 1;
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  *(IPooledRenderTarget **)(pFVar3 + lVar8 * 0x30) = local_38;
  *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 8) = uStack_30;
  *(undefined8 *)(pFVar3 + lVar8 * 0x30 + 0x10) = local_28;
  *(FRHITexture **)(pFVar3 + lVar8 * 0x30 + 0x10 + 8) = pFStack_20;
  *(ulong64 *)(pFVar3 + lVar8 * 0x30 + 0x20) = local_18;
  *(ulonglong *)(pFVar3 + lVar8 * 0x30 + 0x20 + 8) = CONCAT71(uStack_f,uStack_10);
  return (IVirtualTextureFinalizer *)&this->Finalizer;
}

// RequestPageData @ 148a0e730

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVTRequestPageResult * __thiscall
FVirtualTextureAdapterProducer::RequestPageData
          (FVirtualTextureAdapterProducer *this,FVTRequestPageResult *__return_storage_ptr__,
          FRHICommandListBase *param_1,FVirtualTextureProducerHandle *param_2,uchar param_3,
          uchar param_4,ulong64 param_5,EVTRequestPagePriority param_6)

{
  int iVar1;
  EVTRequestPageStatus EVar2;
  
  iVar1 = this->UnstreamedMipCount;
  __return_storage_ptr__->Handle = 0;
  EVar2 = Available;
  if ((int)(uint)param_4 < iVar1) {
    EVar2 = Invalid;
  }
  __return_storage_ptr__->Status = EVar2;
  return __return_storage_ptr__;
}

