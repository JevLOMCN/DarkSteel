// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FMorphVertexBufferPool @ 148620770

FMorphVertexBufferPool * __thiscall
FMorphVertexBufferPool::FMorphVertexBufferPool
          (FMorphVertexBufferPool *this,FSkeletalMeshRenderData *param_1,int param_2,Type param_3)

{
  code *pcVar1;
  bool bVar2;
  FMorphVertexBufferPool *pFVar3;
  FMorphVertexBuffer local_f8;
  FMorphVertexBuffer local_90;
  
  this->_padding_ = (longlong)&___7FMorphVertexBufferPool__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)this->MorphVertexBuffers);
  this->MorphVertexBuffers[0].bHasBeenUpdated = false;
  this->MorphVertexBuffers[0].bNeedsInitialClear = true;
  this->MorphVertexBuffers[0]._padding_ = (longlong)&___7FMorphVertexBuffer__6B_;
  this->MorphVertexBuffers[0].SectionIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MorphVertexBuffers[0].SectionIds.ArrayNum = 0;
  this->MorphVertexBuffers[0].SectionIds.ArrayMax = 0;
  this->MorphVertexBuffers[0].SRVValue.Reference = (FRHIShaderResourceView *)0x0;
  this->MorphVertexBuffers[0].UAVValue.Reference = (FRHIUnorderedAccessView *)0x0;
  this->MorphVertexBuffers[0].bUsesComputeShader = false;
  this->MorphVertexBuffers[0].LODIdx = -1;
  this->MorphVertexBuffers[0].SkelMeshRenderData = (FSkeletalMeshRenderData *)0x0;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)(this->MorphVertexBuffers + 1));
  this->MorphVertexBuffers[1]._padding_ = (longlong)&___7FMorphVertexBuffer__6B_;
  this->MorphVertexBuffers[1].bHasBeenUpdated = false;
  this->MorphVertexBuffers[1].bNeedsInitialClear = true;
  this->MorphVertexBuffers[1].SectionIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->MorphVertexBuffers[1].SectionIds.ArrayNum = 0;
  this->MorphVertexBuffers[1].SectionIds.ArrayMax = 0;
  this->MorphVertexBuffers[1].SRVValue.Reference = (FRHIShaderResourceView *)0x0;
  this->MorphVertexBuffers[1].UAVValue.Reference = (FRHIUnorderedAccessView *)0x0;
  this->MorphVertexBuffers[1].bUsesComputeShader = false;
  this->MorphVertexBuffers[1].LODIdx = -1;
  this->MorphVertexBuffers[1].SkelMeshRenderData = (FSkeletalMeshRenderData *)0x0;
  this->bInitializedResources = false;
  this->bDoubleBuffer = false;
  this->CurrentBuffer = 0;
  this->PreviousRevisionNumber = 0;
  this->CurrentRevisionNumber = 0;
  this->UpdatedFrameNumber = 0;
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&local_f8);
  local_f8.bHasBeenUpdated = false;
  local_f8.bNeedsInitialClear = true;
  local_f8.SectionIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8._padding_ = (longlong)&___7FMorphVertexBuffer__6B_;
  local_f8.SectionIds.ArrayNum = 0;
  local_f8.SectionIds.ArrayMax = 0;
  local_f8.SRVValue.Reference = (FRHIShaderResourceView *)0x0;
  local_f8.UAVValue.Reference = (FRHIUnorderedAccessView *)0x0;
  local_f8.LODIdx = param_2;
  local_f8.FeatureLevel = param_3;
  local_f8.SkelMeshRenderData = param_1;
  if ((param_1 == (FSkeletalMeshRenderData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SkelMeshRenderData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.h"
                         ,0xe0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMorphVertexBufferPool *)(*pcVar1)();
    return pFVar3;
  }
  if (((local_f8.LODIdx < 0) ||
      (((local_f8.SkelMeshRenderData)->LODRenderData).Array.ArrayNum <= local_f8.LODIdx)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SkelMeshRenderData->LODRenderData.IsValidIndex(LODIdx)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.h"
                         ,0xe1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMorphVertexBufferPool *)(*pcVar1)();
    return pFVar3;
  }
  local_f8.bUsesComputeShader = false;
  FMorphVertexBuffer::operator=(this->MorphVertexBuffers,&local_f8);
  if (local_f8.UAVValue.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_f8.UAVValue.Reference);
  }
  if (local_f8.SRVValue.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_f8.SRVValue.Reference);
  }
  if (local_f8.SectionIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.SectionIds.AllocatorInstance.Data);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&local_f8);
  FVertexBuffer::FVertexBuffer((FVertexBuffer *)&local_90);
  local_90._padding_ = (longlong)&___7FMorphVertexBuffer__6B_;
  local_90.bHasBeenUpdated = false;
  local_90.bNeedsInitialClear = true;
  local_90.SectionIds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_90.SectionIds.ArrayNum = 0;
  local_90.SectionIds.ArrayMax = 0;
  local_90.SRVValue.Reference = (FRHIShaderResourceView *)0x0;
  local_90.UAVValue.Reference = (FRHIUnorderedAccessView *)0x0;
  local_90.LODIdx = param_2;
  local_90.FeatureLevel = param_3;
  local_90.SkelMeshRenderData = param_1;
  if ((param_1 == (FSkeletalMeshRenderData *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SkelMeshRenderData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.h"
                         ,0xe0,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMorphVertexBufferPool *)(*pcVar1)();
    return pFVar3;
  }
  if (((local_90.LODIdx < 0) ||
      (((local_90.SkelMeshRenderData)->LODRenderData).Array.ArrayNum <= local_90.LODIdx)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("SkelMeshRenderData->LODRenderData.IsValidIndex(LODIdx)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.h"
                         ,0xe1,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMorphVertexBufferPool *)(*pcVar1)();
    return pFVar3;
  }
  local_90.bUsesComputeShader = false;
  FMorphVertexBuffer::operator=(this->MorphVertexBuffers + 1,&local_90);
  if (local_90.UAVValue.Reference != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_90.UAVValue.Reference);
  }
  if (local_90.SRVValue.Reference != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_90.SRVValue.Reference);
  }
  if (local_90.SectionIds.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.SectionIds.AllocatorInstance.Data);
  }
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&local_90);
  return this;
}

