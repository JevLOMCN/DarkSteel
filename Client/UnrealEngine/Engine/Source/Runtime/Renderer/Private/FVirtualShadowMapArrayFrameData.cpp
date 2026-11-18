// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// GetGPUSizeBytes @ 1454f6f30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FVirtualShadowMapArrayFrameData::GetGPUSizeBytes(FVirtualShadowMapArrayFrameData *this,bool param_1)

{
  FRDGPooledBuffer *pFVar1;
  ulong64 uVar2;
  ulong64 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  pFVar1 = (this->ProjectionData).Reference;
  uVar6 = 0;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar5 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb8748,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar1 = (this->UncachedPageRectBounds).Reference;
  if (pFVar1 == (FRDGPooledBuffer *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar4 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb8748,
               (FLogCategoryBase *)&LogRenderer);
  }
  pFVar1 = (this->AllocatedPageRectBounds).Reference;
  if (pFVar1 != (FRDGPooledBuffer *)0x0) {
    uVar6 = (pFVar1->Desc).NumElements * (pFVar1->Desc).BytesPerElement;
  }
  if (((param_1) && (uVar6 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Buffer_150fb8748,
               (FLogCategoryBase *)&LogRenderer);
  }
  uVar2 = ::GetGPUSizeBytes(&this->PageFlags,param_1);
  uVar3 = ::GetGPUSizeBytes(&this->PageTable,param_1);
  return (ulonglong)uVar5 + uVar2 + uVar3 + (ulonglong)uVar6 + (ulonglong)uVar4;
}

// ~FVirtualShadowMapArrayFrameData @ 1457c41a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FVirtualShadowMapArrayFrameData::~FVirtualShadowMapArrayFrameData
          (FVirtualShadowMapArrayFrameData *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  IPooledRenderTarget *pIVar3;
  longlong lVar4;
  
  pFVar2 = (this->ThrottleBuffer).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->NanitePerformanceFeedback).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pIVar3 = (this->PageRequestFlags).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pFVar2 = (this->PhysicalPageLists).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->ProjectionData).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->AllocatedPageRectBounds).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pFVar2 = (this->UncachedPageRectBounds).Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
  }
  pIVar3 = (this->PageFlags).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  pIVar3 = (this->PageTable).Reference;
  if (pIVar3 != (IPooledRenderTarget *)0x0) {
    (**(code **)(pIVar3->_padding_ + 0x38))();
  }
  return;
}

// operator= @ 1457c43d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FVirtualShadowMapArrayFrameData * __thiscall
FVirtualShadowMapArrayFrameData::operator=
          (FVirtualShadowMapArrayFrameData *this,FVirtualShadowMapArrayFrameData *param_1)

