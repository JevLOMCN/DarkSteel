// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 16

// ~TRefCountPtr<IPooledRenderTarget> @ 14472edd0

void __thiscall
TRefCountPtr<IPooledRenderTarget>::~TRefCountPtr<IPooledRenderTarget>
          (TRefCountPtr<IPooledRenderTarget> *this)

{
  if (this->Reference != (IPooledRenderTarget *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014472eddb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->Reference->_padding_ + 0x38))();
    return;
  }
  return;
}

// TRefCountPtr<IPooledRenderTarget> @ 1447f2560

TRefCountPtr<IPooledRenderTarget> * __thiscall
TRefCountPtr<IPooledRenderTarget>::TRefCountPtr<IPooledRenderTarget>
          (TRefCountPtr<IPooledRenderTarget> *this)

{
  this->Reference = (IPooledRenderTarget *)0x0;
  return this;
}

// ~TRefCountPtr<FRHITexture> @ 1447f6030

void __thiscall
TRefCountPtr<FRHITexture>::~TRefCountPtr<FRHITexture>(TRefCountPtr<FRHITexture> *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHITexture *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = this->Reference;
  if (this_00 == (FRHITexture *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = (FAtomicFlags *)&this_00->_padding_;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this_00);
  }
  return;
}

// operator= @ 1447f8e90

TRefCountPtr<FRHIUniformBuffer> * __thiscall
TRefCountPtr<FRHIUniformBuffer>::operator=
          (TRefCountPtr<FRHIUniformBuffer> *this,FRHIUniformBuffer *param_1)

{
  FRHIUniformBuffer *this_00;
  
  this_00 = this->Reference;
  if (this_00 != param_1) {
    this->Reference = param_1;
    if (param_1 != (FRHIUniformBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)param_1);
    }
    if (this_00 != (FRHIUniformBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  return this;
}

// ~TRefCountPtr<FRHIStagingBuffer> @ 1448edfe0

void __thiscall
TRefCountPtr<FRHIStagingBuffer>::~TRefCountPtr<FRHIStagingBuffer>
          (TRefCountPtr<FRHIStagingBuffer> *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIStagingBuffer *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = this->Reference;
  if (this_00 == (FRHIStagingBuffer *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = (FAtomicFlags *)&this_00->_padding_;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this_00);
  }
  return;
}

// operator= @ 1448eec80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRefCountPtr<FRDGPooledBuffer> * __thiscall
TRefCountPtr<FRDGPooledBuffer>::operator=
          (TRefCountPtr<FRDGPooledBuffer> *this,TRefCountPtr<FRDGPooledBuffer> *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FRDGPooledBuffer *pFVar3;
  
  if (this != param_1) {
    pFVar3 = this->Reference;
    this->Reference = param_1->Reference;
    param_1->Reference = (FRDGPooledBuffer *)0x0;
    if (pFVar3 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar2 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar2 == 1) {
        if (plVar1 == (longlong *)0x0) {
          pFVar3 = (FRDGPooledBuffer *)0x0;
        }
        if (pFVar3 != (FRDGPooledBuffer *)0x0) {
          (**(code **)pFVar3->_padding_)(pFVar3,1);
        }
      }
    }
  }
  return this;
}

// operator= @ 144c1ec00

TRefCountPtr<IPooledRenderTarget> * __thiscall
TRefCountPtr<IPooledRenderTarget>::operator=
          (TRefCountPtr<IPooledRenderTarget> *this,IPooledRenderTarget *param_1)

{
  IPooledRenderTarget *pIVar1;
  
  pIVar1 = this->Reference;
  if (pIVar1 != param_1) {
    this->Reference = param_1;
    if (param_1 != (IPooledRenderTarget *)0x0) {
      (**(code **)(param_1->_padding_ + 0x30))(param_1);
    }
    if (pIVar1 != (IPooledRenderTarget *)0x0) {
      (**(code **)(pIVar1->_padding_ + 0x38))(pIVar1);
    }
  }
  return this;
}

// operator= @ 144c1ec50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRefCountPtr<FRDGPooledBuffer> * __thiscall
TRefCountPtr<FRDGPooledBuffer>::operator=
          (TRefCountPtr<FRDGPooledBuffer> *this,FRDGPooledBuffer *param_1)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  pFVar2 = this->Reference;
  if (pFVar2 != param_1) {
    this->Reference = param_1;
    if (param_1 != (FRDGPooledBuffer *)0x0) {
      LOCK();
      *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
      UNLOCK();
    }
    if (pFVar2 != (FRDGPooledBuffer *)0x0) {
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar3 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
  }
  return this;
}

// TRefCountPtr<IPooledRenderTarget> @ 145194a70

TRefCountPtr<IPooledRenderTarget> * __thiscall
TRefCountPtr<IPooledRenderTarget>::TRefCountPtr<IPooledRenderTarget>
          (TRefCountPtr<IPooledRenderTarget> *this,IPooledRenderTarget *param_1,bool param_2)

{
  this->Reference = param_1;
  if ((param_1 != (IPooledRenderTarget *)0x0) && (param_2)) {
    (**(code **)(param_1->_padding_ + 0x30))(param_1);
  }
  return this;
}

// TRefCountPtr<FRDGPooledBuffer> @ 145194aa0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TRefCountPtr<FRDGPooledBuffer> * __thiscall
TRefCountPtr<FRDGPooledBuffer>::TRefCountPtr<FRDGPooledBuffer>(TRefCountPtr<FRDGPooledBuffer> *this)

{
  this->Reference = (FRDGPooledBuffer *)0x0;
  return this;
}

// ~TRefCountPtr<FRDGPooledBuffer> @ 145195a70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
TRefCountPtr<FRDGPooledBuffer>::~TRefCountPtr<FRDGPooledBuffer>
          (TRefCountPtr<FRDGPooledBuffer> *this)

{
  longlong *plVar1;
  FRDGPooledBuffer *pFVar2;
  longlong lVar3;
  
  pFVar2 = this->Reference;
  if (pFVar2 != (FRDGPooledBuffer *)0x0) {
    plVar1 = &pFVar2->_padding_;
    LOCK();
    lVar3 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar3 == 1) && (plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145195a97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar2->_padding_)(pFVar2,1);
      return;
    }
  }
  return;
}

