// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 8

// AddRef @ 145d9f920

uint __thiscall FRDGTransientRenderTarget::AddRef(FRDGTransientRenderTarget *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  if (this->LifetimeState != Allocated) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("LifetimeState == ERDGTransientResourceLifetimeState::Allocated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphResourcePool.cpp"
                       ,0x101,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
  }
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return iVar2 + 1;
}

// ComputeMemorySize @ 145da8380

uint __thiscall FRDGTransientRenderTarget::ComputeMemorySize(FRDGTransientRenderTarget *this)

{
  return 0;
}

// GetDesc @ 145db92c0

FPooledRenderTargetDesc * __thiscall
FRDGTransientRenderTarget::GetDesc(FRDGTransientRenderTarget *this)

{
  return &this->Desc;
}

// GetRefCount @ 145db9c10

uint __thiscall FRDGTransientRenderTarget::GetRefCount(FRDGTransientRenderTarget *this)

{
  return this->RefCount;
}

// GetTransientTexture @ 145dbbc80

FRHITransientTexture * __thiscall
FRDGTransientRenderTarget::GetTransientTexture(FRDGTransientRenderTarget *this)

{
  code *pcVar1;
  bool bVar2;
  FRHITransientTexture *pFVar3;
  
  if (this->LifetimeState == Allocated) {
    return this->Texture;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("LifetimeState == ERDGTransientResourceLifetimeState::Allocated",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphResourcePool.h"
                     ,0x5b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FRHITransientTexture *)(*pcVar1)();
    return pFVar3;
  }
  return this->Texture;
}

// IsFree @ 145dc0fa0

bool __thiscall FRDGTransientRenderTarget::IsFree(FRDGTransientRenderTarget *this)

{
  return false;
}

// IsTracked @ 145dc14e0

bool __thiscall FRDGTransientRenderTarget::IsTracked(FRDGTransientRenderTarget *this)

{
  return true;
}

// Release @ 145dc6740

uint __thiscall FRDGTransientRenderTarget::Release(FRDGTransientRenderTarget *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<EPixelFormat> FVar3;
  code *pcVar4;
  bool bVar5;
  longlong lVar6;
  uint uVar7;
  
  LOCK();
  piVar1 = &this->RefCount;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  uVar7 = iVar2 - 1;
  if ((int)uVar7 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Refs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphResourcePool.cpp"
                       ,0x108,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
  }
  else if (uVar7 == 0) {
    if (this->LifetimeState != Allocated) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("LifetimeState == ERDGTransientResourceLifetimeState::Allocated",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphResourcePool.cpp"
                         ,0x10b,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar7 = (*pcVar4)();
        return uVar7;
      }
    }
    if (GRDGTransientResourceAllocator._32_8_ != 0) {
      if (this->RefCount != 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("RenderTarget->GetRefCount() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderGraphResourcePool.cpp"
                           ,0x160,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return uVar7;
        }
      }
      EnterCriticalSection((LPCRITICAL_SECTION)&GRDGTransientResourceAllocator.field_0x28);
      if (this->Texture != (FRHITransientTexture *)0x0) {
        this->LifetimeState = PendingDeallocation;
        if (GRDGTransientResourceAllocator._104_4_ == GRDGTransientResourceAllocator._108_4_) {
          GRDGTransientResourceAllocator._104_4_ =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&GRDGTransientResourceAllocator.field_0x60,
                          (int *)&GRDGTransientResourceAllocator.field_0x6c);
        }
        lVar6 = (longlong)(int)GRDGTransientResourceAllocator._104_4_;
        GRDGTransientResourceAllocator._104_4_ = GRDGTransientResourceAllocator._104_4_ + 1;
        *(FRDGTransientRenderTarget **)(GRDGTransientResourceAllocator._96_8_ + lVar6 * 8) = this;
        LeaveCriticalSection((LPCRITICAL_SECTION)&GRDGTransientResourceAllocator.field_0x28);
        return 0;
      }
      this->LifetimeState = Deallocated;
      if (GRDGTransientResourceAllocator._120_4_ == GRDGTransientResourceAllocator._124_4_) {
        GRDGTransientResourceAllocator._120_4_ =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&GRDGTransientResourceAllocator.field_0x70,
                        (int *)&GRDGTransientResourceAllocator.field_0x7c);
      }
      lVar6 = (longlong)(int)GRDGTransientResourceAllocator._120_4_;
      GRDGTransientResourceAllocator._120_4_ = GRDGTransientResourceAllocator._120_4_ + 1;
      *(FRDGTransientRenderTarget **)(GRDGTransientResourceAllocator._112_8_ + lVar6 * 8) = this;
      LeaveCriticalSection((LPCRITICAL_SECTION)&GRDGTransientResourceAllocator.field_0x28);
      return 0;
    }
    FVar3 = (this->Desc).AliasableFormats.AllocatorInstance.SecondaryData;
    if (FVar3 != (ForElementType<EPixelFormat>)0x0) {
      FMemory::Free((void *)FVar3);
    }
    this->_padding_ = (longlong)&___7IPooledRenderTarget__6B_;
    if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)this->_padding_);
    }
    if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)this->_padding_);
    }
    if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)this->_padding_);
    }
    ::operator_delete(this,0x90);
  }
  return uVar7;
}

