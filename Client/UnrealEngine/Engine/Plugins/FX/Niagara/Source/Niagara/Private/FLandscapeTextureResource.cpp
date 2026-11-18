// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 7

// FLandscapeTextureResource @ 149168f20

FLandscapeTextureResource * __thiscall
FLandscapeTextureResource::FLandscapeTextureResource
          (FLandscapeTextureResource *this,TIntPoint<int> *param_1)

{
  FRenderResource::FRenderResource((FRenderResource *)this);
  this->_padding_ = (longlong)&___7FLandscapeTextureResource__6B_;
  (this->HeightTexture).Buffer.Reference = (FRHITexture *)0x0;
  (this->HeightTexture).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->HeightTexture).NumBytes = 0;
  (this->PhysMatTexture).Buffer.Reference = (FRHITexture *)0x0;
  (this->PhysMatTexture).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->PhysMatTexture).NumBytes = 0;
  (this->CellCount).field0_0x0 = param_1->field0_0x0;
  (this->HeightValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HeightValues).ArrayNum = 0;
  (this->HeightValues).ArrayMax = 0;
  (this->PhysMatValues).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PhysMatValues).ArrayNum = 0;
  (this->PhysMatValues).ArrayMax = 0;
  this->GpuMemoryUsage = 0;
  return this;
}

// ~FLandscapeTextureResource @ 14916b000

void __thiscall
FLandscapeTextureResource::~FLandscapeTextureResource(FLandscapeTextureResource *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PhysMatValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HeightValues).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FTextureReadBuffer2D::~FTextureReadBuffer2D(&this->PhysMatTexture);
  FTextureReadBuffer2D::~FTextureReadBuffer2D(&this->HeightTexture);
  FRenderResource::~FRenderResource((FRenderResource *)this);
  return;
}

// EditHeightValues @ 149178610

TArray<float,TSizedDefaultAllocator<32>_> * __thiscall
FLandscapeTextureResource::EditHeightValues(FLandscapeTextureResource *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  undefined4 local_18 [4];
  
  uVar7 = (ulonglong)(uint)param_1;
  pTVar6 = &this->HeightValues;
  local_18[0] = 0;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7);
  }
  piVar1 = &(this->HeightValues).ArrayMax;
  if ((this->HeightValues).ArrayMax < param_1) {
    (this->HeightValues).ArrayNum = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1,&pTVar6->AllocatorInstance,0,piVar1);
  }
  (this->HeightValues).ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_1,&pTVar6->AllocatorInstance,0,piVar1);
  }
  if (0 < param_1) {
    do {
      pFVar2 = (pTVar6->AllocatorInstance).Data;
      if ((pFVar2 <= (FScriptContainerElement *)local_18) &&
         ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)*piVar1 * 4)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<float,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar5 = (this->HeightValues).ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar6->AllocatorInstance,piVar1);
      }
      (this->HeightValues).ArrayNum = iVar5 + 1;
      *(undefined4 *)((pTVar6->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_18[0];
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return pTVar6;
}

// EditPhysMatValues @ 149178760

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FLandscapeTextureResource::EditPhysMatValues(FLandscapeTextureResource *this,int param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar6;
  ulonglong uVar7;
  FScriptContainerElement local_18 [16];
  
  uVar7 = (ulonglong)(uint)param_1;
  pTVar6 = &this->PhysMatValues;
  local_18[0] = (FScriptContainerElement)0xff;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar7);
  }
  piVar1 = &(this->PhysMatValues).ArrayMax;
  if ((this->PhysMatValues).ArrayMax < param_1) {
    (this->PhysMatValues).ArrayNum = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_1,&pTVar6->AllocatorInstance,0,piVar1);
  }
  (this->PhysMatValues).ArrayNum = 0;
  if (*piVar1 != param_1) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,param_1,&pTVar6->AllocatorInstance,0,piVar1);
  }
  if (0 < param_1) {
    do {
      pFVar2 = (pTVar6->AllocatorInstance).Data;
      if ((pFVar2 <= local_18) && (local_18 < pFVar2 + *piVar1)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pTVar6 = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(*pcVar3)();
          return pTVar6;
        }
      }
      iVar5 = (this->PhysMatValues).ArrayNum;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x101,&pTVar6->AllocatorInstance,piVar1);
      }
      (this->PhysMatValues).ArrayNum = iVar5 + 1;
      (pTVar6->AllocatorInstance).Data[iVar5] = local_18[0];
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return pTVar6;
}

