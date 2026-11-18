// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FReadbackManager @ 147fa5400

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FReadbackManager * __thiscall
Nanite::FReadbackManager::FReadbackManager(FReadbackManager *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = &(this->ReadbackBuffers).ArrayNum;
  (this->RequestsBuffer).Reference = (FRDGPooledBuffer *)0x0;
  (this->ReadbackBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar3 = &(this->ReadbackBuffers).ArrayMax;
  *piVar1 = 0;
  this->LatestBuffer = (FReadbackBuffer *)0x0;
  this->NumBuffers = param_1;
  *piVar3 = 0;
  this->NumPendingBuffers = 0;
  this->NextReadBufferIndex = 0;
  this->BufferVersion = 0;
  iVar2 = GNaniteStreamingGPURequestsBufferMinSize;
  (this->BufferSizeManager).OverBudgetCounter = 0;
  (this->BufferSizeManager).UnderBudgetCounter = 0;
  (this->BufferSizeManager).CurrentSize = (float)iVar2;
  if ((int)param_1 < 1) {
    if ((int)param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)param_1);
    }
  }
  else {
    iVar2 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,param_1,&(this->ReadbackBuffers).AllocatorInstance,piVar1,piVar3);
    DefaultConstructItems<Nanite::FReadbackManager::FReadbackBuffer,int>
              ((this->ReadbackBuffers).AllocatorInstance.Data + (longlong)iVar2 * 0x10,param_1);
  }
  return this;
}

// operator() @ 147faddf0

