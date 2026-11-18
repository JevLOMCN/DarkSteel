// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ~TQueue<FPersistentAudioParticleData,0> @ 1490b5c30

void __thiscall
TQueue<FPersistentAudioParticleData,0>::~TQueue<FPersistentAudioParticleData,0>
          (TQueue<FPersistentAudioParticleData,0> *this)

{
  TNode *pTVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  pTVar1 = this->Tail;
  while (pTVar1 != (TNode *)0x0) {
    this->Tail = pTVar1->NextNode;
    if (*(longlong *)&(pTVar1->Item).UpdateCallback != 0) {
      plVar2 = *(longlong **)&(pTVar1->Item).UpdateCallback.field_0x28;
      plVar3 = (longlong *)&(pTVar1->Item).UpdateCallback.field_0x10;
      if (plVar2 != (longlong *)0x0) {
        plVar3 = plVar2;
      }
      (**(code **)(*plVar3 + 0x10))();
    }
    ::operator_delete(pTVar1,0x50);
    pTVar1 = this->Tail;
  }
  return;
}

// Enqueue @ 1492e2ee0

bool __thiscall
TQueue<FNiagaraGpuReadbackManager::FPendingReadback,1>::Enqueue
          (TQueue<FNiagaraGpuReadbackManager::FPendingReadback,1> *this,FPendingReadback *param_1)

