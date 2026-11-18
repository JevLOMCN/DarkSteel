// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 5

// FShaderCacheLoadContext @ 145e813f0

FShaderCacheLoadContext * __thiscall
FShaderCacheLoadContext::FShaderCacheLoadContext
          (FShaderCacheLoadContext *this,FSharedBuffer param_1,
          TArrayView<FCompositeBuffer,int> *param_2,TArrayView<FCompressedBuffer,int> *param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong local_res8;
  TArrayView<FCompressedBuffer,int> local_28;
  TArrayView<FCompositeBuffer,int> local_18;
  
  FShaderCacheSerializeContext::FShaderCacheSerializeContext((FShaderCacheSerializeContext *)this);
  this->_padding_ = (longlong)&___7FShaderCacheLoadContext__6B_;
  (this->Reader).Ptr = (FMemoryReaderView *)0x0;
  local_res8 = *(longlong *)param_1.Owner.Owner;
  if (local_res8 != 0) {
    LOCK();
    puVar1 = (ulonglong *)(local_res8 + 0x18);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 0) {
      LOCK();
      *(longlong *)(local_res8 + 0x18) = *(longlong *)(local_res8 + 0x18) + 0x40000000;
      UNLOCK();
    }
  }
  local_28.DataPtr = param_3->DataPtr;
  local_28.ArrayNum = param_3->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  Reset(this,(FSharedBuffer)&local_res8,&local_18,&local_28);
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)param_1.Owner.Owner);
  return this;
}

// ~FShaderCacheLoadContext @ 145e847e0

void __thiscall FShaderCacheLoadContext::~FShaderCacheLoadContext(FShaderCacheLoadContext *this)

{
  FMemoryReaderView *pFVar1;
  
  pFVar1 = (this->Reader).Ptr;
  if (pFVar1 != (FMemoryReaderView *)0x0) {
    (**(code **)pFVar1->_padding_)(pFVar1,1);
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

// Reset @ 145eb0c10

void __thiscall
FShaderCacheLoadContext::Reset
          (FShaderCacheLoadContext *this,FSharedBuffer param_1,
          TArrayView<FCompositeBuffer,int> *param_2,TArrayView<FCompressedBuffer,int> *param_3)

{
  TUniquePtr<FMemoryReaderView,TDefaultDelete<FMemoryReaderView>_> *pTVar1;
  longlong *plVar2;
  FMemoryReaderView *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  FMemoryReaderView *this_00;
  undefined8 *puVar7;
  ulong64 uVar8;
  void *pvVar9;
  longlong local_28 [2];
  
  FSharedBuffer::operator=((FSharedBuffer *)&this->_padding_,(FSharedBuffer *)param_1.Owner.Owner);
  lVar5 = *(longlong *)&param_2->ArrayNum;
  this->_padding_ = (longlong)param_2->DataPtr;
  this->_padding_ = lVar5;
  lVar5 = *(longlong *)&param_3->ArrayNum;
  this->_padding_ = (longlong)param_3->DataPtr;
  this->_padding_ = lVar5;
  if ((int)this->_padding_ != (int)this->_padding_) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ShaderCode.Num() == ShaderSymbols.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\ShaderSerialization.cpp"
                       ,0x74,
                       L"It is required to serialize a (possibly empty, but non-null) symbols buffer for every code buffer."
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  this_00 = ::operator_new(0xb0);
  if (this_00 == (FMemoryReaderView *)0x0) {
    this_00 = (FMemoryReaderView *)0x0;
  }
  else {
    plVar2 = (longlong *)this->_padding_;
    if (plVar2 == (longlong *)0x0) {
      uVar8 = 0;
    }
    else {
      if (((ulonglong)plVar2[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      uVar8 = plVar2[2];
    }
    plVar2 = (longlong *)this->_padding_;
    pvVar9 = (void *)0x0;
    if (plVar2 != (longlong *)0x0) {
      if (((ulonglong)plVar2[3] >> 0x3c & 4) == 0) {
        (**(code **)(*plVar2 + 8))(plVar2);
      }
      pvVar9 = (void *)plVar2[1];
    }
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    ((FFastPathLoadBuffer *)&this_00->_padding_)->StartFastPathLoadBuffer = (uchar *)0x0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    *(int *)&this_00->_padding_ = 0;
    *(int *)((longlong)&this_00->_padding_ + 4) = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    this_00->_padding_ = 0;
    FArchiveState::FArchiveState((FArchiveState *)this_00);
    this_00->_padding_ = 0;
    this_00->_padding_ = (longlong)&___7FMemoryReaderView__6B_;
    (this_00->Bytes).Data = pvVar9;
    (this_00->Bytes).Size = uVar8;
    this_00->LimitSize = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading((FArchiveState *)this_00,true);
    (**(code **)(this_00->_padding_ + 0x108))(this_00,0);
  }
  pTVar1 = &this->Reader;
  if (pTVar1 == (TUniquePtr<FMemoryReaderView,TDefaultDelete<FMemoryReaderView>_> *)local_28) {
    if (this_00 == (FMemoryReaderView *)0x0) goto LAB_145eb0d94;
    puVar7 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar3 = pTVar1->Ptr;
    pTVar1->Ptr = this_00;
    if (pFVar3 == (FMemoryReaderView *)0x0) goto LAB_145eb0d94;
    puVar7 = (undefined8 *)pFVar3->_padding_;
    this_00 = pFVar3;
  }
  (*(code *)*puVar7)(this_00,1);
LAB_145eb0d94:
  this->_padding_ = (longlong)pTVar1->Ptr;
  UE::SharedBuffer::Private::TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>::
  ~TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps>
            ((TBufferOwnerPtr<UE::SharedBuffer::Private::FSharedOps> *)param_1.Owner.Owner);
  return;
}

// Reuse @ 145eb2f70

void __thiscall FShaderCacheLoadContext::Reuse(FShaderCacheLoadContext *this)

{
  ((this->Reader).Ptr)->_padding_ = 0;
  return;
}

// SerializeCode @ 145eb4410

void __thiscall
FShaderCacheLoadContext::SerializeCode
          (FShaderCacheLoadContext *this,FShaderCodeResource *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FCompositeBuffer *pFVar4;
  FCompressedBuffer local_48;
  FCompositeBuffer local_30;
  
  uVar3 = 0;
  if (param_2 < (int)this->_padding_) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FCompositeBuffer::FCompositeBuffer
            (&local_48.CompressedData,
             (FCompositeBuffer *)(this->_padding_ + (longlong)param_2 * 0x18));
  uVar3 = 0;
  if (param_2 < (int)this->_padding_) {
    uVar3 = (uint)~param_2 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = FCompositeBuffer::FCompositeBuffer
                     (&local_30,(FCompositeBuffer *)(this->_padding_ + (longlong)param_2 * 0x18));
  FShaderCodeResource::PopulateFromComposite(param_1,pFVar4,&local_48);
  return;
}

