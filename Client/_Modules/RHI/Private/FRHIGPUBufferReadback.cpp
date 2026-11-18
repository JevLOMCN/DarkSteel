// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 5

// FRHIGPUBufferReadback @ 145c87720

FRHIGPUBufferReadback * __thiscall
FRHIGPUBufferReadback::FRHIGPUBufferReadback(FRHIGPUBufferReadback *this,FName param_1)

{
  FRHIGPUMemoryReadback::FRHIGPUMemoryReadback((FRHIGPUMemoryReadback *)this,param_1);
  this->_padding_ = (longlong)&___7FRHIGPUBufferReadback__6B_;
  this->DestinationStagingBuffers[0].Reference = (FRHIStagingBuffer *)0x0;
  this->DestinationStagingBuffers[1].Reference = (FRHIStagingBuffer *)0x0;
  this->DestinationStagingBuffers[2].Reference = (FRHIStagingBuffer *)0x0;
  this->DestinationStagingBuffers[3].Reference = (FRHIStagingBuffer *)0x0;
  this->DestinationStagingBuffers[4].Reference = (FRHIStagingBuffer *)0x0;
  this->DestinationStagingBuffers[5].Reference = (FRHIStagingBuffer *)0x0;
  this->DestinationStagingBuffers[6].Reference = (FRHIStagingBuffer *)0x0;
  this->DestinationStagingBuffers[7].Reference = (FRHIStagingBuffer *)0x0;
  return this;
}

// EnqueueCopy @ 145c9dc50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIGPUBufferReadback::EnqueueCopy
          (FRHIGPUBufferReadback *this,FRHICommandList *param_1,FRHIBuffer *param_2,uint param_3)

{
  FRHIGPUMask FVar1;
  FRHIStagingBuffer *pFVar2;
  IRHIComputeContext *pIVar3;
  undefined8 *puVar4;
  FRHIGPUMask FVar5;
  uint uVar6;
  uint uVar7;
  TRefCountPtr<FRHIStagingBuffer> *pTVar8;
  bool bVar9;
  TRefCountPtr<FRHIStagingBuffer> local_48 [2];
  
  (**(code **)(*(longlong *)this->_padding_ + 0x10))();
  uVar7 = *(uint *)&param_1->field_0x29c;
  uVar6 = 0;
  bVar9 = uVar7 != 0;
  if (bVar9) {
    for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  *(uint *)&this->_padding_ = uVar7;
  do {
    if (!bVar9) {
      return;
    }
    FVar1.GPUMask = *(uint *)&param_1->field_0x29c;
    FVar5.GPUMask = 1 << ((byte)uVar6 & 0x1f);
    FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar5);
    pTVar8 = this->DestinationStagingBuffers + uVar6;
    if (pTVar8->Reference == (FRHIStagingBuffer *)0x0) {
      (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,local_48);
      if (pTVar8 != local_48) {
        pFVar2 = pTVar8->Reference;
        pTVar8->Reference = local_48[0].Reference;
        local_48[0].Reference = (FRHIStagingBuffer *)0x0;
        if (pFVar2 == (FRHIStagingBuffer *)0x0) goto LAB_145c9dd23;
        FRHIResource::Release((FRHIResource *)pFVar2);
      }
      if (local_48[0].Reference != (FRHIStagingBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_48[0].Reference);
      }
    }
LAB_145c9dd23:
    uVar6 = param_3;
    if (param_3 == 0) {
      uVar6 = (param_2->Desc).Size;
    }
    pFVar2 = pTVar8->Reference;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar4 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar4;
      *(undefined8 **)&param_1->field_0x30 = puVar4 + 1;
      puVar4[1] = 0;
      *puVar4 = &___7FRHICommandCopyToStagingBuffer__6B_;
      puVar4[2] = param_2;
      puVar4[3] = pFVar2;
      *(undefined4 *)(puVar4 + 4) = 0;
      *(uint *)((longlong)puVar4 + 0x24) = uVar6;
    }
    else {
      pIVar3 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
      (**(code **)(pIVar3->_padding_ + 0xd8))(pIVar3,param_2,pFVar2,0,uVar6);
    }
    (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI,param_1,this->_padding_);
    FRHIComputeCommandList::SetGPUMask((FRHIComputeCommandList *)param_1,FVar1);
    uVar7 = uVar7 & ~FVar5.GPUMask;
    uVar6 = 0;
    bVar9 = uVar7 != 0;
    if (bVar9) {
      for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
  } while( true );
}