{
  TRefCountPtr<IPooledRenderTarget> *pTVar1;
  TRefCountPtr<IPooledRenderTarget> *pTVar2;
  TRefCountPtr<FRDGPooledBuffer> *pTVar3;
  longlong *plVar4;
  IPooledRenderTarget *pIVar5;
  longlong lVar6;
  FRDGPooledBuffer *pFVar7;
  FRDGPooledBuffer *pFVar8;
  TRefCountPtr<FRDGPooledBuffer> *pTVar9;
  
  pFVar8 = (FRDGPooledBuffer *)0x0;
  if (this != param_1) {
    pIVar5 = (this->PageTable).Reference;
    (this->PageTable).Reference = (param_1->PageTable).Reference;
    (param_1->PageTable).Reference = (IPooledRenderTarget *)0x0;
    if (pIVar5 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar5->_padding_ + 0x38))();
    }
  }
  pTVar1 = &param_1->PageFlags;
  pTVar2 = &this->PageFlags;
  if (pTVar2 != pTVar1) {
    pIVar5 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar5 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar5->_padding_ + 0x38))();
    }
  }
  pTVar3 = &param_1->UncachedPageRectBounds;
  pTVar9 = &this->UncachedPageRectBounds;
  if (pTVar9 != pTVar3) {
    pFVar7 = pTVar9->Reference;
    pTVar9->Reference = pTVar3->Reference;
    pTVar3->Reference = (FRDGPooledBuffer *)0x0;
    if (pFVar7 != (FRDGPooledBuffer *)0x0) {
      plVar4 = &pFVar7->_padding_;
      LOCK();
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        if (plVar4 == (longlong *)0x0) {
          pFVar7 = pFVar8;
        }
        if (pFVar7 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
        }
      }
    }
  }
  pTVar3 = &param_1->AllocatedPageRectBounds;
  pTVar9 = &this->AllocatedPageRectBounds;
  if (pTVar9 != pTVar3) {
    pFVar7 = pTVar9->Reference;
    pTVar9->Reference = pTVar3->Reference;
    pTVar3->Reference = (FRDGPooledBuffer *)0x0;
    if (pFVar7 != (FRDGPooledBuffer *)0x0) {
      plVar4 = &pFVar7->_padding_;
      LOCK();
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        if (plVar4 == (longlong *)0x0) {
          pFVar7 = pFVar8;
        }
        if (pFVar7 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
        }
      }
    }
  }
  pTVar3 = &param_1->ProjectionData;
  pTVar9 = &this->ProjectionData;
  if (pTVar9 != pTVar3) {
    pFVar7 = pTVar9->Reference;
    pTVar9->Reference = pTVar3->Reference;
    pTVar3->Reference = (FRDGPooledBuffer *)0x0;
    if (pFVar7 != (FRDGPooledBuffer *)0x0) {
      plVar4 = &pFVar7->_padding_;
      LOCK();
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        if (plVar4 == (longlong *)0x0) {
          pFVar7 = pFVar8;
        }
        if (pFVar7 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
        }
      }
    }
  }
  pTVar3 = &param_1->PhysicalPageLists;
  pTVar9 = &this->PhysicalPageLists;
  if (pTVar9 != pTVar3) {
    pFVar7 = pTVar9->Reference;
    pTVar9->Reference = pTVar3->Reference;
    pTVar3->Reference = (FRDGPooledBuffer *)0x0;
    if (pFVar7 != (FRDGPooledBuffer *)0x0) {
      plVar4 = &pFVar7->_padding_;
      LOCK();
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        if (plVar4 == (longlong *)0x0) {
          pFVar7 = pFVar8;
        }
        if (pFVar7 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
        }
      }
    }
  }
  pTVar1 = &param_1->PageRequestFlags;
  pTVar2 = &this->PageRequestFlags;
  if (pTVar2 != pTVar1) {
    pIVar5 = pTVar2->Reference;
    pTVar2->Reference = pTVar1->Reference;
    pTVar1->Reference = (IPooledRenderTarget *)0x0;
    if (pIVar5 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar5->_padding_ + 0x38))();
    }
  }
  pTVar3 = &param_1->NanitePerformanceFeedback;
  pTVar9 = &this->NanitePerformanceFeedback;
  if (pTVar9 != pTVar3) {
    pFVar7 = pTVar9->Reference;
    pTVar9->Reference = pTVar3->Reference;
    pTVar3->Reference = (FRDGPooledBuffer *)0x0;
    if (pFVar7 != (FRDGPooledBuffer *)0x0) {
      plVar4 = &pFVar7->_padding_;
      LOCK();
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        if (plVar4 == (longlong *)0x0) {
          pFVar7 = pFVar8;
        }
        if (pFVar7 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
        }
      }
    }
  }
  pTVar9 = &param_1->ThrottleBuffer;
  pTVar3 = &this->ThrottleBuffer;
  if (pTVar3 != pTVar9) {
    pFVar7 = pTVar3->Reference;
    pTVar3->Reference = pTVar9->Reference;
    pTVar9->Reference = (FRDGPooledBuffer *)0x0;
    if (pFVar7 != (FRDGPooledBuffer *)0x0) {
      plVar4 = &pFVar7->_padding_;
      LOCK();
      lVar6 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        if (plVar4 == (longlong *)0x0) {
          pFVar7 = pFVar8;
        }
        if (pFVar7 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar7->_padding_)(pFVar7,1);
        }
      }
    }
  }
  return this;
}

