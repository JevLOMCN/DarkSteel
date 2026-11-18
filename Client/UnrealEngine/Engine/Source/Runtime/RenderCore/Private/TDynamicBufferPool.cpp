// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 8

// ReleaseRHI @ 145cfc740

void __thiscall
TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_>::ReleaseRHI
          (TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FVertexBuffer *this_00;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if ((this->LockList).ArrayNum != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("LockList.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                       ,0x3c9,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->FreeList).ArrayNum != (this->LiveList).ArrayNum) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FreeList.Num() == LiveList.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                       ,0x3ca,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar6 = (this->LiveList).AllocatorInstance.Data;
  iVar3 = (this->LiveList).ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->LiveList).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TDynamicBuffer<FVertexBuffer>_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = *(FVertexBuffer **)pFVar6;
    LOCK();
    this->TotalAllocatedMemory =
         (atomic<unsigned_int>)((int)this->TotalAllocatedMemory - (int)this_00[1]._padding_);
    UNLOCK();
    FRenderResource::ReleaseResource((FRenderResource *)this_00);
    FVertexBuffer::~FVertexBuffer(this_00);
    ::operator_delete(this_00,0x48);
    pFVar6 = pFVar6 + 8;
  }
  piVar1 = &(this->LiveList).ArrayMax;
  (this->LiveList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->LiveList).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->FreeList).ArrayMax;
  (this->FreeList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FreeList).AllocatorInstance,0,piVar1);
  }
  return;
}

// ReleaseRHI @ 145cfc990

