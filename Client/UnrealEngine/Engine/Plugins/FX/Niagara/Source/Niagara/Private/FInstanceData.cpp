// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 4

// FInstanceData @ 148e53ee0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInstanceData * __thiscall
FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData::FInstanceData
          (FInstanceData *this,FInstanceData *param_1)

{
  int iVar1;
  uint uVar2;
  
  (this->ChannelDataRTProxy).Object = (param_1->ChannelDataRTProxy).Object;
  (this->ChannelDataRTProxy).SharedReferenceCount.ReferenceController =
       (param_1->ChannelDataRTProxy).SharedReferenceCount.ReferenceController;
  (param_1->ChannelDataRTProxy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->ChannelDataRTProxy).Object = (FNiagaraDataChannelDataProxy *)0x0;
  this->bReadPrevFrame = param_1->bReadPrevFrame;
  iVar1 = param_1->NDCElementCountAtSpawn;
  (this->ParameterLayoutBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  this->NDCElementCountAtSpawn = iVar1;
  (this->ParameterLayoutBuffer).Buffer.Reference = (param_1->ParameterLayoutBuffer).Buffer.Reference
  ;
  (param_1->ParameterLayoutBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->ParameterLayoutBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->ParameterLayoutBuffer).SRV.Reference = (param_1->ParameterLayoutBuffer).SRV.Reference;
  (param_1->ParameterLayoutBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->ParameterLayoutBuffer).NumBytes = (param_1->ParameterLayoutBuffer).NumBytes;
  TResourceArray<unsigned_int,0>::TResourceArray<unsigned_int,0>
            (&this->ParameterLayoutData,&param_1->ParameterLayoutData);
  *(undefined8 *)&(this->GPUScriptParameterTableOffsets).field_0x0 = 0;
  *(undefined8 *)&(this->GPUScriptParameterTableOffsets).field_0x8 = 0;
  *(undefined8 *)&(this->GPUScriptParameterTableOffsets).field_0x20 = 0;
  *(undefined4 *)&(this->GPUScriptParameterTableOffsets).field_0x28 = 0;
  *(undefined4 *)&(this->GPUScriptParameterTableOffsets).field_0x2c = 0x80;
  *(undefined4 *)&(this->GPUScriptParameterTableOffsets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GPUScriptParameterTableOffsets).field_0x34 = 0;
  *(undefined8 *)&(this->GPUScriptParameterTableOffsets).field_0x40 = 0;
  *(undefined4 *)&(this->GPUScriptParameterTableOffsets).field_0x48 = 0;
  TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->GPUScriptParameterTableOffsets,
             (TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
              *)&param_1->GPUScriptParameterTableOffsets);
  (this->NDCSpawnData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NDCSpawnData).AllocatorInstance.Data = (param_1->NDCSpawnData).AllocatorInstance.Data;
  (param_1->NDCSpawnData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NDCSpawnData).ArrayNum = (param_1->NDCSpawnData).ArrayNum;
  (this->NDCSpawnData).ArrayMax = (param_1->NDCSpawnData).ArrayMax;
  (param_1->NDCSpawnData).ArrayNum = 0;
  (param_1->NDCSpawnData).ArrayMax = 0;
  this->NDCSpawnDataBuffer = param_1->NDCSpawnDataBuffer;
  uVar2 = param_1->ConsumeInstanceCountOffset;
  (this->GPUBuffer).Reference = (FNiagaraDataBuffer *)0x0;
  this->ConsumeInstanceCountOffset = uVar2;
  (this->GPUBuffer).Reference = (param_1->GPUBuffer).Reference;
  (param_1->GPUBuffer).Reference = (FNiagaraDataBuffer *)0x0;
  return this;
}

// FInstanceData @ 148e54010

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FInstanceData * __thiscall
FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData::FInstanceData
          (FInstanceData *this,FInstanceData *param_1)

