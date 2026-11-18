// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// FVirtualShadowMapFeedback @ 1457c3680

FVirtualShadowMapFeedback * __thiscall
FVirtualShadowMapFeedback::FVirtualShadowMapFeedback(FVirtualShadowMapFeedback *this)

{
  FRHIGPUBufferReadback *pFVar1;
  FName *pFVar2;
  FRHIGPUBufferReadback *pFVar3;
  FRHIGPUBufferReadback *pFVar4;
  FName local_res8;
  
  pFVar4 = (FRHIGPUBufferReadback *)0x0;
  this->WriteIndex = 0;
  this->NumPending = 0;
  this->Buffers[0].Buffer = (FRHIGPUBufferReadback *)0x0;
  this->Buffers[0].Size = 0;
  this->Buffers[1].Buffer = (FRHIGPUBufferReadback *)0x0;
  this->Buffers[1].Size = 0;
  this->Buffers[2].Buffer = (FRHIGPUBufferReadback *)0x0;
  this->Buffers[2].Size = 0;
  pFVar1 = ::operator_new(0x58);
  pFVar3 = pFVar4;
  if (pFVar1 != (FRHIGPUBufferReadback *)0x0) {
    pFVar2 = ::FName::FName(&local_res8,L"Shadow.Virtual.Readback");
    pFVar3 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar1,*pFVar2);
  }
  this->Buffers[0].Buffer = pFVar3;
  this->Buffers[0].Size = 0;
  pFVar1 = ::operator_new(0x58);
  pFVar3 = pFVar4;
  if (pFVar1 != (FRHIGPUBufferReadback *)0x0) {
    pFVar2 = ::FName::FName(&local_res8,L"Shadow.Virtual.Readback");
    pFVar3 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar1,*pFVar2);
  }
  this->Buffers[1].Buffer = pFVar3;
  this->Buffers[1].Size = 0;
  pFVar3 = ::operator_new(0x58);
  if (pFVar3 != (FRHIGPUBufferReadback *)0x0) {
    pFVar2 = ::FName::FName(&local_res8,L"Shadow.Virtual.Readback");
    pFVar4 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar3,*pFVar2);
  }
  this->Buffers[2].Buffer = pFVar4;
  this->Buffers[2].Size = 0;
  return this;
}

// ~FVirtualShadowMapFeedback @ 1457c42e0

void __thiscall
FVirtualShadowMapFeedback::~FVirtualShadowMapFeedback(FVirtualShadowMapFeedback *this)