void __thiscall
TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_>::ReleaseRHI
          (TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_> *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FIndexBuffer *this_00;
  code *pcVar4;
  bool bVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  if ((this->LockList).ArrayNum != 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("LockList.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                       ,0x3c9,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((this->FreeList).ArrayNum != (this->LiveList).ArrayNum) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("FreeList.Num() == LiveList.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                       ,0x3ca,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar6 = (this->LiveList).AllocatorInstance.Data;
  iVar3 = (this->LiveList).ArrayNum;
  pFVar2 = pFVar6 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->LiveList).ArrayNum != iVar3) {
      `TCheckedPointerIterator<TDynamicBuffer<FIndexBuffer>_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar6 == pFVar2) break;
    this_00 = *(FIndexBuffer **)pFVar6;
    LOCK();
    this->TotalAllocatedMemory =
         (atomic<unsigned_int>)((int)this->TotalAllocatedMemory - (int)this_00[1]._padding_);
    UNLOCK();
    FRenderResource::ReleaseResource((FRenderResource *)this_00);
    FIndexBuffer::~FIndexBuffer(this_00);
    ::operator_delete(this_00,0x48);
    pFVar6 = pFVar6 + 8;
  }
  piVar1 = &(this->LiveList).ArrayMax;
  (this->LiveList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->LiveList).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->FreeList).ArrayMax;
  (this->FreeList).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->FreeList).AllocatorInstance,0,piVar1);
  }
  return;
}

// Acquire @ 145d0fb40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TDynamicBuffer<FIndexBuffer> * __thiscall
TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_>::Acquire
          (TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_> *this,FRHICommandListBase *param_1,
          uint param_2,uint param_3)

{
  FMutex *this_00;
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_char> aVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TDynamicBuffer<FIndexBuffer> *pTVar9;
  uchar *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  
  this_00 = &this->Mutex;
  uVar11 = 0x10000;
  if (0x10000 < param_2) {
    uVar11 = param_2;
  }
  if ((this_00 == (FMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TDynamicBuffer<FIndexBuffer> *)(*pcVar4)();
    return pTVar9;
  }
  LOCK();
  bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(this_00);
  }
  uVar12 = (this->FreeList).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar13 = (longlong)(int)uVar12 * 8;
    do {
      uVar7 = 0;
      if ((int)uVar12 < (this->FreeList).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TDynamicBuffer<FIndexBuffer> *)(*pcVar4)();
        return pTVar9;
      }
      pTVar9 = *(TDynamicBuffer<FIndexBuffer> **)((this->FreeList).AllocatorInstance.Data + lVar13);
      if ((uVar11 <= pTVar9->BufferSize) && (pTVar9->Stride == param_3)) {
        TArray<TDynamicBuffer<FIndexBuffer>_*,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->FreeList,uVar12,No);
        bVar5 = false;
        goto LAB_145d0fd02;
      }
      lVar13 = lVar13 + -8;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  pTVar9 = ::operator_new(0x48);
  if (pTVar9 == (TDynamicBuffer<FIndexBuffer> *)0x0) {
    pTVar9 = (TDynamicBuffer<FIndexBuffer> *)0x0;
  }
  else {
    FIndexBuffer::FIndexBuffer((FIndexBuffer *)pTVar9);
    pTVar9->Stride = param_3;
    pTVar9->MappedBuffer = (uchar *)0x0;
    pTVar9->_padding_ = (longlong)&___7__TDynamicBuffer_VFIndexBuffer____6B_;
    uVar12 = uVar11 + 0xffff & 0xffff0000;
    pTVar9->AllocatedByteCount = 0;
    pTVar9->LastUsedFrame = 0;
    uVar11 = 0x10000;
    if (0x10000 < uVar12) {
      uVar11 = uVar12;
    }
    pTVar9->BufferSize = uVar11;
  }
  iVar8 = (this->LiveList).ArrayNum;
  piVar1 = &(this->LiveList).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->LiveList).AllocatorInstance,piVar1);
  }
  bVar5 = true;
  (this->LiveList).ArrayNum = iVar8 + 1;
  *(TDynamicBuffer<FIndexBuffer> **)((this->LiveList).AllocatorInstance.Data + (longlong)iVar8 * 8)
       = pTVar9;
  if ((pTVar9 == (TDynamicBuffer<FIndexBuffer> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FoundBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                         ,0x38a,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TDynamicBuffer<FIndexBuffer> *)(*pcVar4)();
    return pTVar9;
  }
LAB_145d0fd02:
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar3 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  paVar2 = &this->TotalAllocatedMemory;
  if (((0 < GMaxVertexBytesAllocatedPerFrame) &&
      ((ulonglong)(longlong)GMaxVertexBytesAllocatedPerFrame <= (ulonglong)(uint)*paVar2)) &&
     (2 < (byte)LogRendererCore._0_1_)) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_class_TDynamicBuffer<FIndexBuffer>*___ptr64___cdecl_TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_>::Acquire(FRHICommandListBase&___ptr64,unsigned_int,unsigned_int)___ptr64'
                ::__l22::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
  }
  if (bVar5) {
    FRenderResource::InitResource((FRenderResource *)pTVar9,param_1);
    LOCK();
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + pTVar9->BufferSize);
    UNLOCK();
  }
  if ((pTVar9->MappedBuffer != (uchar *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MappedBuffer == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                         ,0x334,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TDynamicBuffer<FIndexBuffer> *)(*pcVar4)();
    return pTVar9;
  }
  if ((pTVar9->AllocatedByteCount != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocatedByteCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                         ,0x335,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TDynamicBuffer<FIndexBuffer> *)(*pcVar4)();
    return pTVar9;
  }
  if ((((TRefCountPtr<FRHIBuffer> *)&pTVar9->_padding_)->Reference == (FRHIBuffer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidRef(BufferType::GetRHI())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                         ,0x336,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TDynamicBuffer<FIndexBuffer> *)(*pcVar4)();
    return pTVar9;
  }
  puVar10 = FRHICommandListBase::LockBuffer
                      (param_1,((TRefCountPtr<FRHIBuffer> *)&pTVar9->_padding_)->Reference,0,
                       pTVar9->BufferSize,RLM_WriteOnly);
  pTVar9->MappedBuffer = puVar10;
  pTVar9->LastUsedFrame = GFrameCounterRenderThread;
  return pTVar9;
}

// Acquire @ 145d0fe50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

TDynamicBuffer<FVertexBuffer> * __thiscall
TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_>::Acquire
          (TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_> *this,FRHICommandListBase *param_1,
          uint param_2,uint param_3)

{
  FMutex *this_00;
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  atomic<unsigned_char> aVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TDynamicBuffer<FVertexBuffer> *pTVar9;
  uchar *puVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  
  this_00 = &this->Mutex;
  uVar11 = 0x10000;
  if (0x10000 < param_2) {
    uVar11 = param_2;
  }
  if ((this_00 == (FMutex *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TDynamicBuffer<FVertexBuffer> *)(*pcVar4)();
    return pTVar9;
  }
  LOCK();
  bVar5 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(this_00);
  }
  uVar12 = (this->FreeList).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar13 = (longlong)(int)uVar12 * 8;
    do {
      uVar7 = 0;
      if ((int)uVar12 < (this->FreeList).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        pTVar9 = (TDynamicBuffer<FVertexBuffer> *)(*pcVar4)();
        return pTVar9;
      }
      pTVar9 = *(TDynamicBuffer<FVertexBuffer> **)((this->FreeList).AllocatorInstance.Data + lVar13)
      ;
      if ((uVar11 <= pTVar9->BufferSize) && (pTVar9->Stride == param_3)) {
        TArray<TDynamicBuffer<FVertexBuffer>_*,TSizedDefaultAllocator<32>_>::RemoveAt
                  (&this->FreeList,uVar12,No);
        bVar5 = false;
        goto LAB_145d10012;
      }
      lVar13 = lVar13 + -8;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  pTVar9 = ::operator_new(0x48);
  if (pTVar9 == (TDynamicBuffer<FVertexBuffer> *)0x0) {
    pTVar9 = (TDynamicBuffer<FVertexBuffer> *)0x0;
  }
  else {
    FVertexBuffer::FVertexBuffer((FVertexBuffer *)pTVar9);
    pTVar9->Stride = param_3;
    pTVar9->MappedBuffer = (uchar *)0x0;
    pTVar9->_padding_ = (longlong)&___7__TDynamicBuffer_VFVertexBuffer____6B_;
    uVar12 = uVar11 + 0xffff & 0xffff0000;
    pTVar9->AllocatedByteCount = 0;
    pTVar9->LastUsedFrame = 0;
    uVar11 = 0x10000;
    if (0x10000 < uVar12) {
      uVar11 = uVar12;
    }
    pTVar9->BufferSize = uVar11;
  }
  iVar8 = (this->LiveList).ArrayNum;
  piVar1 = &(this->LiveList).ArrayMax;
  if (iVar8 == *piVar1) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->LiveList).AllocatorInstance,piVar1);
  }
  bVar5 = true;
  (this->LiveList).ArrayNum = iVar8 + 1;
  *(TDynamicBuffer<FVertexBuffer> **)((this->LiveList).AllocatorInstance.Data + (longlong)iVar8 * 8)
       = pTVar9;
  if ((pTVar9 == (TDynamicBuffer<FVertexBuffer> *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("FoundBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                         ,0x38a,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TDynamicBuffer<FVertexBuffer> *)(*pcVar4)();
    return pTVar9;
  }
LAB_145d10012:
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar3 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar3 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  paVar2 = &this->TotalAllocatedMemory;
  if (((0 < GMaxVertexBytesAllocatedPerFrame) &&
      ((ulonglong)(longlong)GMaxVertexBytesAllocatedPerFrame <= (ulonglong)(uint)*paVar2)) &&
     (2 < (byte)LogRendererCore._0_1_)) {
    UE::Logging::Private::BasicLog<3>
              (&`public:_class_TDynamicBuffer<FVertexBuffer>*___ptr64___cdecl_TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_>::Acquire(FRHICommandListBase&___ptr64,unsigned_int,unsigned_int)___ptr64'
                ::__l22::LOG_Static,(FLogCategoryBase *)&LogRendererCore);
  }
  if (bVar5) {
    FRenderResource::InitResource((FRenderResource *)pTVar9,param_1);
    LOCK();
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + pTVar9->BufferSize);
    UNLOCK();
  }
  if ((pTVar9->MappedBuffer != (uchar *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("MappedBuffer == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                         ,0x334,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TDynamicBuffer<FVertexBuffer> *)(*pcVar4)();
    return pTVar9;
  }
  if ((pTVar9->AllocatedByteCount != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("AllocatedByteCount == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                         ,0x335,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TDynamicBuffer<FVertexBuffer> *)(*pcVar4)();
    return pTVar9;
  }
  if ((((TRefCountPtr<FRHIBuffer> *)&pTVar9->_padding_)->Reference == (FRHIBuffer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidRef(BufferType::GetRHI())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                         ,0x336,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar9 = (TDynamicBuffer<FVertexBuffer> *)(*pcVar4)();
    return pTVar9;
  }
  puVar10 = FRHICommandListBase::LockBuffer
                      (param_1,((TRefCountPtr<FRHIBuffer> *)&pTVar9->_padding_)->Reference,0,
                       pTVar9->BufferSize,RLM_WriteOnly);
  pTVar9->MappedBuffer = puVar10;
  pTVar9->LastUsedFrame = GFrameCounterRenderThread;
  return pTVar9;
}

// Forfeit @ 145d29b10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_>::Forfeit
          (TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_> *this,FRHICommandListBase *param_1,
          TArrayView<TDynamicBuffer<FIndexBuffer>_*_const,int> *param_2)

{
  FMutex *this_00;
  TDynamicBuffer<FIndexBuffer> **ppTVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  TDynamicBuffer<FIndexBuffer> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TDynamicBuffer<FIndexBuffer> **ppTVar8;
  
  if (param_2->ArrayNum == 0) {
    return;
  }
  ppTVar8 = param_2->DataPtr;
  ppTVar1 = ppTVar8 + param_2->ArrayNum;
  for (; ppTVar8 != ppTVar1; ppTVar8 = ppTVar8 + 1) {
    pTVar4 = *ppTVar8;
    if ((pTVar4->MappedBuffer == (uchar *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("MappedBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                           ,0x33f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pTVar4->_padding_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidRef(BufferType::GetRHI())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                           ,0x340,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FRHICommandListBase::UnlockBuffer(param_1,(FRHIBuffer *)pTVar4->_padding_);
    pTVar4->MappedBuffer = (uchar *)0x0;
    pTVar4->AllocatedByteCount = 0;
  }
  this_00 = &this->Mutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  LOCK();
  bVar6 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    UE::FMutex::LockSlow(this_00);
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (iVar3 == 0) goto LAB_145d29c8d;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,&(this->ReclaimList).AllocatorInstance,&(this->ReclaimList).ArrayNum,
                     &(this->ReclaimList).ArrayMax);
  memcpy((this->ReclaimList).AllocatorInstance.Data + (longlong)iVar7 * 8,param_2->DataPtr,
         (longlong)iVar3 << 3);
LAB_145d29c8d:
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return;
}

// Forfeit @ 145d29cd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_>::Forfeit
          (TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_> *this,FRHICommandListBase *param_1,
          TArrayView<TDynamicBuffer<FVertexBuffer>_*_const,int> *param_2)

{
  FMutex *this_00;
  TDynamicBuffer<FVertexBuffer> **ppTVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  TDynamicBuffer<FVertexBuffer> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TDynamicBuffer<FVertexBuffer> **ppTVar8;
  
  if (param_2->ArrayNum == 0) {
    return;
  }
  ppTVar8 = param_2->DataPtr;
  ppTVar1 = ppTVar8 + param_2->ArrayNum;
  for (; ppTVar8 != ppTVar1; ppTVar8 = ppTVar8 + 1) {
    pTVar4 = *ppTVar8;
    if ((pTVar4->MappedBuffer == (uchar *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("MappedBuffer != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                           ,0x33f,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((pTVar4->_padding_ == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidRef(BufferType::GetRHI())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\GlobalRenderResources.cpp"
                           ,0x340,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FRHICommandListBase::UnlockBuffer(param_1,(FRHIBuffer *)pTVar4->_padding_);
    pTVar4->MappedBuffer = (uchar *)0x0;
    pTVar4->AllocatedByteCount = 0;
  }
  this_00 = &this->Mutex;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  LOCK();
  bVar6 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar6) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar6) {
    UE::FMutex::LockSlow(this_00);
  }
  iVar3 = param_2->ArrayNum;
  if (iVar3 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else if (iVar3 == 0) goto LAB_145d29e4d;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,&(this->ReclaimList).AllocatorInstance,&(this->ReclaimList).ArrayNum,
                     &(this->ReclaimList).ArrayMax);
  memcpy((this->ReclaimList).AllocatorInstance.Data + (longlong)iVar7 * 8,param_2->DataPtr,
         (longlong)iVar3 << 3);
LAB_145d29e4d:
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  return;
}

// GarbageCollect @ 145d29e90

void __thiscall
TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_>::GarbageCollect
          (TDynamicBufferPool<TDynamicBuffer<FIndexBuffer>_> *this)

{
  TArray<TDynamicBuffer<FIndexBuffer>_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TDynamicBuffer<FIndexBuffer>_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  atomic<unsigned_char> aVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  atomic<unsigned_char> *this_00;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  FIndexBuffer *this_01;
  uint local_res10;
  longlong local_res18;
  FIndexBuffer *local_58;
  atomic<unsigned_char> *local_50;
  
  this_00 = &(this->Mutex).State;
  local_50 = this_00;
  if ((this_00 == (atomic<unsigned_char> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  bVar7 = ((FMutex *)this_00)->State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    ((FMutex *)this_00)->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow((FMutex *)this_00);
  }
  pTVar1 = &this->FreeList;
  pTVar2 = &this->ReclaimList;
  if ((pTVar1 == pTVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = (this->ReclaimList).ArrayNum;
  if (iVar10 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar10,&pTVar1->AllocatorInstance,&(this->FreeList).ArrayNum,
                       &(this->FreeList).ArrayMax);
    memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8,(pTVar2->AllocatorInstance).Data,
           (longlong)iVar10 << 3);
  }
  (this->ReclaimList).ArrayNum = 0;
  if ((this->ReclaimList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,&(this->ReclaimList).ArrayMax);
  }
  local_res10 = 0;
  if (0 < (this->LiveList).ArrayNum) {
    local_res18 = 0;
    do {
      uVar13 = ~local_res10 >> 0x1f;
      uVar9 = 0;
      if ((int)local_res10 < (this->LiveList).ArrayNum) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_58 = *(FIndexBuffer **)((this->LiveList).AllocatorInstance.Data + local_res18);
      if ((0 < GGlobalBufferNumFramesUnusedThreshold) &&
         ((ulonglong)((longlong)GGlobalBufferNumFramesUnusedThreshold + local_58[1]._padding_) <=
          GFrameCounterRenderThread)) {
        LOCK();
        this->TotalAllocatedMemory =
             (atomic<unsigned_int>)
             ((int)this->TotalAllocatedMemory -
             (((FName *)&local_58[1]._padding_)->ComparisonIndex).Value);
        UNLOCK();
        FRenderResource::ReleaseResource((FRenderResource *)local_58);
        uVar9 = 0;
        if ((int)local_res10 < (this->LiveList).ArrayNum) {
          uVar9 = uVar13;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->LiveList).AllocatorInstance.Data + (longlong)(int)local_res10 * 8;
        iVar10 = (this->LiveList).ArrayNum + ~local_res10;
        if (iVar10 != 0) {
          memmove(pFVar4,pFVar4 + 8,(longlong)iVar10 << 3);
        }
        piVar3 = &(this->LiveList).ArrayNum;
        *piVar3 = *piVar3 + -1;
        pFVar4 = (this->FreeList).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)(this->FreeList).ArrayMax * 8
            )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->FreeList).ArrayNum;
        this_01 = local_58;
        if (iVar10 != 0) {
          pFVar4 = (this->FreeList).AllocatorInstance.Data;
          iVar11 = 0;
          lVar14 = 0;
          bVar7 = *(FIndexBuffer **)pFVar4 != local_58;
          iVar8 = 0;
          do {
            iVar12 = iVar8;
            do {
              lVar14 = lVar14 + 1;
              iVar12 = iVar12 + 1;
              if (iVar10 <= lVar14) break;
            } while (bVar7 == (*(FIndexBuffer **)(pFVar4 + lVar14 * 8) != this_01));
            if (bVar7 != false) {
              if (iVar11 != iVar8) {
                memmove(pFVar4 + (longlong)iVar11 * 8,pFVar4 + (longlong)iVar8 * 8,
                        (longlong)(iVar12 - iVar8) << 3);
                this_01 = local_58;
              }
              iVar11 = iVar11 + (iVar12 - iVar8);
            }
            bVar7 = (bool)(bVar7 ^ 1);
            iVar8 = iVar12;
          } while (lVar14 < iVar10);
          (this->FreeList).ArrayNum = iVar11;
        }
        if (this_01 != (FIndexBuffer *)0x0) {
          FIndexBuffer::~FIndexBuffer(this_01);
          ::operator_delete(this_01,0x48);
        }
      }
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + 8;
      this_00 = local_50;
    } while ((int)local_res10 < (this->LiveList).ArrayNum);
  }
  if (this_00 != (atomic<unsigned_char> *)0x0) {
    LOCK();
    aVar5 = *this_00;
    *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
    UNLOCK();
    if (((byte)aVar5 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)this_00);
    }
  }
  return;
}

// GarbageCollect @ 145d2a2a0

void __thiscall
TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_>::GarbageCollect
          (TDynamicBufferPool<TDynamicBuffer<FVertexBuffer>_> *this)

{
  TArray<TDynamicBuffer<FVertexBuffer>_*,TSizedDefaultAllocator<32>_> *pTVar1;
  TArray<TDynamicBuffer<FVertexBuffer>_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  atomic<unsigned_char> aVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  atomic<unsigned_char> *this_00;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  FVertexBuffer *this_01;
  uint local_res10;
  longlong local_res18;
  FVertexBuffer *local_58;
  atomic<unsigned_char> *local_50;
  
  this_00 = &(this->Mutex).State;
  local_50 = this_00;
  if ((this_00 == (atomic<unsigned_char> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  bVar7 = ((FMutex *)this_00)->State == (atomic<unsigned_char>)0x0;
  if (bVar7) {
    ((FMutex *)this_00)->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar7) {
    UE::FMutex::LockSlow((FMutex *)this_00);
  }
  pTVar1 = &this->FreeList;
  pTVar2 = &this->ReclaimList;
  if ((pTVar1 == pTVar2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(void*)this != (void*)&Source",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x96e,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = (this->ReclaimList).ArrayNum;
  if (iVar10 != 0) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,iVar10,&pTVar1->AllocatorInstance,&(this->FreeList).ArrayNum,
                       &(this->FreeList).ArrayMax);
    memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar8 * 8,(pTVar2->AllocatorInstance).Data,
           (longlong)iVar10 << 3);
  }
  (this->ReclaimList).ArrayNum = 0;
  if ((this->ReclaimList).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&pTVar2->AllocatorInstance,0,&(this->ReclaimList).ArrayMax);
  }
  local_res10 = 0;
  if (0 < (this->LiveList).ArrayNum) {
    local_res18 = 0;
    do {
      uVar13 = ~local_res10 >> 0x1f;
      uVar9 = 0;
      if ((int)local_res10 < (this->LiveList).ArrayNum) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_58 = *(FVertexBuffer **)((this->LiveList).AllocatorInstance.Data + local_res18);
      if ((0 < GGlobalBufferNumFramesUnusedThreshold) &&
         ((ulonglong)((longlong)GGlobalBufferNumFramesUnusedThreshold + local_58[1]._padding_) <=
          GFrameCounterRenderThread)) {
        LOCK();
        this->TotalAllocatedMemory =
             (atomic<unsigned_int>)
             ((int)this->TotalAllocatedMemory -
             (((FName *)&local_58[1]._padding_)->ComparisonIndex).Value);
        UNLOCK();
        FRenderResource::ReleaseResource((FRenderResource *)local_58);
        uVar9 = 0;
        if ((int)local_res10 < (this->LiveList).ArrayNum) {
          uVar9 = uVar13;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar4 = (this->LiveList).AllocatorInstance.Data + (longlong)(int)local_res10 * 8;
        iVar10 = (this->LiveList).ArrayNum + ~local_res10;
        if (iVar10 != 0) {
          memmove(pFVar4,pFVar4 + 8,(longlong)iVar10 << 3);
        }
        piVar3 = &(this->LiveList).ArrayNum;
        *piVar3 = *piVar3 + -1;
        pFVar4 = (this->FreeList).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 < pFVar4 + (longlong)(this->FreeList).ArrayMax * 8
            )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (this->FreeList).ArrayNum;
        this_01 = local_58;
        if (iVar10 != 0) {
          pFVar4 = (this->FreeList).AllocatorInstance.Data;
          iVar11 = 0;
          lVar14 = 0;
          bVar7 = *(FVertexBuffer **)pFVar4 != local_58;
          iVar8 = 0;
          do {
            iVar12 = iVar8;
            do {
              lVar14 = lVar14 + 1;
              iVar12 = iVar12 + 1;
              if (iVar10 <= lVar14) break;
            } while (bVar7 == (*(FVertexBuffer **)(pFVar4 + lVar14 * 8) != this_01));
            if (bVar7 != false) {
              if (iVar11 != iVar8) {
                memmove(pFVar4 + (longlong)iVar11 * 8,pFVar4 + (longlong)iVar8 * 8,
                        (longlong)(iVar12 - iVar8) << 3);
                this_01 = local_58;
              }
              iVar11 = iVar11 + (iVar12 - iVar8);
            }
            bVar7 = (bool)(bVar7 ^ 1);
            iVar8 = iVar12;
          } while (lVar14 < iVar10);
          (this->FreeList).ArrayNum = iVar11;
        }
        if (this_01 != (FVertexBuffer *)0x0) {
          FVertexBuffer::~FVertexBuffer(this_01);
          ::operator_delete(this_01,0x48);
        }
      }
      local_res10 = local_res10 + 1;
      local_res18 = local_res18 + 8;
      this_00 = local_50;
    } while ((int)local_res10 < (this->LiveList).ArrayNum);
  }
  if (this_00 != (atomic<unsigned_char> *)0x0) {
    LOCK();
    aVar5 = *this_00;
    *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
    UNLOCK();
    if (((byte)aVar5 & 2) != 0) {
      UE::FMutex::WakeWaitingThread((FMutex *)this_00);
    }
  }
  return;
}

