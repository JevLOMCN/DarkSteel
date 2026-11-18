// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// ~FPersistentGlobalDistanceFieldData @ 1454056a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FPersistentGlobalDistanceFieldData::~FPersistentGlobalDistanceFieldData
          (FPersistentGlobalDistanceFieldData *this)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  longlong *plVar2;
  IPooledRenderTarget *pIVar3;
  FRDGPooledBuffer *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  FGlobalDistanceFieldStreamingReadback *pFVar7;
  bool bVar8;
  TRefCountPtr<IPooledRenderTarget> *pTVar9;
  FGlobalDistanceFieldStreamingReadback *pFVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  longlong lVar12;
  longlong lVar13;
  
  pTVar9 = &this->MipTexture;
  if (pTVar9->Reference != (IPooledRenderTarget *)0x0) {
    (**(code **)(pTVar9->Reference->_padding_ + 0x38))();
  }
  lVar13 = 2;
  lVar12 = 2;
  do {
    pTVar1 = pTVar9 + -1;
    pTVar9 = pTVar9 + -1;
    lVar12 = lVar12 + -1;
    if (pTVar1->Reference != (IPooledRenderTarget *)0x0) {
      (**(code **)(pTVar1->Reference->_padding_ + 0x38))();
    }
  } while (lVar12 != 0);
  pIVar3 = (this->PageTableCombinedTexture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pFVar4 = (this->PageObjectGridBuffer).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar4->_padding_;
    LOCK();
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar12 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pIVar3 = (this->CoverageAtlasTexture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->PageAtlasTexture).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pFVar4 = (this->PageFreeListBuffer).Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar4->_padding_;
    LOCK();
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar12 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  pFVar10 = (FGlobalDistanceFieldStreamingReadback *)&this->PageFreeListAllocatorBuffer;
  pFVar4 = ((TRefCountPtr<FRDGPooledBuffer> *)pFVar10)->Reference;
  if (pFVar4 != (FRDGPooledBuffer *)0x0) {
    plVar2 = &pFVar4->_padding_;
    LOCK();
    lVar12 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if (((int)lVar12 == 1) && (plVar2 != (longlong *)0x0)) {
      (**(code **)pFVar4->_padding_)(pFVar4,1);
    }
  }
  lVar12 = 2;
  do {
    pFVar7 = pFVar10 + -1;
    pFVar10 = pFVar10 + -1;
    lVar12 = lVar12 + -1;
    DestructItems<TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_>,int>
              ((TUniquePtr<FRHIGPUBufferReadback,TDefaultDelete<FRHIGPUBufferReadback>_> *)
               (pFVar10->PendingStreamingReadbackBuffers).AllocatorInstance.Data,
               (pFVar7->PendingStreamingReadbackBuffers).ArrayNum);
    pFVar5 = (pFVar10->PendingStreamingReadbackBuffers).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
  } while (lVar12 != 0);
  _vector_destructor_iterator_
            (this->ClipmapState[5].Cache,0x10,2,
             FGlobalDistanceFieldCacheTypeState::~FGlobalDistanceFieldCacheTypeState);
  _vector_destructor_iterator_
            (this->ClipmapState[4].Cache,0x10,2,
             FGlobalDistanceFieldCacheTypeState::~FGlobalDistanceFieldCacheTypeState);
  _vector_destructor_iterator_
            (this->ClipmapState[3].Cache,0x10,2,
             FGlobalDistanceFieldCacheTypeState::~FGlobalDistanceFieldCacheTypeState);
  _vector_destructor_iterator_
            (this->ClipmapState[2].Cache,0x10,2,
             FGlobalDistanceFieldCacheTypeState::~FGlobalDistanceFieldCacheTypeState);
  _vector_destructor_iterator_
            (this->ClipmapState[1].Cache,0x10,2,
             FGlobalDistanceFieldCacheTypeState::~FGlobalDistanceFieldCacheTypeState);
  _vector_destructor_iterator_
            (this->ClipmapState[0].Cache,0x10,2,
             FGlobalDistanceFieldCacheTypeState::~FGlobalDistanceFieldCacheTypeState);
  pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)&this->UpdateFrame;
  lVar12 = 2;
  do {
    pFVar5 = pTVar11[-1].AllocatorInstance.Data;
    pTVar11 = pTVar11 + -1;
    lVar12 = lVar12 + -1;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
  } while (lVar12 != 0);
  pTVar11 = this->DeferredUpdatesForMeshSDFStreaming;
  do {
    pFVar5 = pTVar11[-1].AllocatorInstance.Data;
    pTVar11 = pTVar11 + -1;
    lVar13 = lVar13 + -1;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
  } while (lVar13 != 0);
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  if ((int)this->_padding_ != 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Super::GetRefCount() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                       ,0x124,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

// GetGPUSizeBytes @ 1454f4800

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FPersistentGlobalDistanceFieldData::GetGPUSizeBytes
          (FPersistentGlobalDistanceFieldData *this,bool param_1)

{
  FRDGPooledBuffer *pFVar1;
  IPooledRenderTarget *pIVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulong64 uVar9;
  uint uVar10;
  TRefCountPtr<IPooledRenderTarget> *pTVar11;
  
  pFVar1 = (this->PageFreeListAllocatorBuffer).Reference;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar7 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar1 = (this->PageFreeListBuffer).Reference;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    uVar10 = 0;
  }
  else {
    uVar10 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar10 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb86c8,
               (FLogCategoryBase *)&LogRenderer);
  }
  pIVar2 = (this->PageAtlasTexture).Reference;
  if (pIVar2 == (IPooledRenderTarget *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (**(code **)(pIVar2->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar3 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->PageAtlasTexture).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar2 = (this->CoverageAtlasTexture).Reference;
  if (pIVar2 == (IPooledRenderTarget *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (**(code **)(pIVar2->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar4 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->CoverageAtlasTexture).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar2 = (this->PageTableCombinedTexture).Reference;
  if (pIVar2 == (IPooledRenderTarget *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (**(code **)(pIVar2->_padding_ + 0x18))();
  }
  if (((param_1) && (uVar5 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->PageTableCombinedTexture).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  pIVar2 = (this->MipTexture).Reference;
  if (pIVar2 == (IPooledRenderTarget *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar6 = (**(code **)(pIVar2->_padding_ + 0x18))();
    uVar8 = (ulonglong)uVar6;
  }
  if (((param_1) && ((int)uVar8 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    (**(code **)(((this->MipTexture).Reference)->_padding_ + 0x10))();
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
  }
  uVar6 = 0;
  uVar9 = uVar8 + uVar5 + (ulonglong)uVar4 + (ulonglong)uVar3 + (ulonglong)uVar10 + (ulonglong)uVar7
  ;
  pTVar11 = this->PageTableLayerTextures;
  do {
    if (pTVar11->Reference == (IPooledRenderTarget *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)(pTVar11->Reference->_padding_ + 0x18))();
    }
    if (((param_1) && (uVar7 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
      (**(code **)(pTVar11->Reference->_padding_ + 0x10))();
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogRenderer);
    }
    uVar6 = uVar6 + 1;
    uVar9 = uVar9 + uVar7;
    pTVar11 = pTVar11 + 1;
  } while (uVar6 < 2);
  return uVar9;
}