// EnableDoubleBuffer @ 148639a30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMorphVertexBufferPool::EnableDoubleBuffer
          (FMorphVertexBufferPool *this,FRHICommandListBase *param_1)

{
  longlong lVar1;
  
  lVar1 = this->MorphVertexBuffers[1]._padding_;
  this->bDoubleBuffer = true;
  if (lVar1 == 0) {
    FRenderResource::InitResource((FRenderResource *)(this->MorphVertexBuffers + 1),param_1);
    return;
  }
  return;
}

// GetMorphVertexBufferForReading @ 14864bff0

FMorphVertexBuffer * __thiscall
FMorphVertexBufferPool::GetMorphVertexBufferForReading(FMorphVertexBufferPool *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FMorphVertexBuffer *pFVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = 0;
  if (this->bDoubleBuffer != false) {
    bVar2 = false;
    if (this->CurrentRevisionNumber - this->PreviousRevisionNumber < 2) {
      bVar2 = param_1;
    }
    uVar4 = (uint)bVar2 ^ this->CurrentBuffer;
    uVar5 = (ulonglong)uVar4;
    if (this->MorphVertexBuffers[uVar5].bHasBeenUpdated == false) {
      if ((uVar4 != 1) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Index == 1",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                             ,300,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FMorphVertexBuffer *)(*pcVar1)();
        return pFVar3;
      }
      if ((this->MorphVertexBuffers[0].bHasBeenUpdated == false) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("MorphVertexBuffers[0].bHasBeenUpdated",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                             ,0x12d,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FMorphVertexBuffer *)(*pcVar1)();
        return pFVar3;
      }
      uVar5 = 0;
    }
  }
  if ((this->MorphVertexBuffers[uVar5]._padding_ == 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("MorphVertexBuffers[Index].VertexBufferRHI.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                         ,0x132,L"Index: %i Buffer0: %s Buffer1: %s"), bVar2)) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FMorphVertexBuffer *)(*pcVar1)();
    return pFVar3;
  }
  return this->MorphVertexBuffers + uVar5;
}

// GetMorphVertexBufferForWriting @ 14864c120

FMorphVertexBuffer * __thiscall
FMorphVertexBufferPool::GetMorphVertexBufferForWriting(FMorphVertexBufferPool *this)

{
  return this->MorphVertexBuffers + this->CurrentBuffer;
}

// GetResourceSize @ 14864d310

ulong64 __thiscall FMorphVertexBufferPool::GetResourceSize(FMorphVertexBufferPool *this)

{
  ulong64 uVar1;
  ulong64 uVar2;
  
  uVar1 = FMorphVertexBuffer::GetResourceSize(this->MorphVertexBuffers);
  uVar2 = FMorphVertexBuffer::GetResourceSize(this->MorphVertexBuffers + 1);
  return uVar2 + 0xf8 + uVar1;
}

// InitResources @ 148655bd0

void __thiscall FMorphVertexBufferPool::InitResources(FMorphVertexBufferPool *this,FName param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bInitializedResources == false) {
    if (this->MorphVertexBuffers[0]._padding_ != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!MorphVertexBuffers[0].VertexBufferRHI.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                         ,0xe8,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (this->MorphVertexBuffers[1]._padding_ != 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!MorphVertexBuffers[1].VertexBufferRHI.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                         ,0xe9,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->MorphVertexBuffers[0]._padding_ = (longlong)param_1;
    BeginInitResource((FRenderResource *)this->MorphVertexBuffers,
                      &UE::RenderCommandPipe::SkeletalMesh);
    if (this->bDoubleBuffer != false) {
      this->MorphVertexBuffers[1]._padding_ = (longlong)param_1;
      BeginInitResource((FRenderResource *)(this->MorphVertexBuffers + 1),
                        &UE::RenderCommandPipe::SkeletalMesh);
    }
    this->bInitializedResources = true;
  }
  return;
}

// ReleaseResources @ 14865f570

void __thiscall FMorphVertexBufferPool::ReleaseResources(FMorphVertexBufferPool *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bInitializedResources == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitializedResources",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalRenderGPUSkin.cpp"
                       ,0xf6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FRenderResource::ReleaseResource((FRenderResource *)this->MorphVertexBuffers);
  FRenderResource::ReleaseResource((FRenderResource *)(this->MorphVertexBuffers + 1));
  this->bInitializedResources = false;
  return;
}

// SetCurrentRevisionNumber @ 148665950

void __thiscall
FMorphVertexBufferPool::SetCurrentRevisionNumber(FMorphVertexBufferPool *this,uint param_1)

{
  if ((this->bDoubleBuffer != false) && (this->CurrentRevisionNumber != param_1)) {
    this->PreviousRevisionNumber = this->CurrentRevisionNumber;
    this->CurrentBuffer = 1 - this->CurrentBuffer;
    this->CurrentRevisionNumber = param_1;
  }
  return;
}

