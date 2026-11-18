// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 6

// FShaderCacheSaveContext @ 145e814a0

FShaderCacheSaveContext * __thiscall
FShaderCacheSaveContext::FShaderCacheSaveContext(FShaderCacheSaveContext *this)

{
  FShaderCacheSerializeContext::FShaderCacheSerializeContext((FShaderCacheSerializeContext *)this);
  this->_padding_ = (longlong)&___7FShaderCacheSaveContext__6B_;
  (this->ShaderObjectRawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShaderObjectRawData).ArrayNum = 0;
  (this->ShaderObjectRawData).ArrayMax = 0;
  (this->Writer).Ptr = (FMemoryWriter64 *)0x0;
  Reset(this);
  return this;
}

// ~FShaderCacheSaveContext @ 145e84850

void __thiscall FShaderCacheSaveContext::~FShaderCacheSaveContext(FShaderCacheSaveContext *this)

{
  FMemoryWriter64 *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = (this->Writer).Ptr;
  if (pFVar1 != (FMemoryWriter64 *)0x0) {
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
  }
  pFVar2 = (this->ShaderObjectRawData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  DestructItems<FCompressedBuffer,int>((FCompressedBuffer *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  DestructItems<FCompositeBuffer,int>((FCompositeBuffer *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)&this->_padding_);
  return;
}

// Finalize @ 145e99b90

void __thiscall FShaderCacheSaveContext::Finalize(FShaderCacheSaveContext *this)

{
  longlong *plVar1;
  ulonglong *puVar2;
  atomic<unsigned___int64> *paVar3;
  longlong lVar4;
  ulonglong uVar5;
  atomic<unsigned___int64> aVar6;
  longlong *plVar7;
  FSharedBuffer FVar8;
  FBufferOwner *pFVar9;
  FBufferOwner *pFVar10;
  FSharedBuffer local_res8;
  
  if (this->_padding_ == 0) {
    pFVar9 = ::operator_new(0x38);
    pFVar10 = (FBufferOwner *)0x0;
    if (pFVar9 != (FBufferOwner *)0x0) {
      pFVar9->Data = (void *)0x0;
      pFVar9->Size = 0;
      pFVar9->ReferenceCountsAndFlags = (atomic<unsigned___int64>)0x0;
      pFVar9[1]._padding_ = 0;
      pFVar9->_padding_ =
           (longlong)
           &___7__TBufferOwnerTArray_EV__TSizedDefaultAllocator__0EA____Private_SharedBuffer_UE__6B_
      ;
      pFVar9[1]._padding_ = (longlong)(this->ShaderObjectRawData).AllocatorInstance.Data;
      (this->ShaderObjectRawData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      pFVar9[1].Data = (void *)(this->ShaderObjectRawData).ArrayNum;
      pFVar9[1].Size = (this->ShaderObjectRawData).ArrayMax;
      (this->ShaderObjectRawData).ArrayNum = 0;
      (this->ShaderObjectRawData).ArrayMax = 0;
      pFVar9->Data = (void *)pFVar9[1]._padding_;
      pFVar9->Size = (ulong64)pFVar9[1].Data;
      LOCK();
      pFVar9->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((ulonglong)pFVar9->ReferenceCountsAndFlags | 0x4000000000000000);
      UNLOCK();
      LOCK();
      pFVar9->ReferenceCountsAndFlags =
           (atomic<unsigned___int64>)
           ((ulonglong)pFVar9->ReferenceCountsAndFlags | 0x1000000000000000);
      UNLOCK();
      pFVar10 = pFVar9;
    }
    FSharedBuffer::FSharedBuffer(&local_res8,pFVar10);
    plVar7 = (longlong *)this->_padding_;
    this->_padding_ = (longlong)local_res8.Owner.Owner;
    local_res8.Owner.Owner =
         (TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>)(FBufferOwner *)0x0;
    if (plVar7 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar7 + 3;
      lVar4 = *plVar1;
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (((uint)lVar4 & 0x3fffffff) == 1) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
        plVar7[1] = 0;
        plVar7[2] = 0;
        LOCK();
        puVar2 = (ulonglong *)(plVar7 + 3);
        uVar5 = *puVar2;
        *puVar2 = *puVar2 - 0x40000000;
        UNLOCK();
        if (((uint)(uVar5 >> 0x1e) & 0x3fffffff) == 1) {
          (**(code **)*plVar7)(plVar7,1);
        }
      }
    }
    FVar8.Owner.Owner = local_res8.Owner.Owner;
    if (local_res8.Owner.Owner != (FBufferOwner *)0x0) {
      LOCK();
      paVar3 = (atomic<unsigned___int64> *)((longlong)local_res8.Owner.Owner + 0x18);
      aVar6 = *paVar3;
      *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 + -1);
      UNLOCK();
      if ((aVar6._0_4_ & 0x3fffffff) == 1) {
        (**(code **)(*(longlong *)local_res8.Owner.Owner + 0x10))(local_res8.Owner.Owner);
        *(void **)((longlong)FVar8.Owner.Owner + 8) = (void *)0x0;
        *(ulong64 *)((longlong)FVar8.Owner.Owner + 0x10) = 0;
        LOCK();
        paVar3 = (atomic<unsigned___int64> *)((longlong)FVar8.Owner.Owner + 0x18);
        aVar6 = *paVar3;
        *paVar3 = (atomic<unsigned___int64>)((longlong)*paVar3 - 0x40000000);
        UNLOCK();
        if (((uint)((ulonglong)aVar6 >> 0x1e) & 0x3fffffff) == 1) {
          (*(code *)**(undefined8 **)FVar8.Owner.Owner)(FVar8.Owner.Owner,1);
        }
      }
    }
  }
  return;
}

// ReserveCode @ 145eb0b70

void __thiscall FShaderCacheSaveContext::ReserveCode(FShaderCacheSaveContext *this,int param_1)

{
  if (-1 < param_1) {
    if (*(int *)((longlong)&this->_padding_ + 4) < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,(ForAnyElementType *)&this->_padding_,(int)this->_padding_,
                 (int *)((longlong)&this->_padding_ + 4));
    }
    if (*(int *)((longlong)&this->_padding_ + 4) < param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,param_1,(ForAnyElementType *)&this->_padding_,(int)this->_padding_,
                 (int *)((longlong)&this->_padding_ + 4));
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Reset @ 145eb0dc0

void __thiscall FShaderCacheSaveContext::Reset(FShaderCacheSaveContext *this)

{
  int *piVar1;
  TUniquePtr<FMemoryWriter64,TDefaultDelete<FMemoryWriter64>_> *pTVar2;
  int iVar3;
  FMemoryWriter64 *pFVar4;
  FMemoryWriter64 *pFVar5;
  undefined8 *puVar6;
  longlong local_18 [2];
  
  FSharedBuffer::Reset((FSharedBuffer *)&this->_padding_);
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  iVar3 = (int)this->_padding_;
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    DestructItems<FCompositeBuffer,int>((FCompositeBuffer *)this->_padding_,iVar3);
    *(undefined4 *)&this->_padding_ = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  else {
    DestructItems<FCompositeBuffer,int>((FCompositeBuffer *)this->_padding_,iVar3);
    *(undefined4 *)&this->_padding_ = 0;
  }
  pFVar5 = (FMemoryWriter64 *)0x0;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  iVar3 = (int)this->_padding_;
  if (*(int *)((longlong)&this->_padding_ + 4) < 0) {
    DestructItems<FCompressedBuffer,int>((FCompressedBuffer *)this->_padding_,iVar3);
    iVar3 = *piVar1;
    *(undefined4 *)&this->_padding_ = 0;
    if (iVar3 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)&this->_padding_,0,piVar1);
    }
  }
  else {
    DestructItems<FCompressedBuffer,int>((FCompressedBuffer *)this->_padding_,iVar3);
    *(undefined4 *)&this->_padding_ = 0;
  }
  pFVar4 = ::operator_new(0xa8);
  if (pFVar4 != (FMemoryWriter64 *)0x0) {
    pFVar5 = FMemoryWriter64::FMemoryWriter64
                       (pFVar4,&this->ShaderObjectRawData,false,false,(FName)0x0);
  }
  pTVar2 = &this->Writer;
  if (pTVar2 == (TUniquePtr<FMemoryWriter64,TDefaultDelete<FMemoryWriter64>_> *)local_18) {
    if (pFVar5 == (FMemoryWriter64 *)0x0) goto LAB_145eb0ef6;
    puVar6 = *(undefined8 **)pFVar5;
  }
  else {
    pFVar4 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar5;
    if (pFVar4 == (FMemoryWriter64 *)0x0) {
      this->_padding_ = (longlong)pFVar5;
      return;
    }
    puVar6 = *(undefined8 **)pFVar4;
    pFVar5 = pFVar4;
  }
  (*(code *)*puVar6)(pFVar5,1);
LAB_145eb0ef6:
  this->_padding_ = (longlong)pTVar2->Ptr;
  return;
}

// SerializeCode @ 145eb4520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FShaderCacheSaveContext::SerializeCode
          (FShaderCacheSaveContext *this,FShaderCodeResource *param_1,int param_2)

{
  int *piVar1;
  FCompositeBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FCompositeBuffer *pFVar6;
  longlong lVar7;
  undefined1 auStack_b8 [32];
  FCompositeBuffer *local_98;
  FCompositeBuffer *local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_68;
  int iStack_60;
  undefined4 uStack_5c;
  FCompositeBuffer local_58;
  FCompositeBuffer local_40;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  pFVar6 = FShaderCodeResource::GetCacheBuffer(param_1,&local_40);
  pFVar2 = (FCompositeBuffer *)this->_padding_;
  if ((pFVar2 <= pFVar6) &&
     (lVar7 = (longlong)*(int *)((longlong)&this->_padding_ + 4), pFVar6 < pFVar2 + lVar7)) {
    local_80 = (longlong)(int)this->_padding_;
    local_78 = 0x18;
    local_98 = pFVar6;
    local_90 = pFVar2;
    local_88 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>
            ((FCompositeBuffer *)(this->_padding_ + (longlong)iVar5 * 0x18),pFVar6);
  FCompositeBuffer::~FCompositeBuffer(&local_40);
  local_68 = this->_padding_;
  iStack_60 = (int)this->_padding_;
  if (iStack_60 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->_padding_ = local_68;
  this->_padding_ = CONCAT44(uStack_5c,iStack_60);
  FCompositeBuffer::FCompositeBuffer(&local_58,&(param_1->Symbols).CompressedData);
  pFVar2 = (FCompositeBuffer *)this->_padding_;
  if ((pFVar2 <= &local_58) &&
     (lVar7 = (longlong)*(int *)((longlong)&this->_padding_ + 4), &local_58 < pFVar2 + lVar7)) {
    local_80 = (longlong)(int)this->_padding_;
    local_78 = 0x18;
    local_98 = &local_58;
    local_90 = pFVar2;
    local_88 = lVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (int)this->_padding_;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,(ForAnyElementType *)&this->_padding_,piVar1);
  }
  *(int *)&this->_padding_ = iVar5 + 1;
  FCompositeBuffer::FCompositeBuffer<FCompositeBuffer,0>
            ((FCompositeBuffer *)(this->_padding_ + (longlong)iVar5 * 0x18),&local_58);
  FCompositeBuffer::~FCompositeBuffer(&local_58);
  local_68 = this->_padding_;
  iVar5 = (int)this->_padding_;
  if (iVar5 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this->_padding_ = local_68;
  this->_padding_ = CONCAT44(uStack_5c,iVar5);
  if ((int)this->_padding_ != (int)this->_padding_) {
    iStack_60 = iVar5;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderCode.Num() == ShaderSymbols.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderSerialization.cpp"
                       ,0x24,
                       L"It is required to serialize a (possibly empty, but non-null) symbols buffer for every code buffer."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