// GetGPUSizeBytes @ 145ca9380

ulong64 __thiscall FRHIGPUBufferReadback::GetGPUSizeBytes(FRHIGPUBufferReadback *this)

{
  FRHIStagingBuffer *pFVar1;
  ulong64 uVar2;
  longlong lVar3;
  
  uVar2 = 0;
  pFVar1 = this->DestinationStagingBuffers[0].Reference;
  if (pFVar1 != (FRHIStagingBuffer *)0x0) {
    uVar2 = (**(code **)(pFVar1->_padding_ + 0x20))();
  }
  pFVar1 = this->DestinationStagingBuffers[1].Reference;
  if (pFVar1 != (FRHIStagingBuffer *)0x0) {
    lVar3 = (**(code **)(pFVar1->_padding_ + 0x20))();
    uVar2 = uVar2 + lVar3;
  }
  pFVar1 = this->DestinationStagingBuffers[2].Reference;
  if (pFVar1 != (FRHIStagingBuffer *)0x0) {
    lVar3 = (**(code **)(pFVar1->_padding_ + 0x20))();
    uVar2 = uVar2 + lVar3;
  }
  pFVar1 = this->DestinationStagingBuffers[3].Reference;
  if (pFVar1 != (FRHIStagingBuffer *)0x0) {
    lVar3 = (**(code **)(pFVar1->_padding_ + 0x20))();
    uVar2 = uVar2 + lVar3;
  }
  pFVar1 = this->DestinationStagingBuffers[4].Reference;
  if (pFVar1 != (FRHIStagingBuffer *)0x0) {
    lVar3 = (**(code **)(pFVar1->_padding_ + 0x20))();
    uVar2 = uVar2 + lVar3;
  }
  pFVar1 = this->DestinationStagingBuffers[5].Reference;
  if (pFVar1 != (FRHIStagingBuffer *)0x0) {
    lVar3 = (**(code **)(pFVar1->_padding_ + 0x20))();
    uVar2 = uVar2 + lVar3;
  }
  pFVar1 = this->DestinationStagingBuffers[6].Reference;
  if (pFVar1 != (FRHIStagingBuffer *)0x0) {
    lVar3 = (**(code **)(pFVar1->_padding_ + 0x20))();
    uVar2 = uVar2 + lVar3;
  }
  pFVar1 = this->DestinationStagingBuffers[7].Reference;
  if (pFVar1 != (FRHIStagingBuffer *)0x0) {
    lVar3 = (**(code **)(pFVar1->_padding_ + 0x20))();
    return lVar3 + uVar2;
  }
  return uVar2;
}

// Lock @ 145cb27f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FRHIGPUBufferReadback::Lock(FRHIGPUBufferReadback *this,uint param_1)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  bool bVar4;
  
  uVar1 = 0;
  bVar4 = (int)this->_padding_ != 0;
  if (bVar4) {
    for (; ((uint)this->_padding_ >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  uVar2 = 0x20;
  if (bVar4) {
    uVar2 = (ulonglong)uVar1;
  }
  if (this->DestinationStagingBuffers[uVar2].Reference != (FRHIStagingBuffer *)0x0) {
    *(int *)((longlong)&this->_padding_ + 4) = (int)uVar2;
    pvVar3 = (void *)(**(code **)(GDynamicRHI->_padding_ + 0xf8))
                               (GDynamicRHI,0x154be5ed0,
                                this->DestinationStagingBuffers[uVar2].Reference,this->_padding_,0,
                                param_1);
    return pvVar3;
  }
  return (void *)0x0;
}

// Unlock @ 145cc81b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRHIGPUBufferReadback::Unlock(FRHIGPUBufferReadback *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->DestinationStagingBuffers[*(uint *)((longlong)&this->_padding_ + 4)].Reference ==
      (FRHIStagingBuffer *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4114345590282780749>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHIGPUReadback.cpp"
                       ,0x4d,"DestinationStagingBuffers[LastLockGPUIndex]");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145cc8210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GDynamicRHI->_padding_ + 0x100))
            (GDynamicRHI,0x154be5ed0,
             this->DestinationStagingBuffers[*(uint *)((longlong)&this->_padding_ + 4)].Reference);
  return;
}

