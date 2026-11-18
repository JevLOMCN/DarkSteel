// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 17

// FNiagaraGpuReadbackManager @ 1492d1230

FNiagaraGpuReadbackManager * __thiscall
FNiagaraGpuReadbackManager::FNiagaraGpuReadbackManager(FNiagaraGpuReadbackManager *this)

{
  FPendingReadback *pFVar1;
  TArray<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  TNode *pTVar3;
  
  pTVar3 = ::operator_new(0x70);
  if (pTVar3 != (TNode *)0x0) {
    pTVar3->NextNode = (TNode *)0x0;
    pTVar3->_padding_ = 0;
    pFVar1 = &pTVar3->Item;
    (pFVar1->StagingBuffers).AllocatorInstance.InlineData[0] = '\0';
    (pFVar1->StagingBuffers).AllocatorInstance.InlineData[1] = '\0';
    (pFVar1->StagingBuffers).AllocatorInstance.InlineData[2] = '\0';
    (pFVar1->StagingBuffers).AllocatorInstance.InlineData[3] = '\0';
    (pFVar1->StagingBuffers).AllocatorInstance.InlineData[4] = '\0';
    (pFVar1->StagingBuffers).AllocatorInstance.InlineData[5] = '\0';
    (pFVar1->StagingBuffers).AllocatorInstance.InlineData[6] = '\0';
    (pFVar1->StagingBuffers).AllocatorInstance.InlineData[7] = '\0';
    pTVar2 = &(pTVar3->Item).StagingBuffers;
    (pTVar2->AllocatorInstance).InlineData[8] = '\0';
    (pTVar2->AllocatorInstance).InlineData[9] = '\0';
    (pTVar2->AllocatorInstance).InlineData[10] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xb] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar2->AllocatorInstance).InlineData[0xf] = '\0';
    (pTVar3->Item).StagingBuffers.AllocatorInstance.SecondaryData =
         (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0;
    (pTVar3->Item).StagingBuffers.ArrayNum = 0;
    (pTVar3->Item).StagingBuffers.ArrayMax = 0;
    (pTVar3->Item).Fence.Reference = (FRHIGPUFence *)0x0;
    (pTVar3->Item)._padding_ = 0;
    *(undefined8 *)&(pTVar3->Item).Callback = 0;
    *(undefined8 *)&(pTVar3->Item).Callback.field_0x8 = 0;
    *(undefined8 *)&(pTVar3->Item).Callback.field_0x10 = 0;
    *(undefined8 *)&(pTVar3->Item).Callback.field_0x18 = 0;
    *(undefined8 *)&(pTVar3->Item).Callback.field_0x20 = 0;
    *(undefined8 *)&(pTVar3->Item).Callback.field_0x28 = 0;
    pTVar3->NextNode = (TNode *)0x0;
    (pTVar3->Item).StagingBuffers.AllocatorInstance.SecondaryData =
         (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0;
    (pTVar3->Item).StagingBuffers.ArrayNum = 0;
    (pTVar3->Item).StagingBuffers.ArrayMax = 1;
    (pTVar3->Item).Fence.Reference = (FRHIGPUFence *)0x0;
    *(undefined8 *)&(pTVar3->Item).Callback = 0;
    *(undefined8 *)&(pTVar3->Item).Callback.field_0x28 = 0;
    (this->PendingReadbacks).Tail = pTVar3;
    (this->PendingReadbacks).Head = pTVar3;
    return this;
  }
  (this->PendingReadbacks).Tail = (TNode *)0x0;
  (this->PendingReadbacks).Head = (TNode *)0x0;
  return this;
}

// ~FNiagaraGpuReadbackManager @ 1492d4990

void __thiscall
FNiagaraGpuReadbackManager::~FNiagaraGpuReadbackManager(FNiagaraGpuReadbackManager *this)

{
  TNode *pTVar1;
  
  pTVar1 = (this->PendingReadbacks).Tail;
  while (pTVar1 != (TNode *)0x0) {
    (this->PendingReadbacks).Tail = pTVar1->NextNode;
    FPendingReadback::~FPendingReadback(&pTVar1->Item);
    ::operator_delete(pTVar1,0x70);
    pTVar1 = (this->PendingReadbacks).Tail;
  }
  return;
}

// operator() @ 1492d5b60

void __thiscall
`FNiagaraGpuReadbackManager::EnqueueReadback'::__l2::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  uint uVar1;
  uint uVar2;
  FRDGResource *this_00;
  FRHIStagingBuffer *pFVar3;
  
  this_00 = *(FRDGResource **)this;
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar2 = *(uint *)((longlong)this + 0x10);
  pFVar3 = *(FRHIStagingBuffer **)((longlong)this + 8);
  FRDGResource::ValidateRHIAccess(this_00);
  FRHIComputeCommandList::CopyToStagingBuffer
            ((FRHIComputeCommandList *)param_2,(FRHIBuffer *)this_00->ResourceRHI,pFVar3,uVar2,uVar1
            );
                    /* WARNING: Could not recover jumptable at 0x0001492d5bd2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(GDynamicRHI->_padding_ + 0xc0))
            (GDynamicRHI,param_2,*(undefined8 *)((longlong)this + 0x18));
  return;
}

// operator() @ 1492d6a50

void __thiscall
`FNiagaraGpuReadbackManager::EnqueueReadbacks'::__l11::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  uint uVar1;
  uint uVar2;
  FRDGResource *this_00;
  FRHIStagingBuffer *pFVar3;
  
  this_00 = *(FRDGResource **)this;
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar2 = *(uint *)((longlong)this + 0x10);
  pFVar3 = *(FRHIStagingBuffer **)((longlong)this + 8);
  FRDGResource::ValidateRHIAccess(this_00);
  FRHIComputeCommandList::CopyToStagingBuffer
            ((FRHIComputeCommandList *)param_2,(FRHIBuffer *)this_00->ResourceRHI,pFVar3,uVar2,uVar1
            );
  if (*(longlong *)((longlong)this + 0x18) != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI,param_2);
  }
  return;
}

// operator() @ 1492d6ae0

