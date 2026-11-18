// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// InitRHI @ 1448415d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FDFDummyByteAddress::InitRHI(FDFDummyByteAddress *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  FRHIBuffer *pFVar2;
  longlong lVar3;
  FRHIRayTracingScene *pFVar4;
  FRDGPooledBuffer *pFVar5;
  FRHIShaderResourceView *pFVar6;
  FRDGPooledBuffer *pFVar7;
  FRHIBuffer *local_res8;
  FRHIBufferSRVCreateInfo local_c8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int iStack_a4;
  wchar_t *local_a0;
  undefined8 uStack_98;
  ERHIAccess local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  EBufferUsageFlags EStack_70;
  undefined4 uStack_6c;
  undefined8 local_60;
  undefined8 uStack_58;
  wchar_t *local_50;
  undefined8 uStack_48;
  ERHIAccess local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 local_30;
  
  pFVar7 = (FRDGPooledBuffer *)0x0;
  local_c8.NumElements = 0x10109;
  local_c8.Format = PF_G16;
  local_c8._1_3_ = 0;
  local_c8.StartOffsetBytes = 1;
  local_c8.RayTracingScene = (FRHIRayTracingScene *)0x0;
  local_b0 = 4;
  local_78 = 0x100000004;
  uStack_ac = 4;
  iStack_a4 = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  _EStack_70 = CONCAT44(local_c8._12_4_,0x111);
  local_a0 = L"FDFDummyByteAddress";
  uStack_98 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_a8 = 0x10111;
  local_90 = RHIGetDefaultResourceState
                       (StructuredBuffer|ShaderResource|ByteAddressBuffer|Static,false);
  local_60 = CONCAT44(uStack_ac,local_b0);
  uStack_58 = CONCAT44(iStack_a4,uStack_a8);
  uStack_38 = CONCAT44(uStack_84,uStack_88);
  local_50 = local_a0;
  uStack_48 = uStack_98;
  local_30 = CONCAT44(uStack_7c,uStack_80);
  _local_40 = CONCAT44(1,local_90);
  FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
  pFVar5 = ::operator_new(0xc0);
  pFVar2 = local_res8;
  if (pFVar5 != (FRDGPooledBuffer *)0x0) {
    if (local_res8 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_res8);
    }
    pFVar4 = local_c8.RayTracingScene;
    *(undefined4 *)&pFVar5->_padding_ = 0;
    pFVar5->_padding_ = (longlong)&___7FRDGPooledBuffer__6B_;
    (pFVar5->Desc).BytesPerElement = (uint)local_78;
    (pFVar5->Desc).NumElements = local_78._4_4_;
    (pFVar5->Desc).Usage = EStack_70;
    *(undefined4 *)&(pFVar5->Desc).field_0xc = uStack_6c;
    local_c8.RayTracingScene = (FRHIRayTracingScene *)0x0;
    (pFVar5->Desc).Metadata = (FShaderParametersMetadata *)pFVar4;
    (pFVar5->Buffer).Reference = pFVar2;
    pFVar5->CachedSRV = (FRHIShaderResourceView *)0x0;
    (pFVar5->ViewCache).UAVs.AllocatorInstance.SecondaryData =
         (ForElementType<TTuple<FRHIBufferUAVCreateInfo,TRefCountPtr<FRHIUnorderedAccessView>_>_>)
         0x0;
    (pFVar5->ViewCache).UAVs.ArrayNum = 0;
    (pFVar5->ViewCache).UAVs.ArrayMax = 1;
    (pFVar5->ViewCache).SRVs.AllocatorInstance.SecondaryData =
         (ForElementType<TTuple<FRHIBufferSRVCreateInfo,TRefCountPtr<FRHIShaderResourceView>_>_>)0x0
    ;
    (pFVar5->ViewCache).SRVs.ArrayNum = 0;
    (pFVar5->ViewCache).SRVs.ArrayMax = 1;
    (pFVar5->Fences).bIsSet = false;
    pFVar2 = (pFVar5->Buffer).Reference;
    local_c8.Format = PF_Unknown;
    local_c8._1_3_ = 0;
    local_c8.StartOffsetBytes = 0;
    pFVar5->Name = L"FDFDummyByteAddress";
    pFVar5->CommittedSizeInBytes = 0xffffffffffffffff;
    pFVar5->NameUpdatedViewCacheNum = 0;
    pFVar5->NumAllocatedElements = local_78._4_4_;
    pFVar5->LastUsedFrame = 0;
    local_c8.NumElements = 0xffffffff;
    local_c8._12_4_ = 0;
    pFVar6 = FRHIBufferViewCache::GetOrCreateSRV(&pFVar5->ViewCache,param_1,pFVar2,&local_c8);
    pFVar5->CachedSRV = pFVar6;
    *(undefined4 *)&(pFVar5->Fences).TypedValue.field_0x11 = 0x1000000;
    (pFVar5->Fences).TypedValue.Graphics = 0xffffffff;
    (pFVar5->Fences).TypedValue.AsyncCompute = 0xffffffff;
    (pFVar5->Fences).TypedValue.GraphicsForkJoin.Min = 0xffffffff;
    (pFVar5->Fences).TypedValue.GraphicsForkJoin.Max = 0;
    (pFVar5->Fences).TypedValue.Pipelines = None;
    pFVar7 = pFVar5;
  }
  pFVar5 = (this->PooledBuffer).Reference;
  if (pFVar5 != pFVar7) {
    (this->PooledBuffer).Reference = pFVar7;
    if (pFVar7 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&pFVar7->_padding_ = (int)pFVar7->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar5 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar5->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar5->_padding_)(pFVar5,1);
      }
    }
  }
  if (local_res8 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_res8);
  }
  return;
}

// ReleaseRHI @ 144841840

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FDFDummyByteAddress::ReleaseRHI(FDFDummyByteAddress *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  pFVar2 = (this->PooledBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    (this->PooledBuffer).Reference = (FRDGPooledBuffer *)0x0;
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144841873. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