void __thiscall
`Nanite::FReadbackManager::QueueReadback'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FRDGResource *this_00;
  FRHIGPUBufferReadback *this_01;
  
  this_00 = *(FRDGResource **)((longlong)this + 8);
  this_01 = (FRHIGPUBufferReadback *)**(undefined8 **)this;
  FRDGResource::ValidateRHIAccess(this_00);
  FRHIGPUBufferReadback::EnqueueCopy(this_01,param_2,(FRHIBuffer *)this_00->ResourceRHI,0);
  return;
}

// GetBufferVersion @ 147fd0fb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

uint __thiscall Nanite::FReadbackManager::GetBufferVersion(FReadbackManager *this)

{
  return this->BufferVersion;
}

// GetStreamingRequestsBuffer @ 147fd75d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRDGBuffer * __thiscall
Nanite::FReadbackManager::GetStreamingRequestsBuffer(FReadbackManager *this,FRDGBuilder *param_1)

{
  FRDGBuffer *pFVar1;
  
  pFVar1 = FRDGBuilder::RegisterExternalBuffer(param_1,&this->RequestsBuffer,None);
  return pFVar1;
}

// LockLatest @ 147fe3d70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FGPUStreamingRequest * __thiscall
Nanite::FReadbackManager::LockLatest(FReadbackManager *this,uint *param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FGPUStreamingRequest *pFVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar14 = 0;
  *param_1 = 0;
  *param_2 = 0;
  if ((this->LatestBuffer != (FReadbackBuffer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LatestBuffer == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Nanite\\NaniteReadbackManager.cpp"
                         ,0x62,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FGPUStreamingRequest *)(*pcVar4)();
    return pFVar10;
  }
  uVar1 = this->NumPendingBuffers;
  while (uVar1 != 0) {
    uVar1 = this->NextReadBufferIndex;
    uVar8 = uVar14;
    if ((int)uVar1 < (this->ReadbackBuffers).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FGPUStreamingRequest *)(*pcVar4)();
      return pFVar10;
    }
    lVar2 = *(longlong *)
             ((this->ReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10);
    lVar3 = *(longlong *)(lVar2 + 8);
    if ((lVar3 != 0) &&
       ((*(int *)(lVar3 + 0x18) != 0 ||
        (cVar6 = (**(code **)(**(longlong **)(lVar2 + 8) + 0x20))(), cVar6 == '\0')))) break;
    uVar1 = this->NextReadBufferIndex;
    uVar8 = uVar14;
    if ((int)uVar1 < (this->ReadbackBuffers).ArrayNum) {
      uVar8 = ~uVar1 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar10 = (FGPUStreamingRequest *)(*pcVar4)();
      return pFVar10;
    }
    this->LatestBuffer =
         (FReadbackBuffer *)
         ((this->ReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10);
    puVar11 = &this->NumPendingBuffers;
    *puVar11 = *puVar11 - 1;
    uVar1 = *puVar11;
    this->NextReadBufferIndex = (this->NextReadBufferIndex + 1) % this->NumBuffers;
  }
  if (this->LatestBuffer == (FReadbackBuffer *)0x0) {
    return (FGPUStreamingRequest *)0x0;
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId117,"LockBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Nanite\\NaniteReadbackManager.cpp"
               ,0x75);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId117);
  }
  puVar11 = FRHIGPUBufferReadback::Lock
                      ((this->LatestBuffer->Buffer).Ptr,this->LatestBuffer->NumElements * 0xc);
  if ((this->LatestBuffer->NumElements == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("LatestBuffer->NumElements > 0u",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Nanite\\NaniteReadbackManager.cpp"
                         ,0x77,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    pFVar10 = (FGPUStreamingRequest *)(*pcVar4)();
    return pFVar10;
  }
  fVar17 = (this->BufferSizeManager).CurrentSize;
  uVar1 = *puVar11;
  fVar15 = fVar17 * __real_3f000000;
  fVar16 = (float)((longlong)((float)uVar1 * __real_3fa00000) & 0xffffffff);
  uVar8 = uVar14;
  if (fVar17 < fVar16) {
    uVar8 = (this->BufferSizeManager).OverBudgetCounter + 1;
  }
  (this->BufferSizeManager).OverBudgetCounter = uVar8;
  if ((float)uVar1 < fVar15) {
    uVar14 = (this->BufferSizeManager).UnderBudgetCounter + 1;
  }
  (this->BufferSizeManager).UnderBudgetCounter = uVar14;
  if (uVar8 < 2) {
    if (uVar14 < 0x1e) goto LAB_147fe3fc8;
    fVar16 = fVar17 * __real_3f7ae148;
  }
  else if (fVar16 <= fVar17) {
    fVar16 = fVar17;
  }
  (this->BufferSizeManager).CurrentSize = fVar16;
  fVar17 = fVar16;
LAB_147fe3fc8:
  iVar12 = 0x100000;
  if (GNaniteStreamingGPURequestsBufferMinSize < 0x100000) {
    iVar12 = GNaniteStreamingGPURequestsBufferMinSize;
  }
  iVar13 = 0x1000;
  if (0x1000 < iVar12) {
    iVar13 = iVar12;
  }
  iVar12 = 0x100000;
  if (GNaniteStreamingGPURequestsBufferMaxSize < 0x100000) {
    iVar12 = GNaniteStreamingGPURequestsBufferMaxSize;
  }
  iVar9 = iVar13;
  if (iVar13 < iVar12) {
    iVar9 = iVar12;
  }
  fVar16 = (float)iVar9;
  if (fVar17 <= (float)iVar9) {
    fVar16 = fVar17;
  }
  if (fVar16 <= (float)iVar13) {
    fVar16 = (float)iVar13;
  }
  (this->BufferSizeManager).CurrentSize = fVar16;
  *param_2 = uVar1;
  uVar14 = this->LatestBuffer->NumElements - 1;
  if (uVar1 < uVar14) {
    uVar14 = uVar1;
  }
  *param_1 = uVar14;
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return (FGPUStreamingRequest *)(puVar11 + 3);
}

// PrepareRequestsBuffer @ 147fe66b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

uint __thiscall
Nanite::FReadbackManager::PrepareRequestsBuffer(FReadbackManager *this,FRDGBuilder *param_1)

{
  int *piVar1;
  longlong *plVar2;
  ulonglong uVar3;
  FRDGPooledBuffer *pFVar4;
  FRDGPooledBuffer *pFVar5;
  longlong lVar6;
  FRDGBuffer *pFVar7;
  FRDGBufferUAV *pFVar8;
  TRefCountPtr<FRDGPooledBuffer> *pTVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  FRDGBufferUAVDesc local_48;
  undefined8 local_38;
  undefined1 local_30 [16];
  FShaderParametersMetadata *local_20;
  
  iVar13 = (int)(longlong)(this->BufferSizeManager).CurrentSize;
  iVar10 = 1;
  if (iVar13 != 0) {
    iVar10 = iVar13;
  }
  uVar3 = (ulonglong)(iVar10 - 1) * 2 + 1;
  lVar6 = 0x3f;
  if (uVar3 != 0) {
    for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
    }
  }
  pFVar4 = (this->RequestsBuffer).Reference;
  iVar12 = (int)lVar6 + -2;
  iVar10 = 0;
  if (0 < iVar12) {
    iVar10 = iVar12;
  }
  iVar10 = 1 << ((byte)iVar10 & 0x1f);
  uVar11 = iVar13 + -1 + iVar10 & -iVar10;
  if ((pFVar4 == (FRDGPooledBuffer *)0x0) || ((pFVar4->Desc).NumElements != uVar11)) {
    local_48._padding_._0_1_ = 0xc;
    local_48._padding_._1_1_ = 0;
    local_48._padding_._2_1_ = 0;
    local_48._padding_._3_1_ = 0;
    local_48.Buffer =
         (FRDGBuffer *)
         CONCAT44(SUB84(local_30._8_8_,4),
                  StructuredBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static);
    local_30._0_4_ = 0xc;
    local_38 = 0;
    local_30._8_8_ = local_48.Buffer;
    local_20 = (FShaderParametersMetadata *)0x0;
    local_48._padding_._4_4_ = uVar11;
    local_30._4_4_ = uVar11;
    FRDGUserValidation::ValidateCreateBuffer
              (&param_1->UserValidation,(FRDGBufferDesc *)local_30,L"Nanite.StreamingRequests",None)
    ;
    if (local_30._0_4_ == 0) {
      local_30._0_4_ = 1;
    }
    if (local_30._4_4_ == 0) {
      local_30._4_4_ = 1;
    }
    pFVar7 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,8);
    pFVar7 = FRDGBuffer::FRDGBuffer
                       (pFVar7,L"Nanite.StreamingRequests",(FRDGBufferDesc *)local_30,None);
    piVar1 = &(param_1->Buffers).Array.ArrayMax;
    iVar10 = (param_1->Buffers).Array.ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                         (0x808,(ForElementType<FRDGBuffer_*> *)&param_1->Buffers,piVar1);
    }
    (param_1->Buffers).Array.ArrayNum = iVar10 + 1;
    (param_1->Buffers).Array.AllocatorInstance.Data[iVar10] = pFVar7;
    (pFVar7->Handle).Index = (param_1->Buffers).Array.ArrayNum - 1;
    FRDGUserValidation::ValidateCreateBuffer(&param_1->UserValidation,pFVar7);
    FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar7);
    local_48._padding_._1_1_ = 0;
    local_48._padding_._2_1_ = 0;
    local_48._padding_._0_1_ = 0;
    if (((pFVar7->Desc).Usage & DrawIndirect) != None) {
      local_48._padding_._0_1_ = 0x1c;
    }
    local_48.Buffer = pFVar7;
    pFVar8 = FRDGBuilder::CreateUAV(param_1,&local_48,None);
    AddPass_ClearStreamingRequestCount(param_1,pFVar8);
    pTVar9 = FRDGBuilder::ConvertToExternalBuffer(param_1,pFVar7);
    pFVar4 = (this->RequestsBuffer).Reference;
    pFVar5 = pTVar9->Reference;
    if (pFVar4 != pFVar5) {
      (this->RequestsBuffer).Reference = pFVar5;
      if (pFVar5 != (FRDGPooledBuffer *)0x0) {
        LOCK();
        *(int *)&pFVar5->_padding_ = (int)pFVar5->_padding_ + 1;
        UNLOCK();
      }
      if (pFVar4 != (FRDGPooledBuffer *)0x0) {
        plVar2 = &pFVar4->_padding_;
        LOCK();
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if (((int)lVar6 == 1) && (plVar2 != (longlong *)0x0)) {
          (**(code **)pFVar4->_padding_)(pFVar4,1);
        }
      }
    }
  }
  return uVar11;
}

// QueueReadback @ 147fe86e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall Nanite::FReadbackManager::QueueReadback(FReadbackManager *this,FRDGBuilder *param_1)

{
  int *piVar1;
  FRHIStagingBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  FRHIGPUBufferReadback *pFVar8;
  FName *pFVar9;
  FRDGBuffer *pFVar10;
  FRDGEventName *pFVar11;
  undefined8 *puVar12;
  FRDGBufferUAV *pFVar13;
  FRHIGPUBufferReadback *pFVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  FName local_res8;
  undefined8 *local_88;
  FScriptContainerElement local_80 [8];
  FRDGBufferUAVDesc local_78;
  FRDGBuffer *local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  <lambda_1> local_58;
  FRDGEventName local_48;
  
  if (this->NumPendingBuffers == this->NumBuffers) {
    return;
  }
  if ((this->RequestsBuffer).Reference == (FRDGPooledBuffer *)0x0) {
    return;
  }
  uVar15 = (this->NextReadBufferIndex + this->NumPendingBuffers) % this->NumBuffers;
  uVar6 = 0;
  if ((int)uVar15 < (this->ReadbackBuffers).ArrayNum) {
    uVar6 = ~uVar15 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar17 = (this->ReadbackBuffers).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x10;
  pFVar8 = ::operator_new(0x58);
  if (pFVar8 == (FRHIGPUBufferReadback *)0x0) {
    pFVar8 = (FRHIGPUBufferReadback *)0x0;
  }
  else {
    pFVar9 = ::FName::FName(&local_res8,L"Nanite.StreamingRequestReadback");
    pFVar8 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar8,*pFVar9);
  }
  if (pFVar17 == local_80) {
    if (pFVar8 == (FRHIGPUBufferReadback *)0x0) goto LAB_147fe886f;
    pFVar14 = pFVar8 + 1;
    lVar16 = 8;
    do {
      pFVar2 = pFVar14[-1].DestinationStagingBuffers[7].Reference;
      pFVar14 = (FRHIGPUBufferReadback *)(pFVar14[-1].DestinationStagingBuffers + 7);
      lVar16 = lVar16 + -1;
      if (pFVar2 != (FRHIStagingBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar2);
      }
    } while (lVar16 != 0);
    pFVar8->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    pFVar14 = pFVar8;
    if ((FRHIResource *)pFVar8->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar8->_padding_);
    }
  }
  else {
    pFVar14 = *(FRHIGPUBufferReadback **)&pFVar17->field_0x0;
    *(FRHIGPUBufferReadback **)&pFVar17->field_0x0 = pFVar8;
    if (pFVar14 == (FRHIGPUBufferReadback *)0x0) goto LAB_147fe886f;
    pFVar8 = pFVar14 + 1;
    lVar16 = 8;
    do {
      pFVar2 = pFVar8[-1].DestinationStagingBuffers[7].Reference;
      pFVar8 = (FRHIGPUBufferReadback *)(pFVar8[-1].DestinationStagingBuffers + 7);
      lVar16 = lVar16 + -1;
      if (pFVar2 != (FRHIStagingBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar2);
      }
    } while (lVar16 != 0);
    pFVar14->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
    if ((FRHIResource *)pFVar14->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar14->_padding_);
    }
  }
  ::operator_delete(pFVar14,0x58);
LAB_147fe886f:
  *(uint *)&pFVar17[8].field_0x0 = (((this->RequestsBuffer).Reference)->Desc).NumElements;
  pFVar10 = FRDGBuilder::RegisterExternalBuffer(param_1,&this->RequestsBuffer,None);
  local_58.GPUReadback =
       (TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_> *)pFVar17;
  local_58.RDGRequestsBuffer = pFVar10;
  pFVar11 = FRDGEventName::FRDGEventName(&local_48,1,L"Readback");
  puVar12 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
  if (puVar12 == (undefined8 *)0x0) {
    puVar12 = (undefined8 *)0x0;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    puVar12[2] = 0;
    *puVar12 = &___7__TObject_VFReadbackBufferParameters___FRDGAllocator__6B_;
    *(undefined4 *)(puVar12 + 3) = 0x80;
  }
  local_88 = puVar12;
  if ((((undefined8 **)param_1->_padding_ <= &local_88) &&
      (&local_88 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4)))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar7 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar7 + 1;
  uStack_60 = 0x80;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_88;
  *(FRDGBuffer **)&((FReadbackBufferParameters *)(puVar12 + 2))->Buffer = pFVar10;
  puVar12[3] = CONCAT44(uStack_5c,0x80);
  local_68 = pFVar10;
  FRDGBuilder::
  AddPass<FReadbackBufferParameters,_Nanite::FReadbackManager::QueueReadback_::__l2::<lambda_1>_>
            (param_1,pFVar11,(FReadbackBufferParameters *)(puVar12 + 2),Readback,&local_58);
  if (local_48.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.FormattedEventName.Data.AllocatorInstance.Data);
  }
  local_78._padding_._2_1_ = 0;
  bVar5 = 0;
  if (((pFVar10->Desc).Usage & DrawIndirect) != None) {
    bVar5 = 0x1c;
  }
  local_78._padding_._0_2_ = (ushort)bVar5;
  local_78.Buffer = pFVar10;
  pFVar13 = FRDGBuilder::CreateUAV(param_1,&local_78,None);
  AddPass_ClearStreamingRequestCount(param_1,pFVar13);
  this->NumPendingBuffers = this->NumPendingBuffers + 1;
  this->BufferVersion = this->BufferVersion + 1;
  return;
}

// Unlock @ 147ffcbf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall Nanite::FReadbackManager::Unlock(FReadbackManager *this)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = -1 < CpuChannel->Enabled;
  if (bVar3) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId134,"UnlockBuffer",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Nanite\\NaniteReadbackManager.cpp"
               ,0x86);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId134);
  }
  if ((this->LatestBuffer == (FReadbackBuffer *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LatestBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Nanite\\NaniteReadbackManager.cpp"
                         ,0x87,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  FRHIGPUBufferReadback::Unlock((this->LatestBuffer->Buffer).Ptr);
  this->LatestBuffer = (FReadbackBuffer *)0x0;
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