// ~TRefCountPtr<UE::Tasks::Private::FTaskBase> @ 145403540

void __thiscall
TRefCountPtr<UE::Tasks::Private::FTaskBase>::~TRefCountPtr<UE::Tasks::Private::FTaskBase>
          (TRefCountPtr<UE::Tasks::Private::FTaskBase> *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  
  pFVar3 = this->Reference;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar3->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x00014540355f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar3->_padding_)(pFVar3,1);
      return;
    }
  }
  return;
}

// operator= @ 145407da0

TRefCountPtr<UE::Tasks::Private::FTaskBase> * __thiscall
TRefCountPtr<UE::Tasks::Private::FTaskBase>::operator=
          (TRefCountPtr<UE::Tasks::Private::FTaskBase> *this,FTaskBase *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *pFVar3;
  
  pFVar3 = this->Reference;
  if (pFVar3 != param_1) {
    this->Reference = param_1;
    if (param_1 != (FTaskBase *)0x0) {
      LOCK();
      param_1->RefCount = (atomic<unsigned_int>)((int)param_1->RefCount + 1);
      UNLOCK();
    }
    if (pFVar3 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &pFVar3->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
  }
  return this;
}

// TRefCountPtr<FRHIShaderResourceView> @ 1458caba0

TRefCountPtr<FRHIShaderResourceView> * __thiscall
TRefCountPtr<FRHIShaderResourceView>::TRefCountPtr<FRHIShaderResourceView>
          (TRefCountPtr<FRHIShaderResourceView> *this)

{
  this->Reference = (FRHIShaderResourceView *)0x0;
  return this;
}

// ~TRefCountPtr<FRHIShaderResourceView> @ 1458cef20

void __thiscall
TRefCountPtr<FRHIShaderResourceView>::~TRefCountPtr<FRHIShaderResourceView>
          (TRefCountPtr<FRHIShaderResourceView> *this)

{
  FAtomicFlags *pFVar1;
  atomic<unsigned_int> aVar2;
  FRHIShaderResourceView *this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = this->Reference;
  if (this_00 == (FRHIShaderResourceView *)0x0) {
    return;
  }
  LOCK();
  pFVar1 = (FAtomicFlags *)&this_00->field_0x8;
  aVar2 = pFVar1->Packed;
  pFVar1->Packed = (atomic<unsigned_int>)((int)pFVar1->Packed + -1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this_00);
  }
  return;
}

// operator= @ 1458d1b90

TRefCountPtr<FRHIUniformBuffer> * __thiscall
TRefCountPtr<FRHIUniformBuffer>::operator=
          (TRefCountPtr<FRHIUniformBuffer> *this,TRefCountPtr<FRHIUniformBuffer> *param_1)

{
  FRHIUniformBuffer *this_00;
  
  if (this != param_1) {
    this_00 = this->Reference;
    this->Reference = param_1->Reference;
    param_1->Reference = (FRHIUniformBuffer *)0x0;
    if (this_00 != (FRHIUniformBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  return this;
}