{
  int iVar1;
  FRHIGPUFence *this_00;
  longlong lVar2;
  undefined8 *puVar3;
  TNode *pTVar4;
  TNode *pTVar5;
  int *piVar6;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> FVar7;
  undefined8 *puVar8;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> FVar9;
  
  pTVar5 = ::operator_new(0x70);
  if (pTVar5 != (TNode *)0x0) {
    pTVar5->NextNode = (TNode *)0x0;
    (pTVar5->Item).StagingBuffers.AllocatorInstance.SecondaryData =
         (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0;
    FVar7 = (param_1->StagingBuffers).AllocatorInstance.SecondaryData;
    iVar1 = (param_1->StagingBuffers).ArrayNum;
    FVar9 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)param_1;
    if (FVar7 != (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
      FVar9 = FVar7;
    }
    (pTVar5->Item).StagingBuffers.ArrayNum = iVar1;
    piVar6 = &(pTVar5->Item).StagingBuffers.ArrayMax;
    if (iVar1 == 0) {
      *piVar6 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>_>
                (0x10,8,iVar1,0,
                 (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> *)
                 &pTVar5->Item,iVar1,piVar6);
      FVar7 = (pTVar5->Item).StagingBuffers.AllocatorInstance.SecondaryData;
      if (FVar7 == (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
        FVar7 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)&pTVar5->Item
        ;
      }
      ConstructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int>
                ((void *)FVar7,(TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)FVar9,iVar1);
    }
    (pTVar5->Item).Fence.Reference = (FRHIGPUFence *)0x0;
    this_00 = (param_1->Fence).Reference;
    (pTVar5->Item).Fence.Reference = this_00;
    if (this_00 != (FRHIGPUFence *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    lVar2 = *(longlong *)&param_1->Callback;
    *(longlong *)&(pTVar5->Item).Callback = lVar2;
    *(undefined8 *)&(pTVar5->Item).Callback.field_0x28 = 0;
    if (lVar2 != 0) {
      puVar3 = *(undefined8 **)&(param_1->Callback).field_0x28;
      puVar8 = (undefined8 *)&(param_1->Callback).field_0x10;
      if (puVar3 != (undefined8 *)0x0) {
        puVar8 = puVar3;
      }
      (**(code **)*puVar8)();
    }
    pTVar4 = this->Head;
    this->Head = pTVar5;
    pTVar4->NextNode = pTVar5;
    return true;
  }
  return false;
}

// Pop @ 1492fa350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
TQueue<FNiagaraGpuReadbackManager::FPendingReadback,1>::Pop
          (TQueue<FNiagaraGpuReadbackManager::FPendingReadback,1> *this)

{
  TRefCountPtr<FRHIGPUFence> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  FRHIGPUFence *pFVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 uVar10;
  bool bVar11;
  longlong *plVar12;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> FVar13;
  FPendingReadback *_Dst;
  undefined1 auStack_98 [32];
  TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> local_78;
  ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_> local_68;
  undefined8 uStack_60;
  TRefCountPtr<FRHIGPUFence> local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pTVar2 = this->Tail->NextNode;
  if (pTVar2 == (TNode *)0x0) {
    bVar11 = false;
  }
  else {
    pTVar3 = this->Tail;
    this->Tail = pTVar2;
    _Dst = &pTVar2->Item;
    local_68 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0;
    uStack_50 = 0;
    uStack_40 = 0;
    local_28 = 0;
    local_78._0_8_ = 0;
    local_78._8_8_ = 0;
    local_38 = 0;
    uStack_30 = 0;
    uStack_60 = 0x100000000;
    local_58.Reference = (FRHIGPUFence *)0x0;
    local_48 = 0;
    uStack_20 = (longlong *)0x0;
    if (_Dst != (FPendingReadback *)&local_78) {
      FVar13 = (pTVar2->Item).StagingBuffers.AllocatorInstance.SecondaryData;
      if (FVar13 == (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
        FVar13 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)_Dst;
      }
      DestructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int>
                ((TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)FVar13,
                 (pTVar2->Item).StagingBuffers.ArrayNum);
      if (local_68 == (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
        memmove(_Dst,&local_78,0x10);
      }
      FVar13 = (pTVar2->Item).StagingBuffers.AllocatorInstance.SecondaryData;
      if (FVar13 != (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
        FMemory::Free((void *)FVar13);
      }
      (pTVar2->Item).StagingBuffers.AllocatorInstance.SecondaryData = local_68;
      (pTVar2->Item).StagingBuffers.ArrayNum = (int)uStack_60;
      (pTVar2->Item).StagingBuffers.ArrayMax = uStack_60._4_4_;
    }
    uStack_60 = 0x100000000;
    local_68 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0;
    pTVar1 = &(pTVar2->Item).Fence;
    if (pTVar1 != &local_58) {
      pFVar4 = pTVar1->Reference;
      pTVar1->Reference = local_58.Reference;
      local_58.Reference = (FRHIGPUFence *)0x0;
      if (pFVar4 != (FRHIGPUFence *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
    }
    lVar7 = *(longlong *)&(pTVar2->Item).Callback;
    uVar8 = *(undefined8 *)&(pTVar2->Item).Callback.field_0x8;
    lVar9 = *(longlong *)&(pTVar2->Item).Callback.field_0x10;
    uVar10 = *(undefined8 *)&(pTVar2->Item).Callback.field_0x18;
    uVar6 = *(undefined8 *)&(pTVar2->Item).Callback.field_0x20;
    plVar5 = *(longlong **)&(pTVar2->Item).Callback.field_0x28;
    *(longlong *)&(pTVar2->Item).Callback = local_48;
    *(undefined8 *)&(pTVar2->Item).Callback.field_0x8 = uStack_40;
    *(undefined4 *)&(pTVar2->Item).Callback.field_0x10 = (undefined4)local_38;
    *(undefined4 *)&(pTVar2->Item).Callback.field_0x14 = local_38._4_4_;
    *(undefined4 *)&(pTVar2->Item).Callback.field_0x18 = (undefined4)uStack_30;
    *(undefined4 *)&(pTVar2->Item).Callback.field_0x1c = uStack_30._4_4_;
    *(undefined4 *)&(pTVar2->Item).Callback.field_0x20 = (undefined4)local_28;
    *(undefined4 *)&(pTVar2->Item).Callback.field_0x24 = local_28._4_4_;
    *(undefined4 *)&(pTVar2->Item).Callback.field_0x28 = (undefined4)uStack_20;
    *(undefined4 *)&(pTVar2->Item).Callback.field_0x2c = uStack_20._4_4_;
    local_38 = lVar9;
    uStack_30 = uVar10;
    local_28 = uVar6;
    uStack_20 = plVar5;
    local_48 = lVar7;
    uStack_40 = uVar8;
    if (lVar7 != 0) {
      plVar12 = &local_38;
      if (plVar5 != (longlong *)0x0) {
        plVar12 = plVar5;
      }
      (**(code **)(*plVar12 + 0x10))();
    }
    if (local_58.Reference != (FRHIGPUFence *)0x0) {
      FRHIResource::Release((FRHIResource *)local_58.Reference);
    }
    FVar13 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)&local_78;
    if (local_68 != (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
      FVar13 = local_68;
    }
    DestructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int>
              ((TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)FVar13,(int)uStack_60);
    if (local_68 != (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
      FMemory::Free((void *)local_68);
    }
    if (pTVar3 != (TNode *)0x0) {
      if (*(longlong *)&(pTVar3->Item).Callback != 0) {
        plVar5 = *(longlong **)&(pTVar3->Item).Callback.field_0x28;
        plVar12 = (longlong *)&(pTVar3->Item).Callback.field_0x10;
        if (plVar5 != (longlong *)0x0) {
          plVar12 = plVar5;
        }
        (**(code **)(*plVar12 + 0x10))();
      }
      pFVar4 = (pTVar3->Item).Fence.Reference;
      if (pFVar4 != (FRHIGPUFence *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar4);
      }
      FVar13 = (pTVar3->Item).StagingBuffers.AllocatorInstance.SecondaryData;
      if (FVar13 == (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
        FVar13 = (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)
                 &pTVar3->Item;
      }
      DestructItems<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>,int>
                ((TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int> *)FVar13,
                 (pTVar3->Item).StagingBuffers.ArrayNum);
      FVar13 = (pTVar3->Item).StagingBuffers.AllocatorInstance.SecondaryData;
      if (FVar13 != (ForElementType<TTuple<TRefCountPtr<FRHIStagingBuffer>,unsigned_int>_>)0x0) {
        FMemory::Free((void *)FVar13);
      }
      ::operator_delete(pTVar3,0x70);
    }
    bVar11 = true;
  }
  return bVar11;
}