void __thiscall
`FNiagaraGpuReadbackManager::EnqueueReadbacks'::__l11::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  uint uVar1;
  uint uVar2;
  FRDGResource *this_00;
  FRHIStagingBuffer *pFVar3;
  
  this_00 = *(FRDGResource **)this;
  uVar1 = *(uint *)((longlong)this + 0x14);
  uVar2 = *(uint *)((longlong)this + 0x10);
  pFVar3 = *(FRHIStagingBuffer **)((longlong)this + 8);
  FRDGResource::ValidateRHIAccess(this_00);
  FRHIComputeCommandList::CopyToStagingBuffer
            ((FRHIComputeCommandList *)param_2,(FRHIBuffer *)this_00->ResourceRHI,pFVar3,uVar2,uVar1
            );
  if (*(longlong *)((longlong)this + 0x18) != 0) {
    (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI,param_2);
  }
  return;
}

// EnqueueReadback @ 1492e30d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001492e31cc) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGpuReadbackManager::EnqueueReadback
          (FNiagaraGpuReadbackManager *this,FRDGBuilder *param_1,FRDGBuffer *param_2,uint param_3,
          uint param_4,
          TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *param_5)

{
  TNode *pTVar1;
  code *pcVar2;
  int iVar3;
  FRDGBuffer *this_00;
  bool bVar4;
  FRDGEventName *pFVar5;
  FReadbackBufferParameters *pFVar6;
  TNode *pTVar7;
  int *piVar8;
  longlong lVar9;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> FVar10;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> FVar11;
  longlong *plVar12;
  undefined1 auStackY_128 [32];
  undefined8 local_e8;
  FRDGBuffer *local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  <lambda_1> local_d0;
  FRDGEventName local_b0;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> local_98;
  int local_80;
  int local_7c;
  FRDGBuffer *local_78;
  undefined1 local_68 [40];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuReadbackManager.cpp"
                         ,0x4f,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_98.SecondaryData =
       (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0;
  local_80 = 0;
  local_7c = 1;
  local_78 = (FRDGBuffer *)0x0;
  local_68._0_8_ = 0;
  local_40 = (longlong *)0x0;
  (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,&local_e8);
  if (local_80 == local_7c) {
    local_80 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>_>
                         (0x810,&local_98,&local_7c);
  }
  FVar11 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)&local_98;
  if (local_98.SecondaryData !=
      (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FVar11 = local_98.SecondaryData;
  }
  lVar9 = (longlong)local_80;
  local_80 = local_80 + 1;
  *(undefined8 *)((longlong)FVar11 + lVar9 * 0x10) = 0;
  *(undefined8 *)((longlong)FVar11 + lVar9 * 0x10) = local_e8;
  *(uint *)((uchar *)((longlong)FVar11 + 8) + lVar9 * 0x10) = param_4;
  local_e8 = 0;
  (**(code **)(GDynamicRHI->_padding_ + 0xb8))(GDynamicRHI,&local_e0,&FenceName);
  this_00 = local_78;
  local_78 = local_e0;
  local_e0 = (FRDGBuffer *)0x0;
  if ((this_00 != (FRDGBuffer *)0x0) &&
     (FRHIResource::Release((FRHIResource *)this_00), local_e0 != (FRDGBuffer *)0x0)) {
    FRHIResource::Release((FRHIResource *)local_e0);
  }
  TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>::operator=
            ((TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_68
             ,param_5);
  (**(code **)(local_78->_padding_ + 0x10))();
  if ((local_80 < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar11 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)&local_98;
  if (local_98.SecondaryData !=
      (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FVar11 = local_98.SecondaryData;
  }
  local_d0.ReadbackBuffer.Reference = *(FRHIStagingBuffer **)FVar11;
  local_d0.Buffer = param_2;
  if (local_d0.ReadbackBuffer.Reference != (FRHIStagingBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_d0.ReadbackBuffer.Reference);
  }
  local_d0.NumBytes = param_4;
  local_d0.Fence.Reference = (FRHIGPUFence *)local_78;
  local_d0.Offset = param_3;
  if (local_78 != (FRDGBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_78);
  }
  pFVar5 = FRDGEventName::FRDGEventName(&local_b0,1,L"NiagaraReadback");
  pFVar6 = FRDGBuilder::AllocParameters<FReadbackBufferParameters>(param_1);
  uStack_d8 = 0x80;
  *(FRDGBuffer **)&pFVar6->Buffer = param_2;
  *(ulonglong *)&(pFVar6->Buffer).field_0x8 = CONCAT44(uStack_d4,0x80);
  local_e0 = param_2;
  FRDGBuilder::
  AddPass<FReadbackBufferParameters,_FNiagaraGpuReadbackManager::EnqueueReadback_::__l2::<lambda_1>_>
            (param_1,pFVar5,pFVar6,Readback,&local_d0);
  if (local_b0.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if ((FRDGBuffer *)local_d0.Fence.Reference != (FRDGBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_d0.Fence.Reference);
  }
  if (local_d0.ReadbackBuffer.Reference != (FRHIStagingBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_d0.ReadbackBuffer.Reference);
  }
  pTVar7 = ::operator_new(0x70);
  iVar3 = local_80;
  if (pTVar7 != (TNode *)0x0) {
    pTVar7->NextNode = (TNode *)0x0;
    (pTVar7->Item).StagingBuffers.AllocatorInstance.SecondaryData =
         (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0;
    (pTVar7->Item).StagingBuffers.ArrayNum = local_80;
    FVar11 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)&local_98;
    if (local_98.SecondaryData !=
        (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
      FVar11 = local_98.SecondaryData;
    }
    piVar8 = &(pTVar7->Item).StagingBuffers.ArrayMax;
    if (local_80 == 0) {
      *piVar8 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>_>
                (0x10,8,local_80,0,
                 (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> *)
                 &pTVar7->Item,local_80,piVar8);
      FVar10 = (pTVar7->Item).StagingBuffers.AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
        FVar10 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)
                 &pTVar7->Item;
      }
      ConstructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int>
                ((void *)FVar10,(TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)FVar11,iVar3
                );
    }
    (pTVar7->Item).Fence.Reference = (FRHIGPUFence *)local_78;
    if (local_78 != (FRDGBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_78);
    }
    *(undefined8 *)&(pTVar7->Item).Callback = local_68._0_8_;
    *(undefined8 *)&(pTVar7->Item).Callback.field_0x28 = 0;
    if (local_68._0_8_ != 0) {
      plVar12 = (longlong *)(local_68 + 0x10);
      if (local_40 != (longlong *)0x0) {
        plVar12 = local_40;
      }
      (**(code **)*plVar12)();
    }
    pTVar1 = (this->PendingReadbacks).Head;
    (this->PendingReadbacks).Head = pTVar7;
    pTVar1->NextNode = pTVar7;
  }
  if (local_68._0_8_ != 0) {
    plVar12 = (longlong *)(local_68 + 0x10);
    if (local_40 != (longlong *)0x0) {
      plVar12 = local_40;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  if (local_78 != (FRDGBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)local_78);
  }
  FVar11 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)&local_98;
  if (local_98.SecondaryData !=
      (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FVar11 = local_98.SecondaryData;
  }
  DestructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int>
            ((TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)FVar11,local_80);
  if (local_98.SecondaryData !=
      (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FMemory::Free((void *)local_98.SecondaryData);
  }
  if (*(longlong *)param_5 != 0) {
    plVar12 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar12 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  return;
}

// EnqueueReadback @ 1492e3490

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGpuReadbackManager::EnqueueReadback
          (FNiagaraGpuReadbackManager *this,FRDGBuilder *param_1,FRDGBuffer *param_2,
          TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> local_58;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuReadbackManager.cpp"
                       ,0x49,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_58._0_8_ = *(undefined8 *)param_3;
  local_58._40_8_ = 0;
  if (local_58._0_8_ != 0) {
    puVar3 = (undefined8 *)&param_3->field_0x10;
    if (*(undefined8 **)&param_3->field_0x28 != (undefined8 *)0x0) {
      puVar3 = *(undefined8 **)&param_3->field_0x28;
    }
    (**(code **)*puVar3)(puVar3,&local_58.field_0x10);
  }
  EnqueueReadback(this,param_1,param_2,0,
                  (param_2->Desc).NumElements * (param_2->Desc).BytesPerElement,&local_58);
  if (*(longlong *)param_3 != 0) {
    plVar4 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))();
  }
  return;
}

// EnqueueReadback @ 1492e3560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001492e3650) */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
FNiagaraGpuReadbackManager::EnqueueReadback
          (FNiagaraGpuReadbackManager *this,FRHICommandList *param_1,FRHIBuffer *param_2,
          uint param_3,uint param_4,
          TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *param_5)

{
  uint uVar1;
  TNode *pTVar2;
  code *pcVar3;
  int iVar4;
  FRHIGPUFence *this_00;
  bool bVar5;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> FVar6;
  TNode *pTVar7;
  int *piVar8;
  longlong lVar9;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> FVar10;
  longlong *plVar11;
  undefined1 auStackY_f8 [32];
  undefined8 local_b8;
  FRHIGPUFence *local_b0;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> local_a8;
  int local_90;
  int local_8c;
  FRHIGPUFence *local_88;
  undefined1 local_78 [40];
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  bVar5 = IsInRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuReadbackManager.cpp"
                         ,0xb4,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_8c = 1;
  local_a8.SecondaryData =
       (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0;
  local_90 = 0;
  local_88 = (FRHIGPUFence *)0x0;
  local_78._0_8_ = 0;
  local_50 = (longlong *)0x0;
  (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,&local_b8);
  if (local_90 == local_8c) {
    local_90 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>_>
                         (0x810,&local_a8,&local_8c);
  }
  FVar6 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)&local_a8;
  if (local_a8.SecondaryData !=
      (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FVar6 = local_a8.SecondaryData;
  }
  lVar9 = (longlong)local_90;
  local_90 = local_90 + 1;
  *(undefined8 *)((longlong)FVar6 + lVar9 * 0x10) = 0;
  *(undefined8 *)((longlong)FVar6 + lVar9 * 0x10) = local_b8;
  *(uint *)((uchar *)((longlong)FVar6 + 8) + lVar9 * 0x10) = param_4;
  local_b8 = 0;
  (**(code **)(GDynamicRHI->_padding_ + 0xb8))(GDynamicRHI,&local_b0,&FenceName);
  this_00 = local_88;
  local_88 = local_b0;
  local_b0 = (FRHIGPUFence *)0x0;
  if ((this_00 != (FRHIGPUFence *)0x0) &&
     (FRHIResource::Release((FRHIResource *)this_00), local_b0 != (FRHIGPUFence *)0x0)) {
    FRHIResource::Release((FRHIResource *)local_b0);
  }
  TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>::operator=
            ((TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)local_78
             ,param_5);
  if ((local_90 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar6 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)&local_a8;
  if (local_a8.SecondaryData !=
      (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FVar6 = local_a8.SecondaryData;
  }
  uVar1 = *(uint *)((longlong)FVar6 + 8);
  if ((local_90 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FVar6 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)&local_a8;
  if (local_a8.SecondaryData !=
      (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FVar6 = local_a8.SecondaryData;
  }
  FRHIComputeCommandList::CopyToStagingBuffer
            ((FRHIComputeCommandList *)param_1,param_2,*(FRHIStagingBuffer **)FVar6,param_3,uVar1);
  (**(code **)(local_88->_padding_ + 0x10))();
  (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI,param_1,local_88);
  pTVar7 = ::operator_new(0x70);
  iVar4 = local_90;
  if (pTVar7 != (TNode *)0x0) {
    pTVar7->NextNode = (TNode *)0x0;
    (pTVar7->Item).StagingBuffers.AllocatorInstance.SecondaryData =
         (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0;
    (pTVar7->Item).StagingBuffers.ArrayNum = local_90;
    FVar6 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)&local_a8;
    if (local_a8.SecondaryData !=
        (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
      FVar6 = local_a8.SecondaryData;
    }
    piVar8 = &(pTVar7->Item).StagingBuffers.ArrayMax;
    if (local_90 == 0) {
      *piVar8 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>_>
                (0x10,8,local_90,0,
                 (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> *)
                 &pTVar7->Item,local_90,piVar8);
      FVar10 = (pTVar7->Item).StagingBuffers.AllocatorInstance.SecondaryData;
      if (FVar10 == (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
        FVar10 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)
                 &pTVar7->Item;
      }
      ConstructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int>
                ((void *)FVar10,(TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)FVar6,iVar4)
      ;
    }
    (pTVar7->Item).Fence.Reference = local_88;
    if (local_88 != (FRHIGPUFence *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_88);
    }
    *(undefined8 *)&(pTVar7->Item).Callback = local_78._0_8_;
    *(undefined8 *)&(pTVar7->Item).Callback.field_0x28 = 0;
    if (local_78._0_8_ != 0) {
      plVar11 = (longlong *)(local_78 + 0x10);
      if (local_50 != (longlong *)0x0) {
        plVar11 = local_50;
      }
      (**(code **)*plVar11)();
    }
    pTVar2 = (this->PendingReadbacks).Head;
    (this->PendingReadbacks).Head = pTVar7;
    pTVar2->NextNode = pTVar7;
  }
  if (local_78._0_8_ != 0) {
    plVar11 = (longlong *)(local_78 + 0x10);
    if (local_50 != (longlong *)0x0) {
      plVar11 = local_50;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if (local_88 != (FRHIGPUFence *)0x0) {
    FRHIResource::Release((FRHIResource *)local_88);
  }
  FVar6 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)&local_a8;
  if (local_a8.SecondaryData !=
      (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FVar6 = local_a8.SecondaryData;
  }
  DestructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int>
            ((TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)FVar6,local_90);
  if (local_a8.SecondaryData !=
      (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FMemory::Free((void *)local_a8.SecondaryData);
  }
  if (*(longlong *)param_5 != 0) {
    plVar11 = (longlong *)&param_5->field_0x10;
    if (*(longlong **)&param_5->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_5->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// EnqueueReadback @ 1492e38d0

void __thiscall
FNiagaraGpuReadbackManager::EnqueueReadback
          (FNiagaraGpuReadbackManager *this,FRHICommandList *param_1,FRHIBuffer *param_2,
          TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *param_3)

{
  code *pcVar1;
  bool bVar2;
  longlong *plVar3;
  TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> local_58;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuReadbackManager.cpp"
                       ,0xad,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_58._40_8_ = *(undefined8 *)&param_3->field_0x28;
  local_58._0_8_ = *(undefined8 *)param_3;
  *(undefined8 *)&param_3->field_0x28 = 0;
  local_58._32_8_ = *(undefined8 *)&param_3->field_0x20;
  local_58._16_8_ = *(undefined8 *)&param_3->field_0x10;
  local_58._24_8_ = *(undefined8 *)&param_3->field_0x18;
  if (local_58._0_8_ != 0) {
    *(undefined8 *)param_3 = 0;
  }
  EnqueueReadback(this,param_1,param_2,0,(param_2->Desc).Size,&local_58);
  if (*(longlong *)param_3 != 0) {
    plVar3 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return;
}

// EnqueueReadbacks @ 1492e39a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001492e3d3c) */
/* WARNING: Removing unreachable block (ram,0x0001492e3d4a) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGpuReadbackManager::EnqueueReadbacks
          (FNiagaraGpuReadbackManager *this,FRDGBuilder *param_1,
          TArrayView<FNiagaraGpuReadbackManager::FRDGBufferRequest_const_,int> *param_2,
          TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *param_3)

{
  code *pcVar1;
  longlong lVar2;
  FRDGBuffer *pFVar3;
  undefined8 this_00;
  bool bVar4;
  uint uVar5;
  FRDGEventName *pFVar6;
  FReadbackBufferParameters *pFVar7;
  int iVar8;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> FVar9;
  longlong *plVar10;
  uint uVar11;
  TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *pTVar12;
  FRHIGPUFence *this_01;
  FRHIResource *this_02;
  FRHIGPUFence *this_03;
  uint uVar13;
  uint uVar14;
  undefined1 auStackY_188 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  FRHIGPUFence *local_150;
  longlong local_148;
  TArrayView<FNiagaraGpuReadbackManager::FRDGBufferRequest_const_,int> *local_140;
  FRDGBuffer *local_138;
  FRDGBuilder *local_130;
  TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *local_128;
  TQueue<FNiagaraGpuReadbackManager::FPendingReadback,1> *local_120;
  FRHIResource *local_118;
  <lambda_1> local_110;
  FRDGBuffer *local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  FRHIGPUFence *local_e0;
  FRDGEventName local_d8;
  undefined1 local_b8 [88];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar13 = 0;
  local_158 = 0;
  local_140 = param_2;
  local_130 = param_1;
  local_128 = param_3;
  local_120 = &this->PendingReadbacks;
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuReadbackManager.cpp"
                         ,0x88,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_b8._16_8_ = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0;
  local_b8._24_4_ = 0;
  local_b8._28_4_ = 1;
  local_b8._32_8_ = (FRHIGPUFence *)0x0;
  local_b8._48_8_ = 0;
  local_60 = (longlong *)0x0;
  (**(code **)(GDynamicRHI->_padding_ + 0xb8))(GDynamicRHI,&local_150,&FenceName);
  this_00 = local_b8._32_8_;
  local_b8._32_8_ = local_150;
  local_150 = (FRHIGPUFence *)0x0;
  if (((FRHIGPUFence *)this_00 != (FRHIGPUFence *)0x0) &&
     (FRHIResource::Release((FRHIResource *)this_00), local_150 != (FRHIGPUFence *)0x0)) {
    FRHIResource::Release((FRHIResource *)local_150);
  }
  TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>::operator=
            ((TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)
             (local_b8 + 0x30),param_3);
  (**(code **)(*(longlong *)local_b8._32_8_ + 0x10))();
  iVar8 = param_2->ArrayNum;
  if (0 < iVar8) {
    local_148 = 0;
    this_02 = local_118;
    this_03 = local_e0;
    uVar14 = uVar13;
    do {
      lVar2 = local_148;
      uVar11 = ~uVar13 >> 0x1f;
      uVar5 = 0;
      if ((int)uVar13 < iVar8) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      local_138 = *(FRDGBuffer **)((longlong)&param_2->DataPtr->Buffer + lVar2);
      (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,&local_158);
      uVar5 = 0;
      if ((int)uVar13 < param_2->ArrayNum) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar8 = param_2->ArrayNum;
      uVar5 = 0;
      if ((int)uVar13 < iVar8) {
        uVar5 = uVar11;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = *(uint *)((longlong)&param_2->DataPtr->Size + local_148);
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumBytes > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuReadbackManager.cpp"
                             ,0x96,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (local_b8._24_4_ == local_b8._28_4_) {
        local_b8._24_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>_>
                       (0x810,(ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>
                               *)local_b8,(int *)(local_b8 + 0x1c));
      }
      FVar9 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8;
      if ((ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8._16_8_ !=
          (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
        FVar9 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)
                local_b8._16_8_;
      }
      pTVar12 = (TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)
                ((longlong)(int)local_b8._24_4_ * 0x10 + (longlong)FVar9);
      local_b8._24_4_ = local_b8._24_4_ + 1;
      *(undefined8 *)pTVar12 = 0;
      *(ulonglong *)pTVar12 = CONCAT44(uStack_154,local_158);
      if ((FRHIResource *)CONCAT44(uStack_154,local_158) != (FRHIResource *)0x0) {
        FRHIResource::AddRef((FRHIResource *)CONCAT44(uStack_154,local_158));
      }
      *(uint *)&pTVar12->field_0x8 = uVar5;
      this_01 = (FRHIGPUFence *)local_b8._32_8_;
      if (uVar13 == iVar8 - 1U) {
        uVar14 = uVar14 | 1;
        this_03 = this_01;
        if ((FRHIGPUFence *)local_b8._32_8_ != (FRHIGPUFence *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_b8._32_8_);
        }
      }
      else {
        uVar14 = uVar14 | 2;
        this_02 = (FRHIResource *)0x0;
        this_01 = (FRHIGPUFence *)0x0;
      }
      pFVar3 = local_138;
      local_110.ReadbackBuffer.Reference = (FRHIStagingBuffer *)CONCAT44(uStack_154,local_158);
      local_110.Buffer = local_138;
      if (local_110.ReadbackBuffer.Reference != (FRHIStagingBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_110.ReadbackBuffer.Reference);
      }
      local_110.Offset = 0;
      local_110.NumBytes = uVar5;
      local_110.Fence.Reference = this_01;
      if (this_01 != (FRHIGPUFence *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_01);
      }
      pFVar6 = FRDGEventName::FRDGEventName(&local_d8,1,L"NiagaraReadback");
      pFVar7 = FRDGBuilder::AllocParameters<FReadbackBufferParameters>(local_130);
      local_f0 = pFVar3;
      uStack_e8 = 0x80;
      *(FRDGBuffer **)&pFVar7->Buffer = pFVar3;
      *(ulonglong *)&(pFVar7->Buffer).field_0x8 = CONCAT44(uStack_e4,0x80);
      FRDGBuilder::
      AddPass<FReadbackBufferParameters,_FNiagaraGpuReadbackManager::EnqueueReadbacks_::__l11::<lambda_1>_>
                (local_130,pFVar6,pFVar7,Readback,&local_110);
      if (local_d8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_d8.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (local_110.Fence.Reference != (FRHIGPUFence *)0x0) {
        FRHIResource::Release((FRHIResource *)local_110.Fence.Reference);
      }
      if (local_110.ReadbackBuffer.Reference != (FRHIStagingBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_110.ReadbackBuffer.Reference);
      }
      if (((uVar14 & 2) != 0) && (uVar14 = uVar14 & 0xfffffffd, this_02 != (FRHIResource *)0x0)) {
        FRHIResource::Release(this_02);
      }
      if (((uVar14 & 1) != 0) && (uVar14 = uVar14 & 0xfffffffe, this_03 != (FRHIGPUFence *)0x0)) {
        FRHIResource::Release((FRHIResource *)this_03);
      }
      if ((FRHIResource *)CONCAT44(uStack_154,local_158) != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)CONCAT44(uStack_154,local_158));
      }
      uVar13 = uVar13 + 1;
      local_148 = local_148 + 0x10;
      iVar8 = local_140->ArrayNum;
      param_3 = local_128;
      param_2 = local_140;
    } while ((int)uVar13 < iVar8);
  }
  TQueue<FNiagaraGpuReadbackManager::FPendingReadback,1>::Enqueue
            (local_120,(FPendingReadback *)local_b8);
  if (local_b8._48_8_ != 0) {
    plVar10 = (longlong *)(local_b8 + 0x40);
    if (local_60 != (longlong *)0x0) {
      plVar10 = local_60;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  if ((FRHIGPUFence *)local_b8._32_8_ != (FRHIGPUFence *)0x0) {
    FRHIResource::Release((FRHIResource *)local_b8._32_8_);
  }
  FVar9 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8;
  if ((ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8._16_8_ !=
      (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FVar9 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8._16_8_;
  }
  DestructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int>
            ((TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)FVar9,local_b8._24_4_);
  if ((ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8._16_8_ !=
      (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FMemory::Free((void *)local_b8._16_8_);
  }
  if (*(longlong *)param_3 != 0) {
    plVar10 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return;
}

// EnqueueReadbacks @ 1492e3ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001492e417a) */
/* WARNING: Removing unreachable block (ram,0x0001492e4188) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGpuReadbackManager::EnqueueReadbacks
          (FNiagaraGpuReadbackManager *this,FRDGBuilder *param_1,
          TArrayView<FRDGBuffer_*_const,int> *param_2,
          TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *param_3)

{
  FRDGBuffer *pFVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 this_00;
  bool bVar4;
  FRDGEventName *pFVar5;
  FReadbackBufferParameters *pFVar6;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> FVar7;
  longlong *plVar8;
  int iVar9;
  FRHIGPUFence *this_01;
  FRHIResource *this_02;
  FRHIGPUFence *this_03;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *pTVar13;
  undefined1 auStackY_188 [32];
  undefined4 local_158;
  undefined4 uStack_154;
  FRHIGPUFence *local_150;
  longlong local_148;
  FRDGBuffer *local_140;
  FRDGBuilder *local_138;
  TArrayView<FRDGBuffer_*_const,int> *local_130;
  TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *local_128;
  TQueue<FNiagaraGpuReadbackManager::FPendingReadback,1> *local_120;
  FRHIResource *local_118;
  <lambda_1> local_110;
  FRDGBuffer *local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  FRHIGPUFence *local_e0;
  FRDGEventName local_d8;
  undefined1 local_b8 [88];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_188;
  uVar11 = 0;
  local_158 = 0;
  local_138 = param_1;
  local_130 = param_2;
  local_128 = param_3;
  local_120 = &this->PendingReadbacks;
  bVar4 = IsInRenderingThread();
  if ((!bVar4) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuReadbackManager.cpp"
                         ,0x65,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_b8._16_8_ = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0;
  local_b8._24_4_ = 0;
  local_b8._28_4_ = 1;
  local_b8._32_8_ = (FRHIGPUFence *)0x0;
  local_b8._48_8_ = 0;
  local_60 = (longlong *)0x0;
  (**(code **)(GDynamicRHI->_padding_ + 0xb8))(GDynamicRHI,&local_150,&FenceName);
  this_00 = local_b8._32_8_;
  local_b8._32_8_ = local_150;
  local_150 = (FRHIGPUFence *)0x0;
  if (((FRHIGPUFence *)this_00 != (FRHIGPUFence *)0x0) &&
     (FRHIResource::Release((FRHIResource *)this_00), local_150 != (FRHIGPUFence *)0x0)) {
    FRHIResource::Release((FRHIResource *)local_150);
  }
  TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>::operator=
            ((TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)
             (local_b8 + 0x30),param_3);
  (**(code **)(*(longlong *)local_b8._32_8_ + 0x10))();
  iVar9 = param_2->ArrayNum;
  if (0 < iVar9) {
    local_148 = 0;
    this_02 = local_118;
    this_03 = local_e0;
    uVar12 = uVar11;
    do {
      lVar3 = local_148;
      uVar10 = 0;
      if ((int)uVar11 < iVar9) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = *(FRDGBuffer **)(lVar3 + (longlong)param_2->DataPtr);
      local_140 = pFVar1;
      (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,&local_158);
      uVar10 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
      if (local_b8._24_4_ == local_b8._28_4_) {
        local_b8._24_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>_>
                       (0x810,(ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>
                               *)local_b8,(int *)(local_b8 + 0x1c));
      }
      FVar7 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8;
      if ((ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8._16_8_ !=
          (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
        FVar7 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)
                local_b8._16_8_;
      }
      pTVar13 = (TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)
                ((longlong)(int)local_b8._24_4_ * 0x10 + (longlong)FVar7);
      local_b8._24_4_ = local_b8._24_4_ + 1;
      *(undefined8 *)pTVar13 = 0;
      *(ulonglong *)pTVar13 = CONCAT44(uStack_154,local_158);
      if ((FRHIResource *)CONCAT44(uStack_154,local_158) != (FRHIResource *)0x0) {
        FRHIResource::AddRef((FRHIResource *)CONCAT44(uStack_154,local_158));
      }
      *(uint *)&pTVar13->field_0x8 = uVar10;
      this_01 = (FRHIGPUFence *)local_b8._32_8_;
      if (uVar11 == iVar9 - 1U) {
        uVar12 = uVar12 | 1;
        this_03 = this_01;
        if ((FRHIGPUFence *)local_b8._32_8_ != (FRHIGPUFence *)0x0) {
          FRHIResource::AddRef((FRHIResource *)local_b8._32_8_);
        }
      }
      else {
        uVar12 = uVar12 | 2;
        this_02 = (FRHIResource *)0x0;
        this_01 = (FRHIGPUFence *)0x0;
      }
      pFVar1 = local_140;
      local_110.ReadbackBuffer.Reference = (FRHIStagingBuffer *)CONCAT44(uStack_154,local_158);
      local_110.Buffer = local_140;
      if (local_110.ReadbackBuffer.Reference != (FRHIStagingBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_110.ReadbackBuffer.Reference);
      }
      local_110.Offset = 0;
      local_110.NumBytes = uVar10;
      local_110.Fence.Reference = this_01;
      if (this_01 != (FRHIGPUFence *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_01);
      }
      pFVar5 = FRDGEventName::FRDGEventName(&local_d8,1,L"NiagaraReadback");
      pFVar6 = FRDGBuilder::AllocParameters<FReadbackBufferParameters>(local_138);
      local_f0 = pFVar1;
      uStack_e8 = 0x80;
      *(FRDGBuffer **)&pFVar6->Buffer = pFVar1;
      *(ulonglong *)&(pFVar6->Buffer).field_0x8 = CONCAT44(uStack_e4,0x80);
      FRDGBuilder::
      AddPass<FReadbackBufferParameters,_FNiagaraGpuReadbackManager::EnqueueReadbacks_::__l11::<lambda_1>_>
                (local_138,pFVar5,pFVar6,Readback,&local_110);
      if (local_d8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_d8.FormattedEventName.Data.AllocatorInstance.Data);
      }
      if (local_110.Fence.Reference != (FRHIGPUFence *)0x0) {
        FRHIResource::Release((FRHIResource *)local_110.Fence.Reference);
      }
      if (local_110.ReadbackBuffer.Reference != (FRHIStagingBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_110.ReadbackBuffer.Reference);
      }
      if (((uVar12 & 2) != 0) && (uVar12 = uVar12 & 0xfffffffd, this_02 != (FRHIResource *)0x0)) {
        FRHIResource::Release(this_02);
      }
      if (((uVar12 & 1) != 0) && (uVar12 = uVar12 & 0xfffffffe, this_03 != (FRHIGPUFence *)0x0)) {
        FRHIResource::Release((FRHIResource *)this_03);
      }
      if ((FRHIResource *)CONCAT44(uStack_154,local_158) != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)CONCAT44(uStack_154,local_158));
      }
      uVar11 = uVar11 + 1;
      local_148 = local_148 + 8;
      iVar9 = local_130->ArrayNum;
      param_3 = local_128;
      param_2 = local_130;
    } while ((int)uVar11 < iVar9);
  }
  TQueue<FNiagaraGpuReadbackManager::FPendingReadback,1>::Enqueue
            (local_120,(FPendingReadback *)local_b8);
  if (local_b8._48_8_ != 0) {
    plVar8 = (longlong *)(local_b8 + 0x40);
    if (local_60 != (longlong *)0x0) {
      plVar8 = local_60;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  if ((FRHIGPUFence *)local_b8._32_8_ != (FRHIGPUFence *)0x0) {
    FRHIResource::Release((FRHIResource *)local_b8._32_8_);
  }
  FVar7 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8;
  if ((ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8._16_8_ !=
      (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FVar7 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8._16_8_;
  }
  DestructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int>
            ((TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)FVar7,local_b8._24_4_);
  if ((ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8._16_8_ !=
      (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FMemory::Free((void *)local_b8._16_8_);
  }
  if (*(longlong *)param_3 != 0) {
    plVar8 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar8 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar8 + 0x10))();
  }
  return;
}

// EnqueueReadbacks @ 1492e42e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001492e4416) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGpuReadbackManager::EnqueueReadbacks
          (FNiagaraGpuReadbackManager *this,FRHICommandList *param_1,
          TArrayView<FNiagaraGpuReadbackManager::FBufferRequest_const_,int> *param_2,
          TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  FRHIBuffer *pFVar4;
  code *pcVar5;
  bool bVar6;
  IRHIComputeContext *pIVar7;
  undefined8 *puVar8;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> FVar9;
  longlong *plVar10;
  FBufferRequest *pFVar11;
  longlong lVar12;
  TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *pTVar13;
  FBufferRequest *pFVar14;
  undefined1 auStack_108 [32];
  uint local_e8;
  undefined8 local_d8;
  FRHIGPUFence *local_d0;
  TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *local_c8;
  TQueue<FNiagaraGpuReadbackManager::FPendingReadback,1> *local_c0;
  undefined1 local_b8 [88];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_c8 = param_3;
  local_c0 = &this->PendingReadbacks;
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuReadbackManager.cpp"
                         ,0xd8,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar11 = param_2->DataPtr;
  pFVar14 = pFVar11 + param_2->ArrayNum;
  local_b8._16_8_ = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0;
  local_b8._24_4_ = 0;
  local_b8._28_4_ = 1;
  local_b8._32_8_ = (FRHIGPUFence *)0x0;
  local_b8._48_8_ = 0;
  local_60 = (longlong *)0x0;
  while( true ) {
    if (pFVar11 == pFVar14) {
      (**(code **)(GDynamicRHI->_padding_ + 0xb8))(GDynamicRHI,&local_d0,&FenceName);
      uVar3 = local_b8._32_8_;
      local_b8._32_8_ = local_d0;
      local_d0 = (FRHIGPUFence *)0x0;
      if (((FRHIGPUFence *)uVar3 != (FRHIGPUFence *)0x0) &&
         (FRHIResource::Release((FRHIResource *)uVar3), local_d0 != (FRHIGPUFence *)0x0)) {
        FRHIResource::Release((FRHIResource *)local_d0);
      }
      TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>::operator=
                ((TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)
                 (local_b8 + 0x30),param_3);
      (**(code **)(*(longlong *)local_b8._32_8_ + 0x10))();
      (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI,param_1,local_b8._32_8_);
      TQueue<FNiagaraGpuReadbackManager::FPendingReadback,1>::Enqueue
                (&this->PendingReadbacks,(FPendingReadback *)local_b8);
      if (local_b8._48_8_ != 0) {
        plVar10 = (longlong *)(local_b8 + 0x40);
        if (local_60 != (longlong *)0x0) {
          plVar10 = local_60;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      if ((FRHIGPUFence *)local_b8._32_8_ != (FRHIGPUFence *)0x0) {
        FRHIResource::Release((FRHIResource *)local_b8._32_8_);
      }
      FVar9 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8;
      if ((ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8._16_8_ !=
          (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
        FVar9 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)
                local_b8._16_8_;
      }
      DestructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int>
                ((TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)FVar9,local_b8._24_4_);
      if ((ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8._16_8_ !=
          (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
        FMemory::Free((void *)local_b8._16_8_);
      }
      if (*(longlong *)param_3 != 0) {
        plVar10 = (longlong *)&param_3->field_0x10;
        if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
          plVar10 = *(longlong **)&param_3->field_0x28;
        }
        (**(code **)(*plVar10 + 0x10))();
      }
      return;
    }
    if ((pFVar11->Size == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferRequest.Size > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuReadbackManager.cpp"
                           ,0xdd,L""), bVar6)) break;
    (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,&local_d8);
    if (local_b8._24_4_ == local_b8._28_4_) {
      local_b8._24_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>_>
                     (0x810,(ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> *
                            )local_b8,(int *)(local_b8 + 0x1c));
    }
    lVar12 = (longlong)(int)local_b8._24_4_;
    local_b8._24_4_ = local_b8._24_4_ + 1;
    FVar9 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8;
    if ((ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8._16_8_ !=
        (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
      FVar9 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8._16_8_
      ;
    }
    pTVar13 = (TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)
              (lVar12 * 0x10 + (longlong)FVar9);
    *(undefined8 *)pTVar13 = 0;
    *(undefined8 *)pTVar13 = local_d8;
    *(uint *)&pTVar13->field_0x8 = pFVar11->Size;
    local_d8 = 0;
    uVar1 = pFVar11->Size;
    uVar2 = pFVar11->Offset;
    uVar3 = *(undefined8 *)pTVar13;
    pFVar4 = pFVar11->Buffer;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar8 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar8;
      *(undefined8 **)&param_1->field_0x30 = puVar8 + 1;
      puVar8[1] = 0;
      *puVar8 = &___7FRHICommandCopyToStagingBuffer__6B_;
      puVar8[2] = pFVar4;
      puVar8[3] = uVar3;
      *(uint *)(puVar8 + 4) = uVar2;
      *(uint *)((longlong)puVar8 + 0x24) = uVar1;
    }
    else {
      pIVar7 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
      local_e8 = uVar1;
      (**(code **)(pIVar7->_padding_ + 0xd8))(pIVar7,pFVar4,uVar3,uVar2);
    }
    pFVar11 = pFVar11 + 1;
    this = (FNiagaraGpuReadbackManager *)local_c0;
    param_3 = local_c8;
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// EnqueueReadbacks @ 1492e45d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001492e4704) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGpuReadbackManager::EnqueueReadbacks
          (FNiagaraGpuReadbackManager *this,FRHICommandList *param_1,
          TArrayView<FRHIBuffer_*_const,int> *param_2,
          TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *param_3)

{
  FRHIBuffer **ppFVar1;
  uint uVar2;
  undefined4 uVar3;
  FRHIBuffer *pFVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  IRHIComputeContext *pIVar8;
  undefined8 *puVar9;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> FVar10;
  longlong *plVar11;
  FRHIBuffer **ppFVar12;
  longlong lVar13;
  TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *pTVar14;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined8 local_d8;
  FRHIGPUFence *local_d0;
  TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *local_c8;
  TQueue<FNiagaraGpuReadbackManager::FPendingReadback,1> *local_c0;
  undefined1 local_b8 [88];
  longlong *local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_c8 = param_3;
  local_c0 = &this->PendingReadbacks;
  bVar7 = IsInRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuReadbackManager.cpp"
                         ,0xc5,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  ppFVar12 = param_2->DataPtr;
  local_b8._16_8_ = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0;
  local_b8._24_4_ = 0;
  local_b8._32_8_ = (FRHIGPUFence *)0x0;
  local_b8._48_8_ = 0;
  local_60 = (longlong *)0x0;
  local_b8._28_4_ = 1;
  ppFVar1 = ppFVar12 + param_2->ArrayNum;
  for (; ppFVar12 != ppFVar1; ppFVar12 = ppFVar12 + 1) {
    pFVar4 = *ppFVar12;
    uVar2 = (pFVar4->Desc).Size;
    (**(code **)(GDynamicRHI->_padding_ + 0xe0))(GDynamicRHI,&local_d8);
    if (local_b8._24_4_ == local_b8._28_4_) {
      local_b8._24_4_ =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>_>
                     (0x810,(ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> *
                            )local_b8,(int *)(local_b8 + 0x1c));
    }
    lVar13 = (longlong)(int)local_b8._24_4_;
    local_b8._24_4_ = local_b8._24_4_ + 1;
    FVar10 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8;
    if ((ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8._16_8_ !=
        (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
      FVar10 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)
               local_b8._16_8_;
    }
    pTVar14 = (TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)
              (lVar13 * 0x10 + (longlong)FVar10);
    *(undefined8 *)pTVar14 = 0;
    *(undefined8 *)pTVar14 = local_d8;
    *(uint *)&pTVar14->field_0x8 = uVar2;
    local_d8 = 0;
    uVar3 = *(undefined4 *)&pTVar14->field_0x8;
    uVar5 = *(undefined8 *)pTVar14;
    if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
      puVar9 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar9;
      *(undefined8 **)&param_1->field_0x30 = puVar9 + 1;
      puVar9[1] = 0;
      *puVar9 = &___7FRHICommandCopyToStagingBuffer__6B_;
      puVar9[2] = pFVar4;
      puVar9[3] = uVar5;
      *(undefined4 *)(puVar9 + 4) = 0;
      *(undefined4 *)((longlong)puVar9 + 0x24) = uVar3;
    }
    else {
      pIVar8 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
      local_e8 = uVar3;
      (**(code **)(pIVar8->_padding_ + 0xd8))(pIVar8,pFVar4,uVar5,0);
    }
    this = (FNiagaraGpuReadbackManager *)local_c0;
    param_3 = local_c8;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0xb8))(GDynamicRHI,&local_d0,&FenceName);
  uVar5 = local_b8._32_8_;
  local_b8._32_8_ = local_d0;
  local_d0 = (FRHIGPUFence *)0x0;
  if (((FRHIGPUFence *)uVar5 != (FRHIGPUFence *)0x0) &&
     (FRHIResource::Release((FRHIResource *)uVar5), local_d0 != (FRHIGPUFence *)0x0)) {
    FRHIResource::Release((FRHIResource *)local_d0);
  }
  TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)>::operator=
            ((TFunction<void___cdecl(TArrayView<TTuple<void_*,unsigned_int>_const_,int>)> *)
             (local_b8 + 0x30),param_3);
  (**(code **)(*(longlong *)local_b8._32_8_ + 0x10))();
  (**(code **)(GDynamicRHI->_padding_ + 0xc0))(GDynamicRHI,param_1,local_b8._32_8_);
  TQueue<FNiagaraGpuReadbackManager::FPendingReadback,1>::Enqueue
            (&this->PendingReadbacks,(FPendingReadback *)local_b8);
  if (local_b8._48_8_ != 0) {
    plVar11 = (longlong *)(local_b8 + 0x40);
    if (local_60 != (longlong *)0x0) {
      plVar11 = local_60;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((FRHIGPUFence *)local_b8._32_8_ != (FRHIGPUFence *)0x0) {
    FRHIResource::Release((FRHIResource *)local_b8._32_8_);
  }
  FVar10 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8;
  if ((ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8._16_8_ !=
      (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FVar10 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8._16_8_;
  }
  DestructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int>
            ((TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)FVar10,local_b8._24_4_);
  if ((ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)local_b8._16_8_ !=
      (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
    FMemory::Free((void *)local_b8._16_8_);
  }
  if (*(longlong *)param_3 != 0) {
    plVar11 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar11 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  return;
}

// Tick @ 14930aa40

void __thiscall FNiagaraGpuReadbackManager::Tick(FNiagaraGpuReadbackManager *this)

{
  TickInternal(this,false);
  return;
}

// TickInternal @ 14930ab60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraGpuReadbackManager::TickInternal(FNiagaraGpuReadbackManager *this,bool param_1)

{
  int *piVar1;
  uchar *puVar2;
  int iVar3;
  TNode *pTVar4;
  longlong *plVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong *plVar13;
  ForElementType<TTuple<void_*,unsigned_int>_> FVar14;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> FVar15;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> FVar16;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> FVar17;
  char local_res10 [8];
  undefined1 auStackY_e8 [32];
  undefined1 local_b8;
  undefined1 local_b7 [7];
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> *local_b0;
  TQueue<FNiagaraGpuReadbackManager::FPendingReadback,1> *local_a8;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> local_a0;
  char *local_98;
  ForElementType<TTuple<void_*,unsigned_int>_> local_88;
  int iStack_80;
  undefined4 uStack_7c;
  ForElementType<TTuple<void_*,unsigned_int>_> local_78;
  undefined8 uStack_70;
  ForElementType<TTuple<void_*,unsigned_int>_> local_68;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  local_res10[0] = param_1;
  local_a8 = &this->PendingReadbacks;
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraGpuReadbackManager.cpp"
                         ,0x1a,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_4c = 1;
  local_68.SecondaryData = (ForElementType<TTuple<void_*,unsigned_int>_>)0x0;
  local_50 = 0;
  while (((this->PendingReadbacks).Tail)->NextNode != (TNode *)0x0) {
    pTVar4 = ((this->PendingReadbacks).Tail)->NextNode;
    FVar15 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)&pTVar4->Item;
    if ((FVar15 == (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) ||
       ((local_res10[0] == '\0' &&
        (cVar9 = (**(code **)(((pTVar4->Item).Fence.Reference)->_padding_ + 0x20))(), cVar9 == '\0')
        ))) break;
    FVar17 = (pTVar4->Item).StagingBuffers.AllocatorInstance.SecondaryData;
    local_b0 = &(pTVar4->Item).StagingBuffers.AllocatorInstance.SecondaryData;
    piVar1 = &(pTVar4->Item).StagingBuffers.ArrayNum;
    iVar3 = *piVar1;
    FVar16 = FVar15;
    if (FVar17 != (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
      FVar16 = FVar17;
    }
    FVar17 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)
             ((longlong)FVar16 + (longlong)iVar3 * 0x10);
    while( true ) {
      if (*piVar1 != iVar3) {
        local_b8 = 0;
        `TCheckedPointerIterator<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_b8);
      }
      iVar7 = local_50;
      if (FVar16 == FVar17) break;
      lVar10 = (**(code **)(GDynamicRHI->_padding_ + 0xf8))
                         (GDynamicRHI,0x154be5ed0,*(undefined8 *)FVar16,
                          (pTVar4->Item).Fence.Reference);
      if ((lVar10 == 0) && (*(int *)((longlong)FVar16 + 8) != 0)) {
        local_98 = local_res10;
        local_a0 = FVar16;
        `FNiagaraGpuReadbackManager::TickInternal'::__l18::<lambda_1>::operator()(&local_a0);
      }
      if (local_50 == local_4c) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<void_*,unsigned_int>_>_>
                             (0x810,&local_68,&local_4c);
      }
      FVar14 = (ForElementType<TTuple<void_*,unsigned_int>_>)&local_68;
      if (local_68.SecondaryData != (ForElementType<TTuple<void_*,unsigned_int>_>)0x0) {
        FVar14 = local_68.SecondaryData;
      }
      lVar12 = (longlong)local_50;
      local_50 = local_50 + 1;
      *(longlong *)((longlong)FVar14 + lVar12 * 0x10) = lVar10;
      puVar2 = (uchar *)((longlong)FVar16 + 8);
      FVar16 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)
               ((longlong)FVar16 + 0x10);
      *(undefined4 *)((uchar *)((longlong)FVar14 + 8) + lVar12 * 0x10) = *(undefined4 *)puVar2;
    }
    FVar14 = (ForElementType<TTuple<void_*,unsigned_int>_>)&local_68;
    if (local_68.SecondaryData != (ForElementType<TTuple<void_*,unsigned_int>_>)0x0) {
      FVar14 = local_68.SecondaryData;
    }
    if ((local_50 < 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iStack_80 = iVar7;
    uStack_70 = CONCAT44(uStack_7c,iVar7);
    local_88 = FVar14;
    local_78 = FVar14;
    UE::Core::Private::Function::CheckCallable(*(void **)&(pTVar4->Item).Callback);
    plVar5 = *(longlong **)&(pTVar4->Item).Callback.field_0x28;
    pcVar6 = *(code **)&(pTVar4->Item).Callback;
    plVar13 = (longlong *)&(pTVar4->Item).Callback.field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar13 = plVar5;
    }
    uVar11 = (**(code **)(*plVar13 + 8))();
    (*pcVar6)(uVar11,&local_78);
    iVar3 = *piVar1;
    if (*local_b0 != (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
      FVar15 = *local_b0;
    }
    FVar17 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)
             ((longlong)FVar15 + (longlong)iVar3 * 0x10);
    while( true ) {
      if (*piVar1 != iVar3) {
        local_b7[0] = 0;
        `TCheckedPointerIterator<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_b7);
      }
      if (FVar15 == FVar17) break;
      (**(code **)(GDynamicRHI->_padding_ + 0x100))(GDynamicRHI,0x154be5ed0);
      FVar15 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)
               ((longlong)FVar15 + 0x10);
    }
    local_50 = 0;
    if ((local_4c < 0) && (local_4c != 0)) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<void_*,unsigned_int>_>_>
                (0x10,8,0,&local_68,0,&local_4c);
    }
    this = (FNiagaraGpuReadbackManager *)local_a8;
    TQueue<FNiagaraGpuReadbackManager::FPendingReadback,1>::Pop(local_a8);
  }
  if (local_68.SecondaryData != (ForElementType<TTuple<void_*,unsigned_int>_>)0x0) {
    FMemory::Free((void *)local_68.SecondaryData);
  }
  return;
}

// WaitCompletion @ 14930de90

void __thiscall
FNiagaraGpuReadbackManager::WaitCompletion
          (FNiagaraGpuReadbackManager *this,FRHICommandListImmediate *param_1)

{
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  FRHICommandListImmediate::SubmitAndBlockUntilGPUIdle(param_1);
  TickInternal(this,true);
  return;
}

// operator() @ 1505403e0

bool __thiscall
`FNiagaraGpuReadbackManager::TickInternal'::__l18::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5819570073492258857>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5819570073492258857>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