// InitRHI @ 1491851c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FLandscapeTextureResource::InitRHI(FLandscapeTextureResource *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar8;
  FName local_res8;
  FName local_res18 [2];
  FStatMessage local_78;
  FResourceBulkDataInterface local_68;
  FScriptContainerElement *local_60;
  int local_58;
  FResourceBulkDataInterface local_50;
  FScriptContainerElement *local_48;
  int local_40;
  
  iVar8 = (this->HeightValues).ArrayNum;
  if (iVar8 != 0) {
    pFVar2 = (this->HeightValues).AllocatorInstance.Data;
    if ((iVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_58 = iVar8 * 4;
    local_68 = (FResourceBulkDataInterface)&___7FResourceBulkDataArrayView__6B_;
    local_60 = pFVar2;
    FTextureReadBuffer2D::Initialize
              (&this->HeightTexture,param_1,L"FLandscapeTextureResource_HeightTexture",4,
               (this->CellCount).field0_0x0._s_0.X,(this->CellCount).field0_0x0._s_0.Y,PF_R32_FLOAT,
               ShaderResource,&local_68);
    local_68 = (FResourceBulkDataInterface)&___7FResourceBulkDataInterface__6B_;
  }
  iVar8 = (this->PhysMatValues).ArrayNum;
  if (iVar8 != 0) {
    pFVar2 = (this->PhysMatValues).AllocatorInstance.Data;
    if ((iVar8 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_50 = (FResourceBulkDataInterface)&___7FResourceBulkDataArrayView__6B_;
    local_48 = pFVar2;
    local_40 = iVar8;
    FTextureReadBuffer2D::Initialize
              (&this->PhysMatTexture,param_1,L"FLandscapeTextureResource_PhysMatTexture",1,
               (this->CellCount).field0_0x0._s_0.X,(this->CellCount).field0_0x0._s_0.Y,PF_R8_UINT,
               ShaderResource,&local_50);
    local_50 = (FResourceBulkDataInterface)&___7FResourceBulkDataInterface__6B_;
  }
  piVar1 = &(this->HeightValues).ArrayMax;
  (this->HeightValues).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->HeightValues).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PhysMatValues).ArrayMax;
  (this->PhysMatValues).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->PhysMatValues).AllocatorInstance,0,piVar1);
  }
  if ((this->GpuMemoryUsage != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("GpuMemoryUsage == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceLandscape.cpp"
                         ,0x2f6,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = (this->PhysMatTexture).NumBytes + (this->HeightTexture).NumBytes;
  this->GpuMemoryUsage = iVar8;
  if (iVar8 != 0) {
    FVar7 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar6 = ::FName::FName(local_res18,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar6,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar7;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar3;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_78.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_res8 = FVar3;
      local_78.StatData.Pad = (uchar  [8])(longlong)iVar8;
      local_78.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_78);
      FStatsTrace::Add(&local_res8,(longlong)iVar8);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// ReleaseRHI @ 14918a8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FLandscapeTextureResource::ReleaseRHI(FLandscapeTextureResource *this)

{
  FRHITexture *pFVar1;
  FRHIShaderResourceView *pFVar2;
  FName FVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar auVar6 [8];
  FName local_res8;
  FStatMessage local_28;
  
  (this->HeightTexture).NumBytes = 0;
  pFVar1 = (this->HeightTexture).Buffer.Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (this->HeightTexture).Buffer.Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->HeightTexture).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->HeightTexture).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  (this->PhysMatTexture).NumBytes = 0;
  pFVar1 = (this->PhysMatTexture).Buffer.Reference;
  if (pFVar1 != (FRHITexture *)0x0) {
    (this->PhysMatTexture).Buffer.Reference = (FRHITexture *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->PhysMatTexture).SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->PhysMatTexture).SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  auVar6 = (uchar  [8])(longlong)this->GpuMemoryUsage;
  if (auVar6 != (uchar  [8])0x0) {
    FVar5 = StatPtr_STAT_NiagaraGPUDataInterfaceMemory;
    if (StatPtr_STAT_NiagaraGPUDataInterfaceMemory ==
        (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)0x0) {
      pFVar4 = ::FName::FName(&local_res8,"STAT_NiagaraGPUDataInterfaceMemory");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGPUDataInterfaceMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGPUDataInterfaceMemory,
                         *pFVar4,L"Niagara GPU data interface memory","STATGROUP_Niagara",
                         "STATCAT_Niagara",L"Niagara",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar3 = *(FName *)FVar5;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar3;
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_28.NameAndInfo.Number = FVar3.Number & 0xffffafff | 0xa000;
      local_res8 = FVar3;
      local_28.StatData.Pad = auVar6;
      local_28.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_28);
      FStatsTrace::Add(&local_res8,(long64)auVar6);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  this->GpuMemoryUsage = 0;
  return;
}

// ReleaseSourceData @ 14918aac0

void __thiscall FLandscapeTextureResource::ReleaseSourceData(FLandscapeTextureResource *this)

{
  int *piVar1;
  
  piVar1 = &(this->HeightValues).ArrayMax;
  (this->HeightValues).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->HeightValues).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->PhysMatValues).ArrayMax;
  (this->PhysMatValues).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->PhysMatValues).AllocatorInstance,0,piVar1);
  }
  return;
}