{
  FRHIGPUBufferReadback *pFVar1;
  FRHIStagingBuffer *this_00;
  longlong lVar2;
  longlong lVar3;
  FReadbackInfo *pFVar4;
  FRHIGPUBufferReadback *pFVar5;
  
  pFVar4 = this->Buffers;
  lVar3 = 3;
  do {
    pFVar1 = pFVar4->Buffer;
    if (pFVar1 != (FRHIGPUBufferReadback *)0x0) {
      pFVar5 = pFVar1 + 1;
      lVar2 = 8;
      do {
        this_00 = pFVar5[-1].DestinationStagingBuffers[7].Reference;
        pFVar5 = (FRHIGPUBufferReadback *)(pFVar5[-1].DestinationStagingBuffers + 7);
        lVar2 = lVar2 + -1;
        if (this_00 != (FRHIStagingBuffer *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00);
        }
      } while (lVar2 != 0);
      pFVar1->_padding_ = (longlong)&___7FRHIGPUMemoryReadback__6B_;
      if ((FRHIResource *)pFVar1->_padding_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar1->_padding_);
      }
      ::operator_delete(pFVar1,0x58);
    }
    pFVar4->Buffer = (FRHIGPUBufferReadback *)0x0;
    pFVar4->Size = 0;
    pFVar4 = pFVar4 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

// operator() @ 1457c8fd0

void __thiscall
`FVirtualShadowMapFeedback::SubmitFeedbackBuffer'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FRDGResource *this_00;
  FRHIGPUBufferReadback *this_01;
  
  this_00 = *(FRDGResource **)((longlong)this + 8);
  this_01 = *(FRHIGPUBufferReadback **)this;
  FRDGResource::ValidateRHIAccess(this_00);
  FRHIGPUBufferReadback::EnqueueCopy(this_01,param_2,(FRHIBuffer *)this_00->ResourceRHI,0);
  return;
}

// GetLatestReadbackBuffer @ 1457f4bb0

FReadbackInfo * __thiscall
FVirtualShadowMapFeedback::GetLatestReadbackBuffer
          (FVirtualShadowMapFeedback *this,FReadbackInfo *__return_storage_ptr__)

{
  FRHIGPUBufferReadback *pFVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FRHIGPUBufferReadback *local_18;
  undefined8 uStack_10;
  
  iVar4 = this->NumPending;
  uVar6 = 0xffffffff;
  if (0 < iVar4) {
    do {
      iVar4 = (this->WriteIndex - iVar4) + 3;
      uVar5 = iVar4 + (iVar4 / 3 + (iVar4 >> 0x1f) +
                      (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f)
                      ) * -3;
      pFVar1 = this->Buffers[uVar5].Buffer;
      lVar2 = pFVar1->_padding_;
      if ((lVar2 != 0) &&
         ((*(int *)(lVar2 + 0x18) != 0 ||
          (cVar3 = (**(code **)(*(longlong *)pFVar1->_padding_ + 0x20))(), cVar3 == '\0')))) break;
      this->NumPending = this->NumPending + -1;
      iVar4 = this->NumPending;
      uVar6 = uVar5;
    } while (0 < iVar4);
    if (-1 < (int)uVar6) {
      local_18 = this->Buffers[(int)uVar6].Buffer;
      uStack_10 = *(undefined8 *)&this->Buffers[(int)uVar6].Size;
      goto LAB_1457f4c58;
    }
  }
  uStack_10 = 0;
  local_18 = (FRHIGPUBufferReadback *)0x0;
LAB_1457f4c58:
  __return_storage_ptr__->Buffer = local_18;
  *(undefined8 *)&__return_storage_ptr__->Size = uStack_10;
  return __return_storage_ptr__;
}

// SubmitFeedbackBuffer @ 145814b30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVirtualShadowMapFeedback::SubmitFeedbackBuffer
          (FVirtualShadowMapFeedback *this,FRDGBuilder *param_1,FRDGBuffer *param_2)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRDGEventName *pFVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *local_58;
  FRDGBuffer *local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  <lambda_1> local_40;
  FRDGEventName local_30;
  
  if (((param_2->Desc).Usage & SourceCopy) == None) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(FeedbackBuffer->Desc.Usage & EBufferUsageFlags::SourceCopy) == EBufferUsageFlags::SourceCopy"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\VirtualShadowMaps\\VirtualShadowMapCacheManager.cpp"
                       ,0x28d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->NumPending != 3) {
    local_40.ReadbackBuffer = this->Buffers[this->WriteIndex].Buffer;
    this->Buffers[this->WriteIndex].Size =
         (param_2->Desc).NumElements * (param_2->Desc).BytesPerElement;
    local_40.FeedbackBuffer = param_2;
    pFVar5 = FRDGEventName::FRDGEventName(&local_30,1,L"Readback");
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
    if (puVar6 == (undefined8 *)0x0) {
      puVar6 = (undefined8 *)0x0;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Object",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                         ,0x61,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      puVar6[2] = 0;
      *puVar6 = &___7__TObject_VFReadbackBufferParameters___FRDGAllocator__6B_;
      *(undefined4 *)(puVar6 + 3) = 0x80;
    }
    local_58 = puVar6;
    if (((undefined8 **)param_1->_padding_ <= &local_58) &&
       (&local_58 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
       ) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    iVar4 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar4 == *piVar1) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
    }
    *(int *)&param_1->_padding_ = iVar4 + 1;
    uStack_48 = 0x80;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar4 * 8) = local_58;
    *(FRDGBuffer **)&((FReadbackBufferParameters *)(puVar6 + 2))->Buffer = param_2;
    puVar6[3] = CONCAT44(uStack_44,0x80);
    local_50 = param_2;
    FRDGBuilder::
    AddPass<FReadbackBufferParameters,_FVirtualShadowMapFeedback::SubmitFeedbackBuffer_::__l2::<lambda_1>_>
              (param_1,pFVar5,(FReadbackBufferParameters *)(puVar6 + 2),Readback,&local_40);
    if (local_30.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.FormattedEventName.Data.AllocatorInstance.Data);
    }
    iVar4 = this->WriteIndex + 1;
    this->WriteIndex =
         iVar4 + (iVar4 / 3 + (iVar4 >> 0x1f) +
                 (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                 -3;
    iVar7 = this->NumPending + 1;
    iVar4 = 3;
    if (iVar7 < 3) {
      iVar4 = iVar7;
    }
    this->NumPending = iVar4;
  }
  return;
}