{
  bool bVar1;
  
  (this->ChannelDataRTProxy).Object = (param_1->ChannelDataRTProxy).Object;
  (this->ChannelDataRTProxy).SharedReferenceCount.ReferenceController =
       (param_1->ChannelDataRTProxy).SharedReferenceCount.ReferenceController;
  (param_1->ChannelDataRTProxy).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->ChannelDataRTProxy).Object = (FNiagaraDataChannelDataProxy *)0x0;
  (this->ParameterLayoutBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->ParameterLayoutBuffer).Buffer.Reference = (param_1->ParameterLayoutBuffer).Buffer.Reference
  ;
  (param_1->ParameterLayoutBuffer).Buffer.Reference = (FRHIBuffer *)0x0;
  (this->ParameterLayoutBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->ParameterLayoutBuffer).SRV.Reference = (param_1->ParameterLayoutBuffer).SRV.Reference;
  (param_1->ParameterLayoutBuffer).SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->ParameterLayoutBuffer).NumBytes = (param_1->ParameterLayoutBuffer).NumBytes;
  TResourceArray<unsigned_int,0>::TResourceArray<unsigned_int,0>
            (&this->ParameterLayoutData,&param_1->ParameterLayoutData);
  *(undefined8 *)&(this->GPUScriptParameterTableOffsets).field_0x0 = 0;
  *(undefined8 *)&(this->GPUScriptParameterTableOffsets).field_0x8 = 0;
  *(undefined8 *)&(this->GPUScriptParameterTableOffsets).field_0x20 = 0;
  *(undefined4 *)&(this->GPUScriptParameterTableOffsets).field_0x28 = 0;
  *(undefined4 *)&(this->GPUScriptParameterTableOffsets).field_0x2c = 0x80;
  *(undefined4 *)&(this->GPUScriptParameterTableOffsets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GPUScriptParameterTableOffsets).field_0x34 = 0;
  *(undefined8 *)&(this->GPUScriptParameterTableOffsets).field_0x40 = 0;
  *(undefined4 *)&(this->GPUScriptParameterTableOffsets).field_0x48 = 0;
  TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
              *)&this->GPUScriptParameterTableOffsets,
             (TSet<TTuple<FNiagaraCompileHash,unsigned_int>,TDefaultMapHashableKeyFuncs<FNiagaraCompileHash,unsigned_int,0>,FDefaultSetAllocator>
              *)&param_1->GPUScriptParameterTableOffsets);
  (this->BufferForCPU).Reference = (FNiagaraDataBuffer *)0x0;
  (this->BufferForCPU).Reference = (param_1->BufferForCPU).Reference;
  (param_1->BufferForCPU).Reference = (FNiagaraDataBuffer *)0x0;
  (this->GPUBuffer).Reference = (FNiagaraDataBuffer *)0x0;
  (this->GPUBuffer).Reference = (param_1->GPUBuffer).Reference;
  (param_1->GPUBuffer).Reference = (FNiagaraDataBuffer *)0x0;
  this->bPublishToGame = param_1->bPublishToGame;
  this->bPublishToCPU = param_1->bPublishToCPU;
  this->bPublishToGPU = param_1->bPublishToGPU;
  this->AllocationCount = param_1->AllocationCount;
  *(undefined8 *)&(this->LwcTile).field0_0x0 = *(undefined8 *)&(param_1->LwcTile).field0_0x0;
  (this->LwcTile).field0_0x0._s_0.Z = (param_1->LwcTile).field0_0x0._s_0.Z;
  bVar1 = param_1->bCapturingSimCache;
  (this->PendingSimCacheReadbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->bCapturingSimCache = bVar1;
  (this->PendingSimCacheReadbacks).AllocatorInstance.Data =
       (param_1->PendingSimCacheReadbacks).AllocatorInstance.Data;
  (param_1->PendingSimCacheReadbacks).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingSimCacheReadbacks).ArrayNum = (param_1->PendingSimCacheReadbacks).ArrayNum;
  (this->PendingSimCacheReadbacks).ArrayMax = (param_1->PendingSimCacheReadbacks).ArrayMax;
  (param_1->PendingSimCacheReadbacks).ArrayNum = 0;
  (param_1->PendingSimCacheReadbacks).ArrayMax = 0;
  return this;
}

// ~FInstanceData @ 148e560e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxy_DataChannelRead::FInstanceData::~FInstanceData(FInstanceData *this)

{
  FNiagaraDataBuffer *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  code *pcVar4;
  bool bVar5;
  
  pFVar1 = (this->GPUBuffer).Reference;
  if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
    if ((int)pFVar1->_padding_ < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
    UNLOCK();
  }
  pFVar2 = (this->NDCSpawnData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->GPUScriptParameterTableOffsets).field_0x48 = 0;
  pvVar3 = *(void **)&(this->GPUScriptParameterTableOffsets).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GPUScriptParameterTableOffsets);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->ParameterLayoutData)._padding_);
  (this->ParameterLayoutData)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  this_00 = (this->ParameterLayoutBuffer).SRV.Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->ParameterLayoutBuffer).Buffer.Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChannelDataRTProxy).SharedReferenceCount.ReferenceController);
  return;
}

// ~FInstanceData @ 148e561b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxy_DataChannelWrite::FInstanceData::~FInstanceData(FInstanceData *this)

{
  FScriptContainerElement *pFVar1;
  FNiagaraDataBuffer *pFVar2;
  void *pvVar3;
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  code *pcVar4;
  bool bVar5;
  
  DestructItems<TRefCountPtr<FNiagaraDataBuffer>,int>
            ((TRefCountPtr<FNiagaraDataBuffer> *)
             (this->PendingSimCacheReadbacks).AllocatorInstance.Data,
             (this->PendingSimCacheReadbacks).ArrayNum);
  pFVar1 = (this->PendingSimCacheReadbacks).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->GPUBuffer).Reference;
  if (pFVar2 != (FNiagaraDataBuffer *)0x0) {
    if ((int)pFVar2->_padding_ < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + -1;
    UNLOCK();
  }
  pFVar2 = (this->BufferForCPU).Reference;
  if (pFVar2 != (FNiagaraDataBuffer *)0x0) {
    if ((int)pFVar2->_padding_ < 1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    LOCK();
    *(int *)&pFVar2->_padding_ = (int)pFVar2->_padding_ + -1;
    UNLOCK();
  }
  *(undefined4 *)&(this->GPUScriptParameterTableOffsets).field_0x48 = 0;
  pvVar3 = *(void **)&(this->GPUScriptParameterTableOffsets).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraCompileHash,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GPUScriptParameterTableOffsets);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&(this->ParameterLayoutData)._padding_);
  (this->ParameterLayoutData)._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  this_00 = (this->ParameterLayoutBuffer).SRV.Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->ParameterLayoutBuffer).Buffer.Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ChannelDataRTProxy).SharedReferenceCount.ReferenceController);
  return;
}

